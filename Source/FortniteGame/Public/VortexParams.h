#pragma once
#include "CoreMinimal.h"
#include "VortexParams.generated.h"

USTRUCT(BlueprintType)
struct FVortexParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityFloorAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityFloorWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityFloorGravityScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityFloorTerminalVelocity;
    
    FORTNITEGAME_API FVortexParams();
};

