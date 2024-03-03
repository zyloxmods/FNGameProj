#include "CrucibleSegmentData.h"

FCrucibleSegmentData::FCrucibleSegmentData() {
    this->bRegistered = false;
    this->NumAI = 0;
    this->NumTargets = 0;
    this->MissedTargetPenalty = 1;
    this->BackendStatType = EFortCrucibleStatType::CourseOverall;
}

