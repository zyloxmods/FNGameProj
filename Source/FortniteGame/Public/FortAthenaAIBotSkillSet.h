#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAthenaAIRuntimeParametersProvider.h"
#include "FortAthenaAIBotSkillSet.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaAIBotSkillSet : public UObject, public IFortAthenaAIRuntimeParametersProvider {
    GENERATED_BODY()
public:
    UFortAthenaAIBotSkillSet();
    
    // Fix for true pure virtual functions not being implemented
};

