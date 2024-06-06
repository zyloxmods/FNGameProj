#include "BuildingGroup.h"

void UBuildingGroup::GetAllMapNames(TArray<FString>& AllMaps) const {
}

UBuildingGroup::UBuildingGroup() {
    FallbackGroup = NULL;
    FoundationType = BFT_None;
}

