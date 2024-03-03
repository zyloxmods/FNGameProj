#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "LoadoutWarningWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULoadoutWarningWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
    ULoadoutWarningWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartWarning(float TimeToSwap);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadoutWarning(float TimeToSwap);
    
};

