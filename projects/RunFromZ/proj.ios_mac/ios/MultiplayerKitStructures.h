//
//  MultiplayerKitStructures.h
//  RunFromZ
//
//  Created by Alok Rao on 12/13/13.
//
//

#ifndef RunFromZ_MultiplayerKitStructures_h
#define RunFromZ_MultiplayerKitStructures_h
#include <string>
#include "cocos2d.h"

using namespace cocos2d;
using namespace std;


typedef struct _TournamentCustomMessageBase : public Object
{

#pragma mark -
#pragma mark NPTournamentCustomMessageBaseContainer
#pragma mark -


    /// The player name.
    string playerName;

    /// A unique player identifier for the current game.
    string playerId;

    /// The player's profile image URL.
    string playerImageUrl;

    /// The player image
    /// @note This property can sometimes return nil, this happens if the image for the player that sent the message is unavailable.
    Image* playerImage;

    /// Boolean value that indicates if this message came form a bot recording or a real-life player.
    bool playerIsBot;

    /// The custom message (passed as a buffer).
    unsigned char *message;

@end

} TournamentCustomMessageBase;

typedef struct _TournamentCustomMessage : public _TournamentCustomMessageBase
{
    
}TournamentCustomMessage;


typedef struct _TournamentStart {
    /// The tournament UUID is provided so that your game can identify which tournament needs to be loaded.
    /// You can find the UUID in the developer dashboard
    string tournamentUUid;
    
    /// The tournament display name
    string tournamentName;
    
    /// The tournament time to play in seconds
    unsigned int tournamentTimeSeconds;
    
    /// A random seed generated for this tournament. All players within the same tournament
    /// receive the same seed from the tournament. Can be used for level generation, to ensure
    /// all players play the same level in a specific game.
    unsigned int tournamentRandomSeed;
    
    /// A flag that states if the current tournament is game controlled
    bool tournamentIsGameControlled;
    
    /// The number of players that started this tournament. Includes the current player.
    unsigned int numberOfPlayers;
    
}TournamentStart;

typedef struct _TournamentEnd : public Object{
    /// The tournament UUID is provided so that your game can identify which tournament needs to be loaded.
    /// You can find the UUID in the developer dashboard
    string tournamentUUid;
    
    /// The tournament display name
    string playerName;
    
    /// The player total currency amount (after the tournament ended of course).
    unsigned int currentCurrencyAmount;
    
    /// The player rank in the tournament (where 1 means first, 1..tournamentTotalPlayers).
    unsigned int playerRankInTournament;
    
    /// The player's score at the end of the tournament.
    unsigned int playerScore;
    
    /// The number of players that started this tournament. Includes the current player.
    unsigned int tournamentTotalPlayers;
    
}TournamentEnd;

typedef struct _TournamentStatusInfo : public Object{
    Array *sortedResults;
}TournamentStatusInfo;

typedef _TournamentPlayer <#new#>;

#endif
