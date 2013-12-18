//
//  NextPeerMultiplayer.h
//  RunFromZ
//
//  Created by Alok Rao on 12/13/13.
//
//

#ifndef __RunFromZ__NextPeerMultiplayer__
#define __RunFromZ__NextPeerMultiplayer__

#include "IMultiplayer.h"
#import <Nextpeer/Nextpeer.h>

@interface NextPeerMultiplayerDelegate : NSObject<NextpeerDelegate>

/**
 This method will be called when a tournament is about to start.
 The tournament start container will give you some details on the tournament which is about to be played.
 For example the tournament UUID, name and time.
 */
-(void)nextpeerDidTournamentStartWithDetails:(NPTournamentStartDataContainer *)tournamentContainer;

/**
 This method is invoked whenever the current tournament has finished.
 In here you can place some cleanup code. For example,
 you can use this method to recycle the game scene.
 */
-(void)nextpeerDidTournamentEnd;

// All of the delegate methods below are optional.
// Implement them only when you need to more finely control Nextpeer's behavior.

/**
 Use this function to tell the SDK whether you support the given tournament. This method
 is called once for each tournament uuid that is present in the dashboard. If this particular
 game version doesn't support a certain tournament, use this function to tell the SDK to disable it.
 
 Return YES if you support this tournament and NO otherwise (default YES).
 */
-(BOOL)nextpeerSupportsTournamentWithId:(NSString* )tournamentUuid;

/**
 This method will be called in case Nextpeer is not supported on the device.
 If you will return YES we will not show our error view and let you the opportunity to intervene.
 (Default NO -> We will show UIAlertView).
 */
-(BOOL)nextpeerNotSupportedShouldShowCustomError;

/**
 We will call it when the before the tournament will start (prior the dismissing the dashboard).
 */
- (void)nextpeerWillTournamentStartWithDetails:(NPTournamentStartDataContainer *)tournamentContainer;

/**
 This is where you should pause your game.
 */
- (void)nextpeerDashboardWillAppear;

/**
 This method is invoked when the dashboard has finished its animated transition and is now fully visible.
 */
- (void)nextpeerDashboardDidAppear;

/**
 This is where Cocoa based games should unpause and resume playback.
 
 @warning Since an exit animation will play, this will cause negative performance if your game
 is rendering on an EAGLView. For OpenGL games, you should refresh your view once and
 resume your game in NextpeerDelegate::nextpeerDashboardDidDisappear.
 */
- (void)nextpeerDashboardWillDisappear;

/**
 This is where OpenGL games should unpause and resume playback.
 */
- (void)nextpeerDashboardDidDisappear;

/**
 This method will be called when the player closes Nextpeer's dashboard and returns to the game.
 */
- (void)nextpeerDashboardDidReturnToGame;

/**
 Tells Nextpeer if the game wants to display its own screens immediately after the player taps the "Play Again" button and before the next game starts.
 If you implement this method, you must also implement NextpeerDelegate::nextpeerWillHideToShowInterGameScreen.
 */
-(BOOL)shouldAllowInterGameScreen;

/**
 Tells the game that Nextpeer will hide itself in order to allow the game to display a "inter-game" screen.
 Only relevant in conjunction with shouldAllowInterGameScreen.
 */
-(void)nextpeerWillHideToShowInterGameScreen;


@end



class NextPeerMultiplayer : public IMultiplayer
{
public:
    NextPeerMultiplayer();
    virtual ~NextPeerMultiplayer();
    virtual void initialize();
    virtual void authenticateLocalPlayer();
    virtual void startMatch();
    virtual void endMatch();
    virtual void sendData(void *, int);
    virtual void receiveData(void *);
    //virtual void setPlayer(IPlayer *);
    virtual void launchDashboard();
    virtual void updateScore(unsigned int score);
    virtual bool checkForTournament(char *tournamentID);
    virtual bool isInTournament();
    virtual void exitTournament();
    virtual void tournamentOver(unsigned int score);
    virtual void tournamentStatus();
};

#include <iostream>

#endif /* defined(__RunFromZ__NextPeerMultiplayer__) */
