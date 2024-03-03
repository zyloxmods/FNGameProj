#pragma once
#include "CoreMinimal.h"
#include "RuntimeSpringsInfo.generated.h"

USTRUCT(BlueprintType)
struct FRuntimeSpringsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringStiffMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringDampMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringLengthMultiplier;
    
    VALETRUNTIME_API FRuntimeSpringsInfo();
};

