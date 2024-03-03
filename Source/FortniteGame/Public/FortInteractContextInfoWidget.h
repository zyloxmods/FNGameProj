#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortInteractContextInfoWidget.generated.h"

class UFortInteractContextInfo;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFortInteractContextInfoWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UFortInteractContextInfoWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnContextInfoUpdated(const UFortInteractContextInfo* ContextInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetInteractText(FText& InteractText, bool& Result);
    
};

