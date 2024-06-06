#include "FortAthenaNpcEvaluator_FollowSquadLeader.h"

UFortAthenaNpcEvaluator_FollowSquadLeader::UFortAthenaNpcEvaluator_FollowSquadLeader() {
    FollowSquadLeaderStatusKeyName = TEXT("AIEvaluator_FollowSquadLeader_ExecutionStatus");
    FollowSquadLeaderMovementStateKeyName = TEXT("AIEvaluator_FollowSquadLeader_MovementState");
    FollowSquadLeaderDestinationKeyName = TEXT("AIEvaluator_FollowSquadLeader_Destination");
    TooFarFromLeaderKeyName = TEXT("AIEvaluator_FollowSquadLeader_TooFarFromLeader");
    CachedTooFarFromSquadLeaderDistanceSqr = 1;
    LastNoiseOffsetUpdateTime = 1;
    DurationNoiseEvaluate = 1;
}

