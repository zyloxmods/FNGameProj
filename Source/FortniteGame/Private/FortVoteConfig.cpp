#include "FortVoteConfig.h"

FFortVoteConfig::FFortVoteConfig() {
    this->NumVoteOptions = 0;
    this->VoteDuration = 0.00f;
    this->FailedVoteLockOutDuration = 0.00f;
    this->MaxVotesAllowedPerPlayer = 0;
    this->VoteArbitratorType = EFortVoteArbitratorType::Invalid;
}

