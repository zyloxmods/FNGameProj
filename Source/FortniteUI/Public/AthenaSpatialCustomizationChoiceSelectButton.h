#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "UObject/NoExportTypes.h"
#include "AthenaSpatialCustomizationChoiceSelectButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpatialCustomizationChoiceSelectButton : public UCommonButton {
    GENERATED_BODY()
public:
    UAthenaSpatialCustomizationChoiceSelectButton();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupChoiceSelectButton(const FLinearColor& CategoryStateColor);
    
};

