#include "BlueprintLibrarySTW.h"

bool UBlueprintLibrarySTW::SwitchHeroType(AFortPlayerController* FortPC, const FString& NewHeroName) {
    return false;
}

void UBlueprintLibrarySTW::SetIdleKickEnabled(UObject* WorldContextObject, bool bEnabled) {
}

void UBlueprintLibrarySTW::SetCriticalMissionJoinability(UObject* WorldContextObject, bool bJoinable) {
}

bool UBlueprintLibrarySTW::GetShowHeroHeadAccessoriesForLocalPlayer(UObject* WorldContextObject) {
    return false;
}

bool UBlueprintLibrarySTW::GetShowHeroBackpackForLocalPlayer(UObject* WorldContextObject) {
    return false;
}

UFortAbilityKit* UBlueprintLibrarySTW::GetRemovedAbilityKit(const FFortSpecializationSlot& Slot) {
    return NULL;
}

bool UBlueprintLibrarySTW::GetPurchaseCostsRow(FDataTableRowHandle DataTableRowHandle, FFortCollectionBookDirectPurchaseData& OutRow) {
    return false;
}

bool UBlueprintLibrarySTW::GetLocalPlayerHasHeroHeadAccessories(UObject* WorldContextObject) {
    return false;
}

bool UBlueprintLibrarySTW::GetLocalPlayerHasHeroBackpack(UObject* WorldContextObject) {
    return false;
}

UFortAbilityKit* UBlueprintLibrarySTW::GetGrantedAbilityKit(const FFortSpecializationSlot& Slot) {
    return NULL;
}

float UBlueprintLibrarySTW::GetGameDifficulty() {
    return 0.0f;
}

float UBlueprintLibrarySTW::GetCalculatedGameDifficulty(UObject* WorldContextObject) {
    return 0.0f;
}

FFortEncounterSettings UBlueprintLibrarySTW::ApplyEncounterOptionOverridesFromWaveDataToEncounterSettings(const FTieredWaveSetData& WaveData, FFortEncounterSettings& EncounterSettings) {
    return FFortEncounterSettings{};
}

UBlueprintLibrarySTW::UBlueprintLibrarySTW() {
}

