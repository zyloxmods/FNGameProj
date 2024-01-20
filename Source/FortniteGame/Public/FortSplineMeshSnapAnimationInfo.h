#pragma once
#include "CoreMinimal.h"
#include "FortFXAnimationInfoBase.h"
#include "FortSplineMeshSnapAnimationInfo.generated.h"

class USplineComponent;

USTRUCT(BlueprintType)
struct FFortSplineMeshSnapAnimationInfo : public FFortFXAnimationInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* TargetSpline;
    
    FORTNITEGAME_API FFortSplineMeshSnapAnimationInfo();
};

