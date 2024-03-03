#include "CrucibleSegmentResults.h"

FCrucibleSegmentResults::FCrucibleSegmentResults() {
    this->SegmentId = 0;
    this->CalculatedScore = 1;
    this->CalculatedPenalty = 1;
    this->CalculatedMissedTargets = 0;
    this->StartTime = 1;
    this->FinishTime = 1;
    this->CancelTime = 1;
    this->NumAIElims = 0;
    this->NumTargetElims = 0;
}

