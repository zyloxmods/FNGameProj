#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaShutdownWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaShutdownWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UAthenaShutdownWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateCountdown(float RemainingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopShowing(float RemainingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartShowing(float RemainingTime);
    
};

