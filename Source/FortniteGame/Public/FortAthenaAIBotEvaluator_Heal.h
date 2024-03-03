#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator.h"
#include "FortAthenaAIBotEvaluator_Heal.generated.h"

class UFortAthenaAIBotHealingDigestedSkillSet;

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_Heal : public UFortAthenaAIBotEvaluator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HealingObjectKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotHealingDigestedSkillSet* HealingSkillSet;
    
public:
    UFortAthenaAIBotEvaluator_Heal();
};

