#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "FortAlterationItem.generated.h"

class UFortAlterationItemDefinition;

UCLASS(Blueprintable)
class UFortAlterationItem : public UFortAccountItem {
    GENERATED_BODY()
public:
    UFortAlterationItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAlterationItemDefinition* GetAlterationDefinitionBP() const;
    
};

