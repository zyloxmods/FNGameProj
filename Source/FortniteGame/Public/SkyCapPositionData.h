#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SkyCapPositionData.generated.h"

USTRUCT(BlueprintType)
struct FSkyCapPositionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaitTime;
    
    FORTNITEGAME_API FSkyCapPositionData();
};

