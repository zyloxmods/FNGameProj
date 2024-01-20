#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortAIEncounterTargetInterface.generated.h"

UINTERFACE(Blueprintable)
class UFortAIEncounterTargetInterface : public UInterface {
    GENERATED_BODY()
};

class IFortAIEncounterTargetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsFloatingTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetObjectiveCompletionPercentage();
    
};

