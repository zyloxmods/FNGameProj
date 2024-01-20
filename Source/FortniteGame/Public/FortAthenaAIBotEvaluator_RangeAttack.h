#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator_Attack.h"
#include "FortAthenaAIBotEvaluator_RangeAttack.generated.h"

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_RangeAttack : public UFortAthenaAIBotEvaluator_Attack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReloadName;
    
public:
    UFortAthenaAIBotEvaluator_RangeAttack();
};

