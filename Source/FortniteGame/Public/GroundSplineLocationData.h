#pragma once
#include "CoreMinimal.h"
#include "GroundSplineLocationData.generated.h"

class USplineComponent;

USTRUCT(BlueprintType)
struct FGroundSplineLocationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DistanceAlongSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TeleportRequestNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    FORTNITEGAME_API FGroundSplineLocationData();
};

