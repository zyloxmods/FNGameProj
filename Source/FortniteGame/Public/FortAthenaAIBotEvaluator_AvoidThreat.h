#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator_Movement.h"
#include "FortAthenaAIBotEvaluator_AvoidThreat.generated.h"

class AFortProjectileBase;
class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet;

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_AvoidThreat : public UFortAthenaAIBotEvaluator_Movement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AvoidThreatKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AvoidThreatMovementStateKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AvoidThreatDestinationKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortProjectileBase* CurrentProjectileAvoiding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* CacheEMDigestedSkillSet;
    
public:
    UFortAthenaAIBotEvaluator_AvoidThreat();
};

