#include "BuildingConnectivityComponent.h"
#include "Net/UnrealNetwork.h"

void UBuildingConnectivityComponent::OnRep_Connections() {
}

void UBuildingConnectivityComponent::OnRep_bIsProvidingPower() {
}

void UBuildingConnectivityComponent::OnRep_bIsPowered() {
}

void UBuildingConnectivityComponent::OnPlaced() {
}

bool UBuildingConnectivityComponent::K2_IsPowered() {
    return false;
}

bool UBuildingConnectivityComponent::IsConnectedTo(ABuildingSMActor* TestActor) const {
    return false;
}

void UBuildingConnectivityComponent::DrawDebugData() {
}

void UBuildingConnectivityComponent::DisconnectAll() {
}

bool UBuildingConnectivityComponent::CanConnectTo(ABuildingSMActor* TestActor) const {
    return false;
}

void UBuildingConnectivityComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBuildingConnectivityComponent, Connections);
    DOREPLIFETIME(UBuildingConnectivityComponent, bIsPowered);
    DOREPLIFETIME(UBuildingConnectivityComponent, bIsProvidingPower);
}

UBuildingConnectivityComponent::UBuildingConnectivityComponent() {
    this->bAutoConnectOnInitialize = true;
    this->bDrawDebugData = false;
    this->BuildingOwner = NULL;
    this->bIsPowered = false;
    this->bIsProvidingPower = false;
    this->bIsAbleToProvidePower = false;
    this->bAllowConnections = true;
    this->bAllowsPowerToPassThrough = true;
}

