#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "NitrogenFareDistanceValue.generated.h"

USTRUCT(BlueprintType)
struct FNitrogenFareDistanceValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FareValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinimumDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumFares;
    
    NITROGENRUNTIME_API FNitrogenFareDistanceValue();
};

