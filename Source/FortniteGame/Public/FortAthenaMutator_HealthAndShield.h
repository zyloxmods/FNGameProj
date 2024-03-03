#pragma once
#include "CoreMinimal.h"
#include "EAthenaMutatorEvaluators.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_HealthAndShield.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_HealthAndShield : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaMutatorEvaluators NumericalMutatorOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingShield;
    
public:
    AFortAthenaMutator_HealthAndShield();
};

