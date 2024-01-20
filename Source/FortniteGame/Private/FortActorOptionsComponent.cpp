#include "FortActorOptionsComponent.h"
#include "Net/UnrealNetwork.h"

bool UFortActorOptionsComponent::SetPropertyOverrideValues(const TMap<FString, FString>& NewOptions) {
    return false;
}

bool UFortActorOptionsComponent::SetPropertyOverrides(const TMap<FString, FString>& NewOptions) {
    return false;
}

void UFortActorOptionsComponent::RemovePropertyOverrides(const TArray<FString>& Options) {
}

void UFortActorOptionsComponent::OnRep_PlayerOptionData() {
}

bool UFortActorOptionsComponent::GetPropertyOverrides(TMap<FString, FString>& CurrentOptions) {
    return false;
}

void UFortActorOptionsComponent::GetOptionsText(FText& DisplayName, FText& Descriptions) {
}

bool UFortActorOptionsComponent::CanEditOptionsComponent(AFortPawn* InteractingPawn) const {
    return false;
}


void UFortActorOptionsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortActorOptionsComponent, PlayerOptionData);
}

UFortActorOptionsComponent::UFortActorOptionsComponent() {
    this->PlayerOptions = NULL;
    this->bRedirectInteractToParent = true;
}

