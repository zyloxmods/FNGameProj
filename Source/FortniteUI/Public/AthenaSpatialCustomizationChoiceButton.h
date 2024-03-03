#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "UObject/NoExportTypes.h"
#include "ESpatialCustomizationCategoryState.h"
#include "AthenaSpatialCustomizationChoiceButton.generated.h"

class UAthenaSpatialCustomizationChoice;
class UFortLazyImage;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpatialCustomizationChoiceButton : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSpatialCustomizationChoice* Choice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Image_Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> SelectedImage;
    
public:
    UAthenaSpatialCustomizationChoiceButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupChoice(ESpatialCustomizationCategoryState CategoryState, const FLinearColor& CategoryStateColor);
    
};

