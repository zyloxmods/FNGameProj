#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortColorPickerComponent.generated.h"

class UCommonTextBlock;
class UFortColorPickerSlider;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortColorPickerComponent : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortColorPickerSlider* ColorSlider_Component;
    
public:
    UFortColorPickerComponent();
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnValueChanged(float NormalizedNewValue);
    
};

