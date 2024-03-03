#include "FortExpeditionUtilities.h"

int32 UFortExpeditionUtilities::TotalUnseenExpeditionsForTab(const UWidget* Widget, const FName TabNameID) {
    return 0;
}

bool UFortExpeditionUtilities::IsSquadOnExpedition(const UWidget* Widget, const FName SquadId) {
    return false;
}

FGameplayTag UFortExpeditionUtilities::GetVehicleTagRequiredForExpedition(const UFortExpeditionItem* Expedition) {
    return FGameplayTag{};
}

bool UFortExpeditionUtilities::GetVehicleTagFromSquadId(const FName SquadId, FGameplayTag& OutFoundVehicleTag) {
    return false;
}

void UFortExpeditionUtilities::GetTotalExpeditionVehiclesAvailable(const UWidget* Widget, AFortPlayerController* FortPC, int32& OutLandVehicles, int32& OutLandVehiclesAvailable, int32& OutSeaVehicles, int32& OutSeaVehiclesAvailable, int32& OutAirVehicles, int32& OutAirVehiclesAvailable) {
}

void UFortExpeditionUtilities::GetMatchedCriteriaTags(UFortExpeditionItem* Expedition, const TArray<UFortItem*>& SlottedItems, TArray<FGameplayTag>& OutMatchedCriteria) {
}

bool UFortExpeditionUtilities::GetExpeditionSquadsThatMatchRequirements(const FGameplayTagContainer& RequirementTags, AFortPlayerController* FortPC, TArray<FName>& OutExpeditionSquadIds) {
    return false;
}

float UFortExpeditionUtilities::GetExpeditionSquadPower(AFortPlayerController* FortPC, const FName SquadId) {
    return 0.0f;
}

void UFortExpeditionUtilities::GetAllExpeditionSquadIds(TArray<FName>& OutExpeditionSquadIds) {
}

float UFortExpeditionUtilities::CalculateTotalPower(AFortPlayerController* FortPC, const UFortExpeditionItem* Expedition, const FName SquadId, const TArray<UFortItem*>& SlottedItems) {
    return 0.0f;
}

void UFortExpeditionUtilities::CalculateGlobalAndItemRatingModValuesBP(const UFortExpeditionItem* Expedition, const TArray<UFortItem*>& SlottedItems, float& GlobalPowerMod, TArray<float>& SlottedItemMods) {
}

float UFortExpeditionUtilities::CalculateExpeditionPercentageChanceForSuccess(const UFortExpeditionItem* Expedition, const float TotalPower) {
    return 0.0f;
}

bool UFortExpeditionUtilities::AreExpeditionsUnlocked(UObject* WorldContextObject, const FUniqueNetIdRepl& UniqueId) {
    return false;
}

bool UFortExpeditionUtilities::AreAnyExpeditionsComplete(const UWidget* Widget) {
    return false;
}

UFortExpeditionUtilities::UFortExpeditionUtilities() {
}

