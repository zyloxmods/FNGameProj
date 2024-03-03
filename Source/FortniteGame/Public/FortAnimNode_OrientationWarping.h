#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "OrientationWarpingSettings.h"
#include "OrientationWarpingSpineBoneData.h"
#include "FortAnimNode_OrientationWarping.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortAnimNode_OrientationWarping : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocomotionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrientationWarpingSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FOrientationWarpingSpineBoneData> SpineBoneDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedDeltaTime;
    
    FFortAnimNode_OrientationWarping();
};

