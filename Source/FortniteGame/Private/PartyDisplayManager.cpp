#include "PartyDisplayManager.h"







void APartyDisplayManager::OnPawnTouchReleased(TEnumAsByte<ETouchIndex::Type> FingerIndex, AActor* TouchedActor) {
}

void APartyDisplayManager::OnPawnEndCursorOver(AActor* TouchedActor) {
}

void APartyDisplayManager::OnPawnClicked(AActor* TouchedActor, FKey ButtonPressed) {
}

void APartyDisplayManager::OnPawnBeginCursorOver(AActor* TouchedActor) {
}


void APartyDisplayManager::NotifyPrefabChanged(AActor* PrefabActor, UFortItem* CurrentItem) {
}


void APartyDisplayManager::HandleItemsShown(const TArray<UFortItem*>& ItemShown, const FGuid& RequestID) {
}

void APartyDisplayManager::HandleCharacterCustomizationFinished(AFortPlayerPawn* Pawn) {
}


FUniqueNetIdRepl APartyDisplayManager::GetPlayerIdFromPartyMemberIndex(int32 PartyMemberIndex) const {
    return FUniqueNetIdRepl{};
}

bool APartyDisplayManager::GetPartyMemberIndexByPlayerPawn(const AFortPlayerPawn* PlayerPawn, int32& OutPlayerIndex) const {
    return false;
}


AFortPlayerPawn* APartyDisplayManager::GetHeroPlayerPawnForCurrentDisplayedItem() {
    return NULL;
}

FFortAthenaLoadout APartyDisplayManager::GetCosmeticLoadoutForCurrentDisplayedItem() const {
    return FFortAthenaLoadout{};
}


void APartyDisplayManager::BeginLoadingAssetsForItem(UFortItem* ItemToView, const TArray<TSoftObjectPtr<UObject>>& AssetsToLoad, const FGuid& RequestID) {
}

APartyDisplayManager::APartyDisplayManager() {
    VaultPlacementActor = NULL;
    VaultWeaponPlacementActor = NULL;
    PlayerInMatchHoloMaterial = NULL;
    IsPlayingCelebrateFX = false;
}

