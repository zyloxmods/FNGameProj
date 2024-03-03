#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "OrientationWarpingSpineBoneSettings.generated.h"

USTRUCT(BlueprintType)
struct FOrientationWarpingSpineBoneSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference Bone;
    
    FORTNITEGAME_API FOrientationWarpingSpineBoneSettings();
};

