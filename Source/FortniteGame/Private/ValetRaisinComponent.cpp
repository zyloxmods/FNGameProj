#include "ValetRaisinComponent.h"
#include "Net/UnrealNetwork.h"

void UValetRaisinComponent::ServerSelectOption_Implementation(AFortPlayerController* PlayerChoosing, const UFortItemDefinition* MusicSource) {
}
bool UValetRaisinComponent::ServerSelectOption_Validate(AFortPlayerController* PlayerChoosing, const UFortItemDefinition* MusicSource) {
    return true;
}

void UValetRaisinComponent::OnRep_Source() {
}

UFortItemDefinition* UValetRaisinComponent::GetSource() const {
    return NULL;
}

void UValetRaisinComponent::ClientPickOption() {
}

void UValetRaisinComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UValetRaisinComponent, ReplicatedSource);
}

UValetRaisinComponent::UValetRaisinComponent() {
    this->AttenuationSettings = NULL;
    this->PresetChain = NULL;
    this->bShouldManageOwnAudio = true;
    this->DynamicAudioComponent = NULL;
    this->ReplicatedSource = NULL;
}

