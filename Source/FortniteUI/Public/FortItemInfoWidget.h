#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortItemInfoWidget.generated.h"

class UFortItem;
class UFortItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemInfoWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UFortItemInfoWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PopulateUsingItemDefinition(UFortItemDefinition* NewItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PopulateUsingItem(UFortItem* NewItem);
    
};

