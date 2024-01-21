#include "FortMinigameLogicComponent.h"
#include "Net/UnrealNetwork.h"

bool UFortMinigameLogicComponent::TryAttachToMinigame() {
    return false;
}

void UFortMinigameLogicComponent::RemoveMinigameTag(const FGameplayTag& Tag) {
}

void UFortMinigameLogicComponent::HandlePlayspaceEditModeChange_Implementation(bool bInEditMode) {
}

void UFortMinigameLogicComponent::HandleMinigameStateChanged_Implementation(EFortMinigameState NewMinigameState) {
}

void UFortMinigameLogicComponent::HandleMinigameStarted_Implementation() {
}

void UFortMinigameLogicComponent::HandleMinigameSet_Implementation() {
}

void UFortMinigameLogicComponent::HandleMinigameEnded_Implementation() {
}

void UFortMinigameLogicComponent::AddMinigameTag(const FGameplayTag& Tag) {
}

void UFortMinigameLogicComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortMinigameLogicComponent, MinigameTags);
    DOREPLIFETIME(UFortMinigameLogicComponent, CurrentMinigame);
}

UFortMinigameLogicComponent::UFortMinigameLogicComponent() {
    this->CurrentMinigame = NULL;
    this->CachedMinigame = NULL;
}

