#include "BuildingRift.h"
#include "FortSpectateClickableMapIcon.h"
#include "Net/UnrealNetwork.h"



void ABuildingRift::OnRep_RiftIsVisible() {
}

void ABuildingRift::OnRep_RiftIsActive() {
}

void ABuildingRift::OnRep_CosmeticState() {
}



void ABuildingRift::OnGameDifficultyChanged() {
}




void ABuildingRift::BroadcastRiftSpawningAI_Implementation() {
}







void ABuildingRift::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingRift, bRiftIsVisible);
    DOREPLIFETIME(ABuildingRift, bRiftIsActive);
    DOREPLIFETIME(ABuildingRift, CosmeticState);
}

ABuildingRift::ABuildingRift() {
    this->DamageSet = NULL;
    this->DistToTarget = 0.00f;
    this->bSendMissionEvents = false;
    this->bDelayDeath = false;
    this->SlotSelectionMode = EFortRiftSpawnSlotSelectionMode::Random;
    this->MinSpawnDelay = 2.00f;
    this->MaxSpawnDelay = 2.00f;
    this->CosmeticStateIdleDelay = 1.00f;
    this->IntroToBeginSpawningDelay = 2.00f;
    this->EnvironmentQuery = NULL;
    this->QueryRadius = 0.00f;
    this->QueryMinDistance = 0.00f;
    this->bOverrideQueryMinDistance = false;
    this->bRegisterAsASpecialActor = false;
    this->bShouldDrawCompassIcon = false;
    this->bRiftIsVisible = false;
    this->bRiftIsActive = false;
    this->bIsReadyToSpawnAI = false;
    this->bHasBeenInitialized = false;
    this->bHasBadRiftSlots = false;
    this->bRecalculateSpawnPointsPeriodically = false;
    this->SpawnPointEvaluationInterval = 0.00f;
    this->bCreateOverlapSphere = false;
    this->OverlapSphereComponent = NULL;
    this->LootDropConeHalfAngle = 60.00f;
    this->LootDropSpeed = 550.00f;
    this->CosmeticState = ERiftCosmeticState::None;
    this->SpectatorMapIcon = CreateDefaultSubobject<UFortSpectateClickableMapIcon>(TEXT("FortSpectateClickableMapIcon"));
}

