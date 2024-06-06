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
    DamageSet = NULL;
    DistToTarget = 1;
    bSendMissionEvents = false;
    bDelayDeath = false;
    SlotSelectionMode = EFortRiftSpawnSlotSelectionMode::Random;
    MinSpawnDelay = 1;
    MaxSpawnDelay = 1;
    CosmeticStateIdleDelay = 1;
    IntroToBeginSpawningDelay = 1;
    EnvironmentQuery = NULL;
    QueryRadius = 1;
    QueryMinDistance = 1;
    bOverrideQueryMinDistance = false;
    bRegisterAsASpecialActor = false;
    bShouldDrawCompassIcon = false;
    bSpawnUsingRiftRotation = false;
    bRiftIsVisible = false;
    bRiftIsActive = false;
    bIsReadyToSpawnAI = false;
    bHasBeenInitialized = false;
    bHasBadRiftSlots = false;
    bRecalculateSpawnPointsPeriodically = false;
    SpawnPointEvaluationInterval = 1;
    bCreateOverlapSphere = false;
    OverlapSphereComponent = NULL;
    LootDropConeHalfAngle = 1;
    LootDropSpeed = 1;
    CosmeticState = ERiftCosmeticState::None;
    SpectatorMapIcon = CreateDefaultSubobject<UFortSpectateClickableMapIcon>(TEXT("FortSpectateClickableMapIcon"));
}

