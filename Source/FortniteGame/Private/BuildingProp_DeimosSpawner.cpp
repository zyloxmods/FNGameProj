#include "BuildingProp_DeimosSpawner.h"
#include "FortGameplayReceiverMessageComponent.h"

void ABuildingProp_DeimosSpawner::OnTurnOnReceived(AController* TriggerInstigator) {
}

void ABuildingProp_DeimosSpawner::OnTurnOffReceived(AController* TriggerInstigator) {
}

void ABuildingProp_DeimosSpawner::OnKillRiftReceived(AController* TriggerInstigator) {
}

void ABuildingProp_DeimosSpawner::OnKillAIReceived(AController* TriggerInstigator) {
}

void ABuildingProp_DeimosSpawner::MinigameStarted_Implementation() {
}

ABuildingProp_DeimosSpawner::ABuildingProp_DeimosSpawner() {
    bNoSpawnLimitEnabled = false;
    bDamageBuildingsOnSpawn = true;
    bInvulnerable = false;
    bVisible = true;
    bHideVFX = false;
    OverrideQueryRadius = 1;
    bSortSlotsByBestScore = false;
    bEnabledOnMinigameStart = true;
    TurnOnReceiverComponent = CreateDefaultSubobject<UFortGameplayReceiverMessageComponent>(TEXT("TurnOnReceiver"));
    TurnOffReceiverComponent = CreateDefaultSubobject<UFortGameplayReceiverMessageComponent>(TEXT("TurnOffReceiver"));
    KillAllAIReceiverComponent = CreateDefaultSubobject<UFortGameplayReceiverMessageComponent>(TEXT("KillAllAIReceiver"));
    KillSpawnerReceiverComponent = CreateDefaultSubobject<UFortGameplayReceiverMessageComponent>(TEXT("KillSpawnerReceiver"));
    bEnableCreativeCreatureSpawners = true;
}

