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

bool UPlaysetLevelStreamComponent::IsLoading() const {
    return false;
}

UFortPlaysetItemDefinition* UPlaysetLevelStreamComponent::GetCurrentPlayset() const {
    return NULL;
}

void UPlaysetLevelStreamComponent::ClearPlayset() {
}

void UPlaysetLevelStreamComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlaysetLevelStreamComponent, CurrentPlayset);
    DOREPLIFETIME(UPlaysetLevelStreamComponent, ClientPlaysetData);
}

UPlaysetLevelStreamComponent::UPlaysetLevelStreamComponent() {
    this->MaxStreamInDistance = 1;
    this->bAutoLoadLevel = true;
    this->bAllowUnload = true;
    this->CurrentPlayset = NULL;
    this->StreamedLevel = NULL;
}

