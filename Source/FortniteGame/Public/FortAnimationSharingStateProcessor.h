#pragma once
#include "CoreMinimal.h"
#include "AnimationSharingTypes.h"
#include "FortAnimationSharingStateProcessor.generated.h"

UCLASS(Blueprintable)
class UFortAnimationSharingStateProcessor : public UAnimationSharingStateProcessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunningVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkingVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintingVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingZVelocityThreshold;
    
    UFortAnimationSharingStateProcessor();
};

