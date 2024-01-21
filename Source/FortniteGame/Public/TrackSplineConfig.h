#pragma once
#include "CoreMinimal.h"
#include "ETrackDirection.h"
#include "TrackSplineConfig.generated.h"

USTRUCT(BlueprintType)
struct FTrackSplineConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrackDirection Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrackDirection End;
    
    FORTNITEGAME_API FTrackSplineConfig();
};

