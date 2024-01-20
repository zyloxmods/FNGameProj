#pragma once
#include "CoreMinimal.h"
//#include "AnimationSharingTypes.h" excluded for s7 project should be uncommented on s9 branch since plugin doesnt exist
#include "FortAnimationSharingStateProcessor.generated.h"

UCLASS(Blueprintable)
class UFortAnimationSharingStateProcessor : public UObject /* UAnimationSharingStateProcessor*/ {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunningVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingZVelocityThreshold;
    
    UFortAnimationSharingStateProcessor();
};

