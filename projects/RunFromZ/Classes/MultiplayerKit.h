//
//  NetworkBridge.h
//  RunFromZ
//
//  Created by Alok Rao on 12/12/13.
//
//

#ifndef __RunFromZ__NetworkBridge__
#define __RunFromZ__NetworkBridge__

#include <iostream>



typedef enum _MultiplayerProvider {
    APPLE_GAMEKIT = 1,
    NEXT_PEER = 2,
    GOOGLE_PLAY_GAME = 3
} MultiplayerProvider;


class MultiplayerKit
{
    bool _isInitialized;
    
};


#endif /* defined(__RunFromZ__NetworkBridge__) */
