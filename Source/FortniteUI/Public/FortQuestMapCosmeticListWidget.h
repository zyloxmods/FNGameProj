#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortQuestMapCosmeticListWidget.generated.h"

class UFortItemDefinition;

UCLASS(Blueprintable, EditInlineNew)
class UFortQuestMapCosmeticListWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UFortQuestMapCosmeticListWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCosmeticListDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFortItemDefinition*> GetDisplayItemDefs() const;
    
};

