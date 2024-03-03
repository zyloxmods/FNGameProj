#include "FortVolumeObjectTrackingComponent.h"
#include "Net/UnrealNetwork.h"

void UFortVolumeObjectTrackingComponent::UpdateVolumeInformation() {
}

void UFortVolumeObjectTrackingComponent::RemoveActor(AActor* Actor, UActorComponent* ActorComponent, APawn* InstigatorPawn, AFortVolume* Volume) {
}

void UFortVolumeObjectTrackingComponent::OnRep_BudgetTracker() {
}

void UFortVolumeObjectTrackingComponent::On_RepObjectTrackingHeatmap() {
}

void UFortVolumeObjectTrackingComponent::AddActorAtLocation(AActor* Actor, const FVector& Location) {
}

void UFortVolumeObjectTrackingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, TransientTracker);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, BudgetTracker);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, ClassTracker);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, bRunNewVersion);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, bHeatmapEnabled);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, ObjectTrackingHeatmapSize);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, bUseHeatmapHighPrecision);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, ObjectTrackingHeatmap);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, ObjectTrackingHeatmapHighPrecision);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, ThermalGroupMatrixSizeX);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, ThermalGroupMatrixSizeY);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, ThermalGroupCostMatrix);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, SpatialThermometerCellSize);
}

UFortVolumeObjectTrackingComponent::UFortVolumeObjectTrackingComponent() {
    this->ParentVolume = NULL;
    this->bRunNewVersion = false;
    this->bHeatmapEnabled = false;
    this->bHeatmapIsDirty = false;
    this->ObjectTrackingHeatmapSize = 0;
    this->bUseHeatmapHighPrecision = false;
    this->ThermalGroupMatrixSizeX = 0;
    this->ThermalGroupMatrixSizeY = 0;
    this->LastHeatmapUpdateTime = 1;
    this->TargetUpdateTime = 1;
    this->SpatialInfluenceDistanceMultiplier = 1;
    this->SpatialThermometerCellSize = 1;
}

