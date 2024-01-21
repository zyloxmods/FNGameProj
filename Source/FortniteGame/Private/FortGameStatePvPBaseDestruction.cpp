#include "FortGameStatePvPBaseDestruction.h"

int32 AFortGameStatePvPBaseDestruction::GetTeamLevelForExperienceAmount(int32 Experience) const {
    return 0;
}

int32 AFortGameStatePvPBaseDestruction::GetMaxTeamLevel() const {
    return 0;
}

int32 AFortGameStatePvPBaseDestruction::GetMaxTeamExperience() const {
    return 0;
}

int32 AFortGameStatePvPBaseDestruction::GetExperienceRequiredForTeamLevel(int32 TeamLevel) const {
    return 0;
}

AFortGameStatePvPBaseDestruction::AFortGameStatePvPBaseDestruction() {
    this->SessionXPRowName = TEXT("DefaultPvP");
    this->MaxTeamLevel = 20;
    this->MaxTeamExperience = 100;
}

