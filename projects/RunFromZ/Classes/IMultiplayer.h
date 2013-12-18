//
//  IMultiplayer.h
//  RunFromZ
//
//  Created by Alok Rao on 12/13/13.
//
//

#ifndef RunFromZ_IMultiplayer_h
#define RunFromZ_IMultiplayer_h
#include <iostream>

class IMultiplayer
{
public:
    virtual ~IMultiplayer() = 0;
    virtual void initialize() = 0;
    virtual void authenticateLocalPlayer() = 0;
    virtual void matchStarted() = 0;
    virtual void matchEnded() = 0;
    virtual void sendData(void *, int) = 0;
    virtual void receiveData(void *) = 0;
    //virtual void setPlayer(IPlayer *) = 0;
    virtual void launchDashboard() = 0;
    virtual void updateScore(unsigned int score) = 0;
    virtual bool checkForTournament(char *tournamentID) = 0;
    virtual bool isInTournament() = 0;
    virtual void exitTournament() = 0;
    virtual void tournamentOver(unsigned int score) = 0;
    virtual void tournamentStatus() = 0;
};


#endif
