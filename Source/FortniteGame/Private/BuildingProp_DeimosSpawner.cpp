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
    this->bNoSpawnLimitEnabled = false;
    this->bDamageBuildingsOnSpawn = true;
    this->bInvulnerable = false;
    this->bVisible = true;
    this->bHideVFX = false;
    this->OverrideQueryRadius = 1;
    this->bSortSlotsByBestScore = false;
    this->bEnabledOnMinigameStart = true;
    this->TurnOnReceiverComponent = CreateDefaultSubobject<UFortGameplayReceiverMessageComponent>(TEXT("TurnOnReceiver"));
    this->TurnOffReceiverComponent = CreateDefaultSubobject<UFortGameplayReceiverMessageComponent>(TEXT("TurnOffReceiver"));
    this->KillAllAIReceiverComponent = CreateDefaultSubobject<UFortGameplayReceiverMessageComponent>(TEXT("KillAllAIReceiver"));
    this->KillSpawnerReceiverComponent = CreateDefaultSubobject<UFortGameplayReceiverMessageComponent>(TEXT("KillSpawnerReceiver"));
    this->bEnableCreativeCreatureSpawners = true;
}

