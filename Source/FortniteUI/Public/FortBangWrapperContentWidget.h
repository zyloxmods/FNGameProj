#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortBangWrapperContentInterface.h"
#include "FortBangWrapperContentWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBangWrapperContentWidget : public UCommonUserWidget, public IFortBangWrapperContentInterface {
    GENERATED_BODY()
public:
    UFortBangWrapperContentWidget();
    UFUNCTION(BlueprintCallable)
    void FinishTutorialCallout();
    
    
    // Fix for true pure virtual functions not being implemented
};

