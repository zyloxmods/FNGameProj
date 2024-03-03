#pragma once
#include "CoreMinimal.h"
#include "TrackPieceConfig.h"
#include "TrackSplineConfig.h"
#include "TrackSwitchStateConfig.generated.h"

USTRUCT(BlueprintType)
struct FTrackSwitchStateConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrackPieceConfig TrackPiece;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrackSplineConfig SplineConfig1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrackSplineConfig SplineConfig2;
    
    FORTNITEGAME_API FTrackSwitchStateConfig();
};

