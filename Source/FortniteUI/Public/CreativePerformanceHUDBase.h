#pragma once
#include "CoreMinimal.h"
#include "EVolumeState.h"
#include "SimpleMetricInformation.h"
#include "VolumePerformanceMetrics.h"
#include "FortHUDElementWidget.h"
#include "CreativePerformanceHUDBase.generated.h"

class AFortGameState;
class AFortVolume;
class APlayerState;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCreativePerformanceHUDBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UCreativePerformanceHUDBase();
protected:
    UFUNCTION(BlueprintCallable)
    void StopTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUIMetrics(const FVolumePerformanceMetrics& VolumePerformanceMetrics);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSimpleUIMetrics(const FSimpleMetricInformation& SimplePerformanceMetrics, const int32 HeatmapCircleRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshCostPreviewOfSelectedActor(const int32 CostPreviewOfSelection, const bool isThrowingPlayset);
    
    UFUNCTION(BlueprintCallable)
    void OnSimpleMetricInformationUpdated(APlayerState* ClientState, const FSimpleMetricInformation& MetricInformation);
    
    UFUNCTION(BlueprintCallable)
    void OnPerformanceMetricsUpdated(const FVolumePerformanceMetrics& VolumePerformanceMetrics);
    
    UFUNCTION(BlueprintCallable)
    void OnCostPreviewOfSelectionChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnClientExitVolume(APlayerState* ClientState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void OnClientEnterVolume(APlayerState* ClientState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeatmapEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideUIMetrics();
    
    UFUNCTION(BlueprintCallable)
    void HandleVolumeStateChanged(EVolumeState NewState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStateInitialized(AFortGameState* GameState);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCostPreviewOfSelectedActor();
    
    UFUNCTION(BlueprintCallable)
    void BindVolumeEvents();
    
};

