#include "CreativePerformanceHUDBase.h"

void UCreativePerformanceHUDBase::StopTimer() {
}

void UCreativePerformanceHUDBase::StartTimer() {
}




void UCreativePerformanceHUDBase::OnSimpleMetricInformationUpdated(APlayerState* ClientState, const FSimpleMetricInformation& MetricInformation) {
}

void UCreativePerformanceHUDBase::OnPerformanceMetricsUpdated(const FVolumePerformanceMetrics& VolumePerformanceMetrics) {
}

void UCreativePerformanceHUDBase::OnCostPreviewOfSelectionChanged() {
}

void UCreativePerformanceHUDBase::OnClientExitVolume(APlayerState* ClientState, AFortVolume* Volume) {
}

void UCreativePerformanceHUDBase::OnClientEnterVolume(APlayerState* ClientState, AFortVolume* Volume) {
}

bool UCreativePerformanceHUDBase::IsHeatmapEnabled() const {
    return false;
}


void UCreativePerformanceHUDBase::HandleVolumeStateChanged(EVolumeState NewState, AFortVolume* Volume) {
}

void UCreativePerformanceHUDBase::HandleGameStateInitialized(AFortGameState* GameState) {
}

int32 UCreativePerformanceHUDBase::GetCostPreviewOfSelectedActor() {
    return 0;
}

void UCreativePerformanceHUDBase::BindVolumeEvents() {
}

UCreativePerformanceHUDBase::UCreativePerformanceHUDBase() {
}

