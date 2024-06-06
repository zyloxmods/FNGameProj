#include "CrucibleCourseResults.h"

FCrucibleCourseResults::FCrucibleCourseResults() {
    CalculatedScore = 1;
    CalculatedTotalPenalty = 1;
    CalculatedMissedTargets = 0;
    CalculatedSpawnedTargets = 0;
    StartTime = 1;
    FinishTime = 1;
    CancelTime = 1;
    bInputMethodWasKBMAtAnyPoint = false;
}

