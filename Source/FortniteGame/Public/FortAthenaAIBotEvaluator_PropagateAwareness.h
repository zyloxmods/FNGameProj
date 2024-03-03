#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAthenaAIBotEvaluator.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAIBotEvaluator_PropagateAwareness.generated.h"

class AFortPlayerPawnAthena;
class UFortAthenaAIBotPropagateAwarenessDigestedSkillSet;
class UGameplayEffect;

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_PropagateAwareness : public UFortAthenaAIBotEvaluator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery AwarenessTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> AwarenessGameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawnAthena*> AwareAllyPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawnAthena*> AlreadyTestedPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotPropagateAwarenessDigestedSkillSet* PropagateAwarenessSkillSet;
    
public:
    UFortAthenaAIBotEvaluator_PropagateAwareness();
};

