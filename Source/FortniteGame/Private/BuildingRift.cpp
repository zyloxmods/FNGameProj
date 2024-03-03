#include "BuildingRift.h"
#include "FortSpectateClickableMapIcon.h"
#include "Net/UnrealNetwork.h"

void ABuildingRift::StartEnvironmentQuery() {
}

void ABuildingRift::SetNewEQSData(UEnvQuery* NewEnvironmentQuery, TArray<FEnvNamedValue> NewQueryParams) {
}



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
    this->DistToTarget = 1;
    this->bSendMissionEvents = false;
    this->bDelayDeath = false;
    this->SlotSelectionMode = EFortRiftSpawnSlotSelectionMode::Random;
    this->MinSpawnDelay = 1;
    this->MaxSpawnDelay = 1;
    this->CosmeticStateIdleDelay = 1;
    this->IntroToBeginSpawningDelay = 1;
    this->EnvironmentQuery = NULL;
    this->QueryRadius = 1;
    this->QueryMinDistance = 1;
    this->bOverrideQueryMinDistance = false;
    this->bRegisterAsASpecialActor = false;
    this->bShouldDrawCompassIcon = false;
    this->bSpawnUsingRiftRotation = false;
    this->bRiftIsVisible = false;
    this->bRiftIsActive = false;
    this->bIsReadyToSpawnAI = false;
    this->bHasBeenInitialized = false;
    this->bHasBadRiftSlots = false;
    this->bRecalculateSpawnPointsPeriodically = false;
    this->SpawnPointEvaluationInterval = 1;
    this->bCreateOverlapSphere = false;
    this->OverlapSphereComponent = NULL;
    this->LootDropConeHalfAngle = 1;
    this->LootDropSpeed = 1;
    this->CosmeticState = ERiftCosmeticState::None;
    this->SpectatorMapIcon = CreateDefaultSubobject<UFortSpectateClickableMapIcon>(TEXT("FortSpectateClickableMapIcon"));
}

