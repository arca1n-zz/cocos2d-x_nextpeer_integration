//
//  NextpeerManager.m
//  RunFromZ
//
//  Created by Alok Rao on 12/14/13.
//
//

#import "NextpeerManager.h"

@implementation NextpeerManager

@synthesize nextpeerDelegate = _nextpeerDelegate;

CWL_SYNTHESIZE_SINGLETON_FOR_CLASS(NextpeerManager)

-(void)initialize:(NSDictionary*)launchOptions
{
    self.nextpeerDelegate = [[NextPeerGameDelegate alloc] init];
    // Initialize Nextpeer
    [Nextpeer initializeWithProductKey:NEXT_PEER_GAME_KEY
                          andDelegates:[NPDelegatesContainer containerWithNextpeerDelegate:self.nextpeerDelegate]];
    
    // Handle any notifications the game was launched with
    [Nextpeer handleLaunchOptions:launchOptions];
}

-(void)shutdown
{
    [Nextpeer dismissDashboard];
}

-(void)launchDashboard
{
    [Nextpeer launchDashboard];
}


@end
