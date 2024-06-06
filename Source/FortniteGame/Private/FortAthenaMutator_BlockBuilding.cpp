#include "FortAthenaMutator_BlockBuilding.h"

FGameplayTagContainer AFortAthenaMutator_BlockBuilding::GetHUDVisibilityTags_Implementation() const {
    return FGameplayTagContainer{};
}

AFortAthenaMutator_BlockBuilding::AFortAthenaMutator_BlockBuilding() {
    AllowBuilding = EBuildingMode::None;
}

