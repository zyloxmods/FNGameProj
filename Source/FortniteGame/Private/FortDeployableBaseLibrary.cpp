#include "FortDeployableBaseLibrary.h"

void UFortDeployableBaseLibrary::UpdateDeployableBaseTierProgressionForPlayers(UObject* WorldContextObject, const UFortTieredCollectionLayout* CollectionLayout, int32 TierDefeated) {
}

void UFortDeployableBaseLibrary::SetupDeployableBaseCombatZoneInventoriesOnPlayers(UObject* WorldContextObject, const TArray<FName>& TierGroups, const TArray<AFortPlayerController*>& PlayerControllers) {
}

void UFortDeployableBaseLibrary::SetDeployableBaseMatchJoinability(UObject* WorldContextObject, bool bMatchJoinable) {
}

void UFortDeployableBaseLibrary::ResetDeployableBaseHordePlayerInventories(UObject* WorldContextObject) {
}

void UFortDeployableBaseLibrary::OnPreHordeTierStart(UObject* WorldContextObject, int32 Tier, int32 ModifierRRVSeed) {
}

bool UFortDeployableBaseLibrary::IsWorldItemDefValidToPersistForDeployableBasePlayerInventory(const UFortWorldItemDefinition* ItemDefinition) {
    return false;
}

void UFortDeployableBaseLibrary::GrantPlayersCompletedWaveRewards(UObject* WorldContextObject, int32 Tier, int32 Wave, int32 NumberOfPlayers, const TArray<ADeployableBaseCore*>& TargetCores, const TArray<ADeployableBaseCore*>& AllCores, const FFortTierCollectionLayoutOutput& CollectionData, const TArray<FName>& TierGroups) {
}

void UFortDeployableBaseLibrary::GetTieredModifierSet(FName TieredModifierSetName, TArray<FTieredModifierSetData>& OutModifierSetData) {
}

AFortMission* UFortDeployableBaseLibrary::GetPrimaryHordeMission(UObject* WorldContextObject) {
    return NULL;
}

EHordeTierStartStatus UFortDeployableBaseLibrary::GetHordeTierStartStatus(UObject* WorldContextObject) {
    return EHordeTierStartStatus::ReadyToStart;
}

FGameDifficultyInfo UFortDeployableBaseLibrary::GetGameDifficultyInfo(const FName RowName) {
    return FGameDifficultyInfo{};
}

void UFortDeployableBaseLibrary::ForceRestartDeployableBasePlayers(UObject* WorldContextObject, bool bRestartInvulnerable) {
}

void UFortDeployableBaseLibrary::ForceDeployableBaseHordePlayersToResetAndRespawn(UObject* WorldContextObject) {
}

void UFortDeployableBaseLibrary::ForceClearAllDefenders(UObject* WorldContextObject) {
}

void UFortDeployableBaseLibrary::BroadcastHordeTierComplete(UObject* WorldContextObject, EFortCompletionResult Result) {
}

void UFortDeployableBaseLibrary::ApplyTieredModifierSet(UObject* WorldContextObject, const TArray<FTieredModifierSetData>& ModifierSetData, int32 Tier, int32 WaveNum, bool bDeferTemporaryModifiers, TArray<FActiveGameplayModifierHandle>& OutAppliedModifiers) {
}

UFortDeployableBaseLibrary::UFortDeployableBaseLibrary() {
}

