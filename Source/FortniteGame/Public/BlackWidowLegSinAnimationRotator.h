#pragma once
#include "CoreMinimal.h"
#include "BlackWidowLegSinAnimationScalar.h"
#include "BlackWidowLegSinAnimationRotator.generated.h"

USTRUCT(BlueprintType)
struct FBlackWidowLegSinAnimationRotator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackWidowLegSinAnimationScalar RollAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackWidowLegSinAnimationScalar PitchAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackWidowLegSinAnimationScalar YawAnimation;
    
    FORTNITEGAME_API FBlackWidowLegSinAnimationRotator();
};

