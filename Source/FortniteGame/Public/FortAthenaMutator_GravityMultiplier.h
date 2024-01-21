#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "GravityMovementData.h"
#include "FortAthenaMutator_GravityMultiplier.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_GravityMultiplier : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GravityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGravityMovementData> CustomGravityData;
    
public:
    AFortAthenaMutator_GravityMultiplier();
};

