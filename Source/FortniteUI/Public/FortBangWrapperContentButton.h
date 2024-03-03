#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortBangWrapperContentInterface.h"
#include "FortBangWrapperContentButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBangWrapperContentButton : public UCommonButton, public IFortBangWrapperContentInterface {
    GENERATED_BODY()
public:
    UFortBangWrapperContentButton();
    UFUNCTION(BlueprintCallable)
    void FinishTutorialCallout();
    
    
    // Fix for true pure virtual functions not being implemented
};

