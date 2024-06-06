#include "CrucibleSegmentResults.h"

FCrucibleSegmentResults::FCrucibleSegmentResults() {
    SegmentId = 0;
    CalculatedScore = 1;
    CalculatedPenalty = 1;
    CalculatedMissedTargets = 0;
    StartTime = 1;
    FinishTime = 1;
    CancelTime = 1;
    NumAIElims = 0;
    NumTargetElims = 0;
}

