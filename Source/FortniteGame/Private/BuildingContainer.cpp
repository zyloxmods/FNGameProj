#include "BuildingContainer.h"
#include "Net/UnrealNetwork.h"

void ABuildingContainer::RaiseTreasure() {
}



void ABuildingContainer::OnRep_bAlreadySearched() {
}






int32 ABuildingContainer::GetLootTier() {
    return 0;
}



void ABuildingContainer::BounceContainer() {
}

void ABuildingContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingContainer, SearchedMesh);
    DOREPLIFETIME(ABuildingContainer, ReplicatedLootTier);
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
    this->bSpawnedActor = false;
    this->ReplicatedLootTier = -1;
    this->SearchBounceRadiusOverride = -1.00f;
    this->LootTestingData = NULL;
    this->LootNoiseRange = 512.00f;
    this->InstancedLoot_TossSpeed = 650.00f;
    this->InstancedLoot_TossConeHalfAngle = 15.00f;
    this->LootTossSpeed_Athena = 550.00f;
    this->LootTossConeHalfAngle_Athena = 60.00f;
    this->HighestRarity = EFortRarity::NumRarityValues;
    this->bAlwaysShowContainer = false;
    this->bAlwaysMaintainLoot = false;
    this->bDestroyContainerOnSearch = false;
    this->bAlreadySearched = false;
    this->bBuriedTreasure = false;
    this->bHasRaisedTreasure = false;
    this->bStartAlreadySearched_Athena = false;
    this->bRegenerateLoot = false;
    this->bUseLocationForDrop = false;
    this->LootedWeaponsDurabilityModifier = 0.25f;
    this->SearchText = FText::FromString(TEXT("Search"));
    this->CurrentInteractBounceCurve = NULL;
    this->CurrentInteractBounceNormalCurve = NULL;
    this->SavedReservedRandomValueResult = 0.00f;
    this->TimeUntilLootRegenerates = 0.00f;
}

