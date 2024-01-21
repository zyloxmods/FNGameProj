#include "AthenaPickResult.h"

FAthenaPickResult::FAthenaPickResult() {
    this->PickType = EAthenaPickerType::EditMode;
    this->FoundBuildingActor = NULL;
    this->FoundPlayer = NULL;
}

