#pragma once
#include "CoreMinimal.h"
#include "TrackMovement.h"
#include "RepTrackMovement.generated.h"

USTRUCT(BlueprintType)
struct FRepTrackMovement : public FTrackMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    FORTNITEGAME_API FRepTrackMovement();
};

