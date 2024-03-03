#include "FortMatchServerAnalytics.h"

UFortMatchServerAnalytics::UFortMatchServerAnalytics() {
    this->PlayersNotCompletingPhasePercentage = 1;
    this->PlayersDisconnectingUnexpectedlyPercentage = 1;
    this->MatchStartThreshold = 4294967295;
}

