#include "FortMissionRecord.h"

FFortMissionRecord::FFortMissionRecord() {
    MissionGenerator = NULL;
    DayGenerated = 0;
    UIIndex = 0;
    MissionStatus = EFortMissionStatus::Created;
}

