#include "ObjectInteractionBehavior.h"
#include "Templates/SubclassOf.h"

void UObjectInteractionBehavior::TriggerInteractionBehavior_Implementation() {
}

void UObjectInteractionBehavior::TickMovementMode_Implementation() {
}

void UObjectInteractionBehavior::StartCreativeInteractionOnServer_Implementation() {
}

void UObjectInteractionBehavior::StartCreativeInteractionOnClient_Implementation() {
}

void UObjectInteractionBehavior::PlayGameplayAbility(const TSubclassOf<UFortGameplayAbility> ActivatedAbilityClass) {
}


bool UObjectInteractionBehavior::IsSelectionSetInValidPosition() {
    return false;
}

void UObjectInteractionBehavior::HandleDuplicateActor_Implementation() {
}

void UObjectInteractionBehavior::GetSelectedActorsMeshComponents(TArray<UMeshComponent*>& Components) {
}

void UObjectInteractionBehavior::GetSelectedActors(TArray<AActor*>& SelectedActors) {
}

AFortPlayerController* UObjectInteractionBehavior::GetFortPlayerController() const {
    return NULL;
}

AFortCreativeMoveTool* UObjectInteractionBehavior::GetFortCreativeMoveTool() const {
    return NULL;
}

void UObjectInteractionBehavior::ExitCreativeInteraction_Implementation(const bool bShouldClearActiveInteractionMode) {
}

void UObjectInteractionBehavior::EndCreativeInteraction_Implementation() {
}

UObjectInteractionBehavior::UObjectInteractionBehavior() {
    this->StartInteractionAbility = NULL;
    this->EndInteractionAbility = NULL;
    this->TriggerInteractionAbility = NULL;
    this->RotateClockwiseAbility = NULL;
    this->RotateCounterclockwiseAbility = NULL;
    this->MirrorAbility = NULL;
    this->ExitAbility = NULL;
    this->FailAbility = NULL;
    this->bShouldAddToParent = true;
    this->bShouldUseActorToSelection = false;
    this->Priority = 0;
}

