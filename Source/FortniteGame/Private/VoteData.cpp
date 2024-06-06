#include "VoteData.h"

FVoteData::FVoteData() {
    VoteType = EFortVoteType::SurvivalVote;
    VoteStartTime = 1;
    VoteEndTime = 1;
    NumVotersWithMaxVotes = 0;
    VoteStatus = EFortVoteStatus::Begin;
}

