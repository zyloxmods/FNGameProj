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
    this->LastElecticalPropagationParent = NULL;
    this->LastElectrifiedTime = 1;
    this->LastFireFXRelatedStateTime = 1;
    this->ActiveStateBitfield = 0;
    this->CurieCollisionComponent = NULL;
    this->CableSocketComponent = NULL;
    this->TrackedNativeGlowFlags = EFortCurieNativeFXType::None;
}

