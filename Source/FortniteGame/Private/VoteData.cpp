#include "VoteData.h"

FVoteData::FVoteData() {
    this->VoteType = EFortVoteType::SurvivalVote;
    this->VoteStartTime = 1;
    this->VoteEndTime = 1;
    this->NumVotersWithMaxVotes = 0;
    this->VoteStatus = EFortVoteStatus::Begin;
}

