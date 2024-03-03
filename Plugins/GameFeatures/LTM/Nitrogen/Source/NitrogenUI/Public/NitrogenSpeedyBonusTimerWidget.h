#pragma once
#include "CoreMinimal.h"
#include "NitrogenWidgetBase.h"
#include "NitrogenSpeedyBonusTimerWidget.generated.h"

class ANitrogenFare;

UCLASS(Blueprintable, EditInlineNew)
class UNitrogenSpeedyBonusTimerWidget : public UNitrogenWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANitrogenFare* CurrentFare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsRemaining;
    
public:
    UNitrogenSpeedyBonusTimerWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpeedyDeliveryTimeUpdate(float TimePrecentage, float TotalObjectiveTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpeedyDeliveryFailed(bool bPlayAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpeedyDeliveryCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndFare(bool bFareCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginFare();
    
};

