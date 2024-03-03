#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator.h"
#include "FortAthenaAIBotEvaluator_Warmup.generated.h"

class UFortAthenaAIBotWarmupDigestedSkillSet;

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_Warmup : public UFortAthenaAIBotEvaluator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WarmupPlayEmoteExecutionStatusKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WarmupLootAndShootExecutionStatusKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WarmupIdleExecutionStatusKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotWarmupDigestedSkillSet* CacheWarmupDigestedSkillSet;
    
public:
    UFortAthenaAIBotEvaluator_Warmup();
};

