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
    CurrentMinigameState = EFortMinigameState::PreGame;
    bHideVFX = false;
    bEnabledOnGameState = false;
    bDestroyPreviousOnSpawn = false;
    GameStateEnable = EFortMinigameState::PreGame;
    bCreatureVisualsDoneLoading = true;
    TurnOnReceiverComponent = CreateDefaultSubobject<UFortGameplayReceiverMessageComponent>(TEXT("TurnOnReceiver"));
    TurnOffReceiverComponent = CreateDefaultSubobject<UFortGameplayReceiverMessageComponent>(TEXT("TurnOffReceiver"));
    CreatureKilledTransmitComponent = CreateDefaultSubobject<UFortGameplayTriggerMessageComponent>(TEXT("CreatureKilledTransmitter"));
    bEnableCreativeCreatureSpawners = false;
    CreatureSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CreatureSkeletalMeshComponent"));
}

