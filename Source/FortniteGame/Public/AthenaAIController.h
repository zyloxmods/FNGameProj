#pragma once
#include "CoreMinimal.h"
#include "FortAIController.h"
#include "AthenaAIController.generated.h"

class AActor;
class UFortGameplayAbility;

UCLASS(Blueprintable)
class FORTNITEGAME_API AAthenaAIController : public AFortAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGameplayAbility* PrimaryMeleeAttackAbilityInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGameplayAbility* PrimaryRangedAttackAbilityInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SecondaryGoalActor;
    
public:
    AAthenaAIController();
};

