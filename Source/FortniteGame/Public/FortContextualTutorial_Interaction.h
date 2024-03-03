#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_Interaction.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorial_Interaction : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_Interaction();
private:
    UFUNCTION(BlueprintCallable)
    void HandleInteractSuccessTrigger(const FGameplayTag Tags, int32 Count);
    
};

