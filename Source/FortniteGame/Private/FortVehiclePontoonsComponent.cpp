#include "FortVehiclePontoonsComponent.h"
#include "Net/UnrealNetwork.h"

void UFortVehiclePontoonsComponent::OnRep_PontoonRadius(const TArray<float>& PrevPontoonRadiuses) {
}

void UFortVehiclePontoonsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortVehiclePontoonsComponent, OverridePontoonRadiuses);
}

UFortVehiclePontoonsComponent::UFortVehiclePontoonsComponent() {
    this->OwnerVehicle = NULL;
    this->WaterLineStartPontoonIndex = 0;
    this->WaterLineEndPontoonIndex = 0;
}

