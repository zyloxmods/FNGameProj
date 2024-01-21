#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "WaxHotelPromptWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWaxHotelPromptWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
    UWaxHotelPromptWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWidget();
    
};

