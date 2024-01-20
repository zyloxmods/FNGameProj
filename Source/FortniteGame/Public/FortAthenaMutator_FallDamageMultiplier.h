#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_FallDamageMultiplier.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_FallDamageMultiplier : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallDamageMultiplier;
    
public:
    AFortAthenaMutator_FallDamageMultiplier();
};

