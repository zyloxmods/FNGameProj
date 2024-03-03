#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AthenaAIBudgetManager.generated.h"

UCLASS(Blueprintable)
class UAthenaAIBudgetManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UAthenaAIBudgetManager();
};

