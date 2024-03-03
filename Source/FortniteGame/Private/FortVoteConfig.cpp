#include "FortVoteConfig.h"

FFortVoteConfig::FFortVoteConfig() {
    this->NumVoteOptions = 0;
    this->VoteDuration = 1;
    this->FailedVoteLockOutDuration = 1;
    this->MaxVotesAllowedPerPlayer = 0;
    this->VoteArbitratorType = EFortVoteArbitratorType::Invalid;
}

