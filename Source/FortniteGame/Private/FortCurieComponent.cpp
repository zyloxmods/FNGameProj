#include "FortCurieComponent.h"
#include "Net/UnrealNetwork.h"

void UFortCurieComponent::SetCurieCollisionComponent(UPrimitiveComponent* CollisionComponent) {
}

void UFortCurieComponent::OnRep_ActiveStateBitfield() {
}

AActor* UFortCurieComponent::GetLastElectricalPropagationParent() const {
    return NULL;
}

void UFortCurieComponent::EnableOutgoingInteractions() {
}

void UFortCurieComponent::DisableOutgoingInteractions() {
}

void UFortCurieComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortCurieComponent, LastElecticalPropagationParent);
    DOREPLIFETIME(UFortCurieComponent, LastElectrifiedTime);
    DOREPLIFETIME(UFortCurieComponent, LastFireFXRelatedStateTime);
    DOREPLIFETIME(UFortCurieComponent, ActiveStateBitfield);
}

UFortCurieComponent::UFortCurieComponent() {
    LastElecticalPropagationParent = NULL;
    LastElectrifiedTime = 1;
    LastFireFXRelatedStateTime = 1;
    ActiveStateBitfield = 0;
    CurieCollisionComponent = NULL;
    CableSocketComponent = NULL;
    TrackedNativeGlowFlags = EFortCurieNativeFXType::None;
}

