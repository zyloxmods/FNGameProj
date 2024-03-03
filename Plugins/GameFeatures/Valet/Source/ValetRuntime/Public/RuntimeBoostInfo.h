#pragma once
#include "CoreMinimal.h"
#include "RuntimeBoostInfo.generated.h"

USTRUCT(BlueprintType)
struct FRuntimeBoostInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostPushForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostTopSpeedForceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostTopSpeedMultiplier;
    
    VALETRUNTIME_API FRuntimeBoostInfo();
};

