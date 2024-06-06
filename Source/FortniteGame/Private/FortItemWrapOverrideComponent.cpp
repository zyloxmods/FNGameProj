#include "FortItemWrapOverrideComponent.h"
#include "Net/UnrealNetwork.h"

void UFortItemWrapOverrideComponent::RemoveWrapFromOwner() {
}

UFortItemWrapOverrideComponent* UFortItemWrapOverrideComponent::OverrideWrapOnActor(AActor* ActorBase, const TSoftObjectPtr<UAthenaItemWrapDefinition>& wrap, const TArray<FMcpVariantChannelInfo>& VariantData) {
    return NULL;
}

void UFortItemWrapOverrideComponent::OnRep_VariantData() {
}

void UFortItemWrapOverrideComponent::OnRep_SoftOverride() {
}

void UFortItemWrapOverrideComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortItemWrapOverrideComponent, ReplicatedItemWrapOverride);
    DOREPLIFETIME(UFortItemWrapOverrideComponent, VariantInfo);
}

UFortItemWrapOverrideComponent::UFortItemWrapOverrideComponent() {
    CurrentOverrideHardRef = NULL;
}

