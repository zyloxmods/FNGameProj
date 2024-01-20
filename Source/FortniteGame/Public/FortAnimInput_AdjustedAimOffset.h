#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_AdjustedAimOffset.generated.h"

USTRUCT(BlueprintType)
struct FFortAnimInput_AdjustedAimOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetingYawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetingPitchOffset;
    
    FORTNITEGAME_API FFortAnimInput_AdjustedAimOffset();
};

