#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EIntelStateEnum.h"
#include "InfiltrationIntelStatusWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UInfiltrationIntelStatusWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnerIndex;
    
    UInfiltrationIntelStatusWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTimerVisuals(float TimeRemaining, float TotalTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsGroundTimer(bool bIsGroundTimer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIntelState(EIntelStateEnum NewState);
    
};

