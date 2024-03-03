#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_ResourceRateOverride.generated.h"

class UCurveTable;

UCLASS(Blueprintable)
class AFortAthenaMutator_ResourceRateOverride : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResourceRateOverrideIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveTable*> ResourceRateOverrides;
    
public:
    AFortAthenaMutator_ResourceRateOverride();
};

