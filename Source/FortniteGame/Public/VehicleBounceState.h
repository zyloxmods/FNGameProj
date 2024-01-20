#pragma once
#include "CoreMinimal.h"
#include "EBounceCompressionState.h"
#include "VehicleBounceState.generated.h"

USTRUCT(BlueprintType)
struct FVehicleBounceState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBounceCompressionState CompressionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompressionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StateCooldown;
    
    FORTNITEGAME_API FVehicleBounceState();
};

