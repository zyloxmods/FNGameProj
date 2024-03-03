#include "FortAthenaNpcEvaluator_FollowSquadLeader.h"

UFortAthenaNpcEvaluator_FollowSquadLeader::UFortAthenaNpcEvaluator_FollowSquadLeader() {
    this->FollowSquadLeaderStatusKeyName = TEXT("AIEvaluator_FollowSquadLeader_ExecutionStatus");
    this->FollowSquadLeaderMovementStateKeyName = TEXT("AIEvaluator_FollowSquadLeader_MovementState");
    this->FollowSquadLeaderDestinationKeyName = TEXT("AIEvaluator_FollowSquadLeader_Destination");
    this->TooFarFromLeaderKeyName = TEXT("AIEvaluator_FollowSquadLeader_TooFarFromLeader");
    this->CachedTooFarFromSquadLeaderDistanceSqr = 1;
    this->LastNoiseOffsetUpdateTime = 1;
    this->DurationNoiseEvaluate = 1;
}

