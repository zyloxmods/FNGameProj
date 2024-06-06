#include "CrucibleSegmentData.h"

FCrucibleSegmentData::FCrucibleSegmentData() {
    bRegistered = false;
    NumAI = 0;
    NumTargets = 0;
    MissedTargetPenalty = 1;
    BackendStatType = EFortCrucibleStatType::CourseOverall;
}

