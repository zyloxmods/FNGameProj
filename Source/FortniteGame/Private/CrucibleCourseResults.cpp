#include "CrucibleCourseResults.h"

FCrucibleCourseResults::FCrucibleCourseResults() {
    this->CalculatedScore = 1;
    this->CalculatedTotalPenalty = 1;
    this->CalculatedMissedTargets = 0;
    this->CalculatedSpawnedTargets = 0;
    this->StartTime = 1;
    this->FinishTime = 1;
    this->CancelTime = 1;
    this->bInputMethodWasKBMAtAnyPoint = false;
}

