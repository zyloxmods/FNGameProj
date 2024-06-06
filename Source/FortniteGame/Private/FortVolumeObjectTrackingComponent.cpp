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
    ParentVolume = NULL;
    bRunNewVersion = false;
    bHeatmapEnabled = false;
    bHeatmapIsDirty = false;
    ObjectTrackingHeatmapSize = 0;
    bUseHeatmapHighPrecision = false;
    ThermalGroupMatrixSizeX = 0;
    ThermalGroupMatrixSizeY = 0;
    LastHeatmapUpdateTime = 1;
    TargetUpdateTime = 1;
    SpatialInfluenceDistanceMultiplier = 1;
    SpatialThermometerCellSize = 1;
}

