#pragma once
#include "CoreMinimal.h"
#include "EVolumeState.h"
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
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUIMetrics(const FVolumePerformanceMetrics& VolumePerformanceMetrics);
    
    UFUNCTION(BlueprintCallable)
    void OnPerformanceMetricsUpdated(const FVolumePerformanceMetrics& VolumePerformanceMetrics);
    
    UFUNCTION(BlueprintCallable)
    void OnClientExitVolume(APlayerState* ClientState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void OnClientEnterVolume(APlayerState* ClientState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideUIMetrics();
    
    UFUNCTION(BlueprintCallable)
    void HandleVolumeStateChanged(EVolumeState NewState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStateInitialized(AFortGameState* GameState);
    
    UFUNCTION(BlueprintCallable)
    void BindVolumeEvents();
    
};

