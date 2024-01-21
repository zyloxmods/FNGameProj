#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_TimeStep.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_TimeStep : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeStep;
    
public:
    AFortAthenaMutator_TimeStep();
};

