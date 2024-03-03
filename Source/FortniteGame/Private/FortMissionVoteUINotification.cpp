#include "FortMissionVoteUINotification.h"


UFortMissionVoteUINotification::UFortMissionVoteUINotification() {
    this->VoteType = EFortVoteType::SurvivalVote;
    this->bHasVoteEnded = false;
    this->VoteResult = 0;
}

