#include "BuildingContainer.h"
#include "Net/UnrealNetwork.h"

void ABuildingContainer::StopAudiovisualIndicator() {
}

void ABuildingContainer::StartAudiovisualIndicator(UAudioComponent* ForComponent, EFortSoundIndicatorTypes Type, float Interval) {
}

void ABuildingContainer::SetSearchLootTierGroup(FName InSearchLootTierGroup) {
}

void ABuildingContainer::RaiseTreasure() {
}



void ABuildingContainer::OnRep_LootTier() {
}

void ABuildingContainer::OnRep_ChosenRandomUpgrade() {
}

void ABuildingContainer::OnRep_bAlreadySearched() {
}







int32 ABuildingContainer::GetLootTier() {
    return 0;
}



bool ABuildingContainer::BP_SpawnLoot(AFortPlayerPawn* PlayerPawn) {
    return false;
}

void ABuildingContainer::BounceContainer() {
}

void ABuildingContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingContainer, SearchedMesh);
    DOREPLIFETIME(ABuildingContainer, ReplicatedLootTier);
    DOREPLIFETIME(ABuildingContainer, ChosenRandomUpgrade);
    DOREPLIFETIME(ABuildingContainer, bAlreadySearched);
    DOREPLIFETIME(ABuildingContainer, bBuriedTreasure);
    DOREPLIFETIME(ABuildingContainer, bHasRaisedTreasure);
    DOREPLIFETIME(ABuildingContainer, bRegenerateLoot);
    DOREPLIFETIME(ABuildingContainer, SearchBounceData);
    DOREPLIFETIME(ABuildingContainer, TimeUntilLootRegenerates);
}

ABuildingContainer::ABuildingContainer() {
    SearchingSoundCueLoop = NULL;
    LootRepeatSoundCue = NULL;
    OnDamageSoundCue = NULL;
    OnDeathSoundCue = NULL;
    SearchedMesh = NULL;
    ReplicatedLootTier = 0;
    ChosenRandomUpgrade = 0;
    bSpawnedActor = false;
    SearchBounceRadiusOverride = 1;
    LootTestingData = NULL;
    LootNoiseRange = 1;
    InstancedLoot_TossSpeed = 1;
    InstancedLoot_TossConeHalfAngle = 1;
    LootTossSpeed_Athena = 1;
    LootTossConeHalfAngle_Athena = 1;
    HighestRarity = EFortRarity::Common;
    bUseLootProperties_Athena = true;
    bAlwaysShowContainer = false;
    bAlwaysMaintainLoot = false;
    bDestroyContainerOnSearch = false;
    bForceHidePickupMinimapIndicator = false;
    bForceSpawnLootOnDestruction = false;
    bForceTossLootOnSpawn = false;
    bAlreadySearched = false;
    bDoNotDropLootOnDestruction = false;
    bBuriedTreasure = false;
    bHasRaisedTreasure = false;
    bStartAlreadySearched_Athena = false;
    bRegenerateLoot = false;
    bUseLocationForDrop = false;
    LootedWeaponsDurabilityModifier = 1;
    SearchText = FText::FromString(TEXT("Search"));
    AudioIndicator_Component = NULL;
    CurrentInteractBounceCurve = NULL;
    CurrentInteractBounceNormalCurve = NULL;
    SavedReservedRandomValueResult = 1;
    TimeUntilLootRegenerates = 1;
}

