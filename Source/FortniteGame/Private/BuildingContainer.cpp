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
    this->SearchingSoundCueLoop = NULL;
    this->LootRepeatSoundCue = NULL;
    this->OnDamageSoundCue = NULL;
    this->OnDeathSoundCue = NULL;
    this->SearchedMesh = NULL;
    this->ReplicatedLootTier = 0;
    this->ChosenRandomUpgrade = 0;
    this->bSpawnedActor = false;
    this->SearchBounceRadiusOverride = 1;
    this->LootTestingData = NULL;
    this->LootNoiseRange = 1;
    this->InstancedLoot_TossSpeed = 1;
    this->InstancedLoot_TossConeHalfAngle = 1;
    this->LootTossSpeed_Athena = 1;
    this->LootTossConeHalfAngle_Athena = 1;
    this->HighestRarity = EFortRarity::Common;
    this->bUseLootProperties_Athena = true;
    this->bAlwaysShowContainer = false;
    this->bAlwaysMaintainLoot = false;
    this->bDestroyContainerOnSearch = false;
    this->bForceHidePickupMinimapIndicator = false;
    this->bForceSpawnLootOnDestruction = false;
    this->bForceTossLootOnSpawn = false;
    this->bAlreadySearched = false;
    this->bDoNotDropLootOnDestruction = false;
    this->bBuriedTreasure = false;
    this->bHasRaisedTreasure = false;
    this->bStartAlreadySearched_Athena = false;
    this->bRegenerateLoot = false;
    this->bUseLocationForDrop = false;
    this->LootedWeaponsDurabilityModifier = 1;
    this->SearchText = FText::FromString(TEXT("Search"));
    this->AudioIndicator_Component = NULL;
    this->CurrentInteractBounceCurve = NULL;
    this->CurrentInteractBounceNormalCurve = NULL;
    this->SavedReservedRandomValueResult = 1;
    this->TimeUntilLootRegenerates = 1;
}

