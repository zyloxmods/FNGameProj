#include "BuildingProp_CreaturePlacer.h"
#include "Components/SkeletalMeshComponent.h"
#include "FortGameplayReceiverMessageComponent.h"
#include "FortGameplayTriggerMessageComponent.h"

void ABuildingProp_CreaturePlacer::UpdateCreatureVisuals() {
}

void ABuildingProp_CreaturePlacer::OnTurnOnReceived(AController* TriggerInstigator) {
}

void ABuildingProp_CreaturePlacer::OnTurnOffReceived(AController* TriggerInstigator) {
}

void ABuildingProp_CreaturePlacer::MinigameStateChanged_Implementation(AFortMinigame* Minigame, EFortMinigameState NewMinigameState) {
}

USkeletalMeshComponent* ABuildingProp_CreaturePlacer::GetCreatureSkeletalMeshComponent() const {
    return NULL;
}

ABuildingProp_CreaturePlacer::ABuildingProp_CreaturePlacer() {
    this->CurrentMinigameState = EFortMinigameState::PreGame;
    this->bHideVFX = false;
    this->bEnabledOnGameState = false;
    this->bDestroyPreviousOnSpawn = false;
    this->GameStateEnable = EFortMinigameState::PreGame;
    this->bCreatureVisualsDoneLoading = true;
    this->TurnOnReceiverComponent = CreateDefaultSubobject<UFortGameplayReceiverMessageComponent>(TEXT("TurnOnReceiver"));
    this->TurnOffReceiverComponent = CreateDefaultSubobject<UFortGameplayReceiverMessageComponent>(TEXT("TurnOffReceiver"));
    this->CreatureKilledTransmitComponent = CreateDefaultSubobject<UFortGameplayTriggerMessageComponent>(TEXT("CreatureKilledTransmitter"));
    this->bEnableCreativeCreatureSpawners = false;
    this->CreatureSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CreatureSkeletalMeshComponent"));
}

