//
//  NextpeerBridge.cpp
//  RunFromZ
//
//  Created by Alok Rao on 12/14/13.
//
//

#include "NextpeerBridge.h"
#import "NextpeerManager.h"


void NextpeerBridge::nextpeerDashboardWillAppear(){
    
}

void NextpeerBridge::updateScore(unsigned int score)
{
    [Nextpeer reportScoreForCurrentTournament:score];
}


 void NextpeerBridge::nextpeerDidTournamentStartWithDetails(NPTournamentStartDataContainer * tournamentContainer)
{
    
}


 void NextpeerBridge::nextpeerDidTournamentEnd()
{
    
}


 void NextpeerBridge::nextpeerSupportsTournamentWithId(bool isSuppported)
{
    
}


 void NextpeerBridge::nextpeerWillTournamentStartWithDetail(NPTournamentStartDataContainer *tournamentContainer)
{
    CCLOG("Starting Tournament");
}





 void NextpeerBridge::nextpeerDashboardDidAppear()
{
    CCLOG("Dashboard appeared. Pausing game");
    cocos2d::Director::getInstance()->pause();
}


 void NextpeerBridge::nextpeerDashboardWillDisappear()
{
    CCLOG("Dashboard will disappear.");
}


 void NextpeerBridge::nextpeerDashboardDidDisappear()
{
    CCLOG("Resuming game");
    cocos2d::Director::getInstance()->resume();
}


 void NextpeerBridge::nextpeerDashboardDidReturnToGame()
{
    CCLOG("Dashboard returned to the game.");
}


 void NextpeerBridge::nextpeerDidReceiveTournamentCustomMessage(NPTournamentCustomMessageContainer* message)
{
    
}


 void NextpeerBridge::nextpeerDidReceiveUnreliableTournamentCustomMessage(NPTournamentCustomUnreliableMessageContainer* message)
{
    
}

void NextpeerBridge::launchDashboard()
{
    CCLOG("Launching Dashboard");
    [[NextpeerManager sharedNextpeerManager] launchDashboard];
}

 void NextpeerBridge::nextpeerDidReceiveTournamentResults(NPTournamentEndDataContainer* tournamentContainer)
{
    
    
}