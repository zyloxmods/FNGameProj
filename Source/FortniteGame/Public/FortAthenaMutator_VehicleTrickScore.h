#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_VehicleTrickScore.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_VehicleTrickScore : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreMultiplier;
    
public:
    AFortAthenaMutator_VehicleTrickScore();
};

