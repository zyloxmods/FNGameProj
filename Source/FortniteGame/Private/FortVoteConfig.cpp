#include "FortVoteConfig.h"

FFortVoteConfig::FFortVoteConfig() {
    NumVoteOptions = 0;
    VoteDuration = 1;
    FailedVoteLockOutDuration = 1;
    MaxVotesAllowedPerPlayer = 0;
    VoteArbitratorType = EFortVoteArbitratorType::Invalid;
}

