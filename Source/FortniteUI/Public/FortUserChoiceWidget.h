#pragma once
#include "CoreMinimal.h"
#include "ChoiceData.h"
#include "FortUserWidget.h"
#include "FortUserChoiceWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortUserChoiceWidget : public UFortUserWidget {
    GENERATED_BODY()
public:
    UFortUserChoiceWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChoices(const FChoiceData& ChoiceItems);
    
};

