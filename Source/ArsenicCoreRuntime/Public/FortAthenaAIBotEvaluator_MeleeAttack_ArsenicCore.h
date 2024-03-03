#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator_MeleeAttack.h"
#include "FortAthenaAIBotEvaluator_MeleeAttack_ArsenicCore.generated.h"

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_MeleeAttack_ArsenicCore : public UFortAthenaAIBotEvaluator_MeleeAttack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToEngageMeleeDefensive;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DashExecutionStatusName;
    
public:
    UFortAthenaAIBotEvaluator_MeleeAttack_ArsenicCore();
};

