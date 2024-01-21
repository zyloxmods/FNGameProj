#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_ResourcesEarned.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_ResourcesEarned : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResourcesEarnedMultiplier;
    
public:
    AFortAthenaMutator_ResourcesEarned();
};

