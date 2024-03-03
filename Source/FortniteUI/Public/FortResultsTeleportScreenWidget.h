#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortResultsTeleportScreenWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortResultsTeleportScreenWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitTime;
    
    UFortResultsTeleportScreenWidget();
    UFUNCTION(BlueprintCallable)
    void StartExitTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitTimerFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitTimeRemainingUpdated(int32 TimeRemainingSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitTimePercentagePassedUpdated(float Percent);
    
};

