#include "BuildingGroup.h"

void UBuildingGroup::GetAllMapNames(TArray<FString>& AllMaps) {
}

UBuildingGroup::UBuildingGroup() {
    this->FallbackGroup = NULL;
    this->FoundationType = BFT_None;
}

