#include "VoteData.h"

FVoteData::FVoteData() {
    this->VoteType = EFortVoteType::SurvivalVote;
    this->NumVotersWithMaxVotes = 0;
    this->VoteStatus = EFortVoteStatus::Begin;
}

