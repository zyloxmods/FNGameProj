#include "FortMissionVoteUINotification.h"


UFortMissionVoteUINotification::UFortMissionVoteUINotification() {
    VoteType = EFortVoteType::SurvivalVote;
    bHasVoteEnded = false;
    VoteResult = 0;
}

