#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FillFloorPositionData.generated.h"

USTRUCT(BlueprintType)
struct FFillFloorPositionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PostMoveDelay;
    
    FORTNITEGAME_API FFillFloorPositionData();
};

