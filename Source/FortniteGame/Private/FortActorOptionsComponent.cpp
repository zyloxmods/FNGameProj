#include "FortActorOptionsComponent.h"
#include "Net/UnrealNetwork.h"

void UFortActorOptionsComponent::TryToLocalizeStrings() {
}

bool UFortActorOptionsComponent::SetPropertyOverrideValues(const TMap<FString, FString>& NewOptions) {
    return false;
}

bool UFortActorOptionsComponent::SetPropertyOverrides(const TMap<FString, FString>& NewOptions) {
    return false;
}

void UFortActorOptionsComponent::ResolvePendingRepOverrides() {
}

void UFortActorOptionsComponent::RemovePropertyOverrides(const TArray<FString>& Options) {
}

void UFortActorOptionsComponent::OverrideOptionsDisplayName(AFortPlayerController* Controller, const FText& DisplayName) {
}

void UFortActorOptionsComponent::OnRep_PlayerOptionData() {
}

bool UFortActorOptionsComponent::OnLocalInteract(AFortPlayerPawn* InteractingPawn) {
    return false;
}

bool UFortActorOptionsComponent::IsRenameDisplayButtonEnabled() {
    return false;
}

void UFortActorOptionsComponent::HandlePlaylistLoadedForLocalization(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

bool UFortActorOptionsComponent::GetPropertyOverrides(TMap<FString, FString>& CurrentOptions) {
    return false;
}

bool UFortActorOptionsComponent::GetPropertyEditorV2Enabled() const {
    return false;
}

void UFortActorOptionsComponent::GetOptionsText(FText& DisplayName, FText& Descriptions, const bool bBaseName) {
}

bool UFortActorOptionsComponent::CanEditOptionsComponent(AFortPawn* InteractingPawn) {
    return false;
}


bool UFortActorOptionsComponent::BlueprintGetInteractionTime_Implementation(const AFortPawn* InteractingPawn, float& OutInteractionTime) const {
    return false;
}

void UFortActorOptionsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortActorOptionsComponent, PlayerOptionData);
}

UFortActorOptionsComponent::UFortActorOptionsComponent() {
    OverrideDisplayNameOption = NULL;
    PlayerOptions = NULL;
    bRedirectInteractToParent = true;
}

