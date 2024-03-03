#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator_Attack.h"
#include "FortAthenaAIBotEvaluator_RangeAttack.generated.h"

class AActor;
class UFortAthenaAIBotAimingDigestedSkillSet;
class UFortAthenaAIBotMovementDigestedSkillSet;
class UFortAthenaAIBotPerceptionDigestedSkillSet;
class UFortAthenaAIBotRangeAttackDigestedSkillSet;

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_RangeAttack : public UFortAthenaAIBotEvaluator_Attack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponReloadName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponFireName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponTargetingName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetActorName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AggressivenessName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HasLoSOnThreatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackDigestedSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotPerceptionDigestedSkillSet* CachePerceptionDigestedSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* BlacklistReachingTarget;
    
public:
    UFortAthenaAIBotEvaluator_RangeAttack();
};

