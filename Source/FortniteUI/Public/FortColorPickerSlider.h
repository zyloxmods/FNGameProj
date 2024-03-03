#pragma once
#include "CoreMinimal.h"
#include "AnalogSlider.h"
#include "FortColorPickerSlider.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class UFortColorPickerSlider : public UAnalogSlider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicSliderMaterialInstance;
    
public:
    UFortColorPickerSlider();
};

