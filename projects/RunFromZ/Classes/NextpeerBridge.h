//
//  NextpeerBridge.h
//  RunFromZ
//
//  Created by Alok Rao on 12/14/13.
//
//

#ifndef __RunFromZ__NextpeerBridge__
#define __RunFromZ__NextpeerBridge__

#include "cocos2d.h"

#ifdef __OBJC__
@class NPTournamentStartDataContainer;
@class NPTournamentCustomMessageContainer;
@class NPTournamentCustomUnreliableMessageContainer;
@class NPTournamentEndDataContainer;
#else
typedef struct objc_object NPTournamentStartDataContainer;
typedef struct objc_object NPTournamentCustomMessageContainer;
typedef struct objc_object NPTournamentCustomUnreliableMessageContainer;
typedef struct objc_object NPTournamentEndDataContainer;
#endif



class NextpeerBridge
{
public:
    static void launchDashboard();
    static void updateScore(unsigned int score);
    static void nextpeerDidTournamentStartWithDetails(NPTournamentStartDataContainer* tournamentContainer);
    static void nextpeerDidTournamentEnd();
    static void nextpeerSupportsTournamentWithId(bool isSuppported);
    static void nextpeerWillTournamentStartWithDetail(NPTournamentStartDataContainer *tournamentContainer);
    static void nextpeerDashboardWillAppear();
    static void nextpeerDashboardDidAppear();
    static void nextpeerDashboardWillDisappear();
    static void nextpeerDashboardDidDisappear();
    static void nextpeerDashboardDidReturnToGame();
    static void nextpeerDidReceiveTournamentCustomMessage(NPTournamentCustomMessageContainer* message);
    static void nextpeerDidReceiveUnreliableTournamentCustomMessage(NPTournamentCustomUnreliableMessageContainer* message);
    static void nextpeerDidReceiveTournamentResults(NPTournamentEndDataContainer* tournamentContainer);
};

#endif /* defined(__RunFromZ__NextpeerBridge__) */
