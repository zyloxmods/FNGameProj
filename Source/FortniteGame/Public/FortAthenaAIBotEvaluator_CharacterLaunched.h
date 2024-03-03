#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator.h"
#include "FortAthenaAIBotEvaluator_CharacterLaunched.generated.h"

class UFortAthenaAIBotMovementDigestedSkillSet;

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_CharacterLaunched : public UFortAthenaAIBotEvaluator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterLaunchedExecutionStatusKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SteerDirectionKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementSkillSet;
    
public:
    UFortAthenaAIBotEvaluator_CharacterLaunched();
};

