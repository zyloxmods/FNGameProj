#pragma once
#include "CoreMinimal.h"
#include "TrackMovement.generated.h"

class USplineComponent;

USTRUCT(BlueprintType)
struct FTrackMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* CurrentSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DistanceAlongSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bReverseDirectionAlongSpline;
    
    FORTNITEGAME_API FTrackMovement();
};

