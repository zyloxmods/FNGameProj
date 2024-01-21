#include "PlaysetLevelStreamComponent.h"
#include "Net/UnrealNetwork.h"

void UPlaysetLevelStreamComponent::SetPlayset(UFortPlaysetItemDefinition* NewPlayset) {
}

void UPlaysetLevelStreamComponent::OnRep_ClientPlaysetData() {
}

void UPlaysetLevelStreamComponent::OnFinishedUnloading() {
}

void UPlaysetLevelStreamComponent::OnFinishedLoading_Internal() {
}

void UPlaysetLevelStreamComponent::OnFinishedLoading() {
}

bool UPlaysetLevelStreamComponent::IsLoading() {
    return false;
}

UFortPlaysetItemDefinition* UPlaysetLevelStreamComponent::GetCurrentPlayset() const {
    return NULL;
}

void UPlaysetLevelStreamComponent::ClearPlayset() {
}

void UPlaysetLevelStreamComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlaysetLevelStreamComponent, ClientPlaysetData);
}

UPlaysetLevelStreamComponent::UPlaysetLevelStreamComponent() {
    this->MaxStreamInDistance = 0.00f;
    this->bAutoLoadLevel = true;
    this->bAllowUnload = true;
    this->CurrentPlayset = NULL;
    this->StreamedLevel = NULL;
}

