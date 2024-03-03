#include "FortOutpostFunctionLibrary.h"

void UFortOutpostFunctionLibrary::TransferItemToStorage(AFortPlayerController* Player, UFortWorldItem* Item, int32 Count) {
}

void UFortOutpostFunctionLibrary::TransferItemFromStorage(AFortPlayerController* Player, UFortWorldItem* Item, int32 Count) {
}

void UFortOutpostFunctionLibrary::SetWargameActive(UObject* WorldContextObject, bool bActive) {
}

void UFortOutpostFunctionLibrary::SetStormShieldDefenseType(UObject* WorldContextObject, EStormShieldDefense Type) {
}

void UFortOutpostFunctionLibrary::SetOutpostGameDifficultyRow(UObject* WorldContextObject, const FDataTableRowHandle& GameDifficultyInfo) {
}

void UFortOutpostFunctionLibrary::SetOutpostDefenseActive(UObject* WorldContextObject, bool bActive) {
}

void UFortOutpostFunctionLibrary::SetIronCityMinMaxPowerLevels(UObject* WorldContextObject, float MinPowerLevel, float MaxPowerLevel) {
}

void UFortOutpostFunctionLibrary::SetEnduranceWaveCompleted(UObject* WorldContextObject, const int32 WaveNumber, bool& bNewHighest) {
}

void UFortOutpostFunctionLibrary::SaveIronCityLowestPlayerAccountLevel(UObject* WorldContextObject, int32 AccountLevel) {
}

void UFortOutpostFunctionLibrary::SaveIronCityEarlyPlayerInfos(UObject* WorldContextObject) {
}

FGameplayTag UFortOutpostFunctionLibrary::GetPlacementTagFromOutpostBuildingTag(UObject* WorldContextObject, const FGameplayTag& BuildingTag) {
    return FGameplayTag{};
}

UFortMissionConfigData* UFortOutpostFunctionLibrary::GetOutpostQuestMissionConfigDataFrontEnd(AFortPlayerControllerFrontEnd* FortPC, FGameplayTag ConfigTag) {
    return NULL;
}

UFortMissionConfigData* UFortOutpostFunctionLibrary::GetOutpostQuestMissionConfigData(UObject* WorldContextObject, FGameplayTag ConfigTag) {
    return NULL;
}

AFortPlayerControllerOutpost* UFortOutpostFunctionLibrary::GetOutpostOwner(UObject* WorldContextObject) {
    return NULL;
}

FGameplayTag UFortOutpostFunctionLibrary::GetOutpostBuildingTagFromPlacementTag(UObject* WorldContextObject, const FGameplayTag& PlacementTag) {
    return FGameplayTag{};
}

UFortOutpostItemDefinition* UFortOutpostFunctionLibrary::GetOutpostBuildingItemDefinition(UObject* WorldContextObject, EOutpostBuildings Building) {
    return NULL;
}

int32 UFortOutpostFunctionLibrary::GetIronCityAveragePlayerAccountLevel(UObject* WorldContextObject) {
    return 0;
}

FIronCityDifficultyInfo UFortOutpostFunctionLibrary::GetCachedIronCityDifficultyInfo(UObject* WorldContextObject) {
    return FIronCityDifficultyInfo{};
}

void UFortOutpostFunctionLibrary::FlushTransferRequests(AFortPlayerController* Player) {
}

bool UFortOutpostFunctionLibrary::DeployOutpostBuildingTagOnPlacementTag(UObject* WorldContextObject, const FGameplayTag& BuildingTag, const FGameplayTag& PlacementTag) {
    return false;
}

void UFortOutpostFunctionLibrary::CacheIronCityDifficultyInfo(UObject* WorldContextObject, int32 AccountLevel) {
}

bool UFortOutpostFunctionLibrary::BuildingActorRecordUpdatesEnabled(UObject* WorldContextObject) {
    return false;
}

UFortOutpostFunctionLibrary::UFortOutpostFunctionLibrary() {
}

