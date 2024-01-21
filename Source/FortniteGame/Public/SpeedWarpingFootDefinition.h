#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "SpeedWarpingFootDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSpeedWarpingFootDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference IKFootBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference FKFootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBonesInLimb;
    
    FORTNITEGAME_API FSpeedWarpingFootDefinition();
};

