#pragma once
#include "CoreMinimal.h"
#include "Slider.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=OnFloatValueChangedEvent__DelegateSignature -FallbackName=OnFloatValueChangedEventDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Slider -FallbackName=Slider
#include "AnalogSlider.generated.h"

UCLASS(Blueprintable)
class COMMONUI_API UAnalogSlider : public USlider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseScalingSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScalingSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayToIncreaseScalingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayToResetScalingSpeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFloatValueChangedEvent OnAnalogCapture;
    
    UAnalogSlider();
};

