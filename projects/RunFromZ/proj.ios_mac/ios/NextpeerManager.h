//
//  NextpeerManager.h
//  RunFromZ
//
//  Created by Alok Rao on 12/14/13.
//
//

#import <Foundation/Foundation.h>
#import "CWLSynthesizeSingleton.h"
#import <Nextpeer/Nextpeer.h>
#import "NextPeerGameDelegate.h"

#define NEXT_PEER_GAME_KEY @"9e8f784babf3a09fcd6a42750c7ee6b5"


@interface NextpeerManager : NSObject

CWL_DECLARE_SINGLETON_FOR_CLASS(NextpeerManager)

@property(nonatomic, strong) NextPeerGameDelegate *nextpeerDelegate;

-(void)initialize:(NSDictionary*)launchOptions;
-(void)launchDashboard;
-(void)shutdown;



@end
