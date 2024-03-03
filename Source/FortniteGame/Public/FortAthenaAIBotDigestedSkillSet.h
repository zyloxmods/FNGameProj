#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIRuntimeParameters.h"
#include "FortAthenaAIBotDigestedSkillSet.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class UFortAthenaAIBotDigestedSkillSet : public UFortAthenaAIRuntimeParameters {
    GENERATED_BODY()
public:
    UFortAthenaAIBotDigestedSkillSet();
};

