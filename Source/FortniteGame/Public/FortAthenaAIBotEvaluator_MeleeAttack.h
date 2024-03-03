#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator_Attack.h"
#include "FortAthenaAIBotEvaluator_MeleeAttack.generated.h"

class AActor;
class UFortAthenaAIBotAttackingDigestedSkillSet;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAIBotEvaluator_MeleeAttack : public UFortAthenaAIBotEvaluator_Attack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponTriggerMeleeName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrioritizeMovingTowardsThreatOverCurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotAttackingDigestedSkillSet* AttackingSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* BlacklistReachingTarget;
    
public:
    UFortAthenaAIBotEvaluator_MeleeAttack();
};

