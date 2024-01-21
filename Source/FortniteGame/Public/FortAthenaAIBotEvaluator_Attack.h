#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator.h"
#include "FortAthenaAIBotEvaluator_Attack.generated.h"

class UFortWeaponItemDefinition;

UCLASS(Abstract, Blueprintable)
class UFortAthenaAIBotEvaluator_Attack : public UFortAthenaAIBotEvaluator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWeaponItemDefinition* Weapon;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DestinationKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponFireName;
    
public:
    UFortAthenaAIBotEvaluator_Attack();
};

