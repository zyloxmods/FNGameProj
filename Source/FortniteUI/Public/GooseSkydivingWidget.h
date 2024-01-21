#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "GooseSkydivingWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGooseSkydivingWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
    UGooseSkydivingWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartSkydiving();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndSkydiving();
    
};

