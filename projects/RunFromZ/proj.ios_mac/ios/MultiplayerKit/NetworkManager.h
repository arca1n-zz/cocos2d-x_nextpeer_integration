//
//  NetworkManager.h
//  RunFromZ
//
//  Created by Alok Rao on 12/12/13.
//
//

#import <Foundation/Foundation.h>
#import <Nextpeer/Nextpeer.h>
#import "CWLSynthesizeSingleton.h"

#define NEXTPEER_GAME_ID @"9e8f784babf3a09fcd6a42750c7ee6b5"

@interface NetworkManager : NSObject

CWL_DECLARE_SINGLETON_FOR_CLASS(NetworkManager)

-(id)init;
-(void)launchDashBoard;
-(void)authenticateLocalPlayer;
-(void)sendData:(NSData*)data;
-(void)sendScore:(NSUInteger)score;



@end
