#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FortReppedPoint.h"
#include "FortReppedPointList.generated.h"

class AFortSplineGroundPath;

USTRUCT(BlueprintType)
struct FFortReppedPointList : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortReppedPoint> FortReppedPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortSplineGroundPath* FortSplineGroundPath;
    
    FORTNITEGAME_API FFortReppedPointList();
};

