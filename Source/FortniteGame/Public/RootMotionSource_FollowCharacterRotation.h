#pragma once
#include "CoreMinimal.h"
#include "GameFramework/RootMotionSource.h"
#include "RootMotionSource_FollowCharacterRotation.generated.h"

USTRUCT(BlueprintType)
struct FRootMotionSource_FollowCharacterRotation : public FRootMotionSource_ConstantForce {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstantStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasWalkingLastFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasFallingLastFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkingAccumulatedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingAccumulatedTime;
    
    FORTNITEGAME_API FRootMotionSource_FollowCharacterRotation();
};

