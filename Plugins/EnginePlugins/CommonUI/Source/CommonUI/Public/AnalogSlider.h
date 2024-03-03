#pragma once
#include "CoreMinimal.h"
#include "Components/Slider.h"
#include "Components/Slider.h"
#include "AnalogSlider.generated.h"

UCLASS(Blueprintable)
class COMMONUI_API UAnalogSlider : public USlider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFloatValueChangedEvent OnAnalogCapture;
    
    UAnalogSlider();
};

