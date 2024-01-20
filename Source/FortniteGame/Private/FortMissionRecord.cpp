#include "FortMissionRecord.h"

FFortMissionRecord::FFortMissionRecord() {
    this->MissionGenerator = NULL;
    this->DayGenerated = 0;
    this->UIIndex = 0;
    this->MissionStatus = EFortMissionStatus::Created;
}

