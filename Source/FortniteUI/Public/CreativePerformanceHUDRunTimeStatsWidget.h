#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "CreativePerformanceHUDRunTimeStatsWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCreativePerformanceHUDRunTimeStatsWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UCreativePerformanceHUDRunTimeStatsWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateRuntimeStats();
    
    UFUNCTION(BlueprintCallable)
    void StopTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRuntimeStats(const TArray<FText>& DetailRuntimeStats);
    
};

