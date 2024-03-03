#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FortHUDElementWidget.h"
#include "CreativePerformanceHUDHeatmapControlWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCreativePerformanceHUDHeatmapControlWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UCreativePerformanceHUDHeatmapControlWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void StopTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshHeatmap(const FVector& PlayerPosition);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMovementUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentVolumeSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetCurrentVolumeBox() const;
    
};

