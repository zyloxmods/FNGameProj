#pragma once
#include "CoreMinimal.h"
#include "AntelopeVehicleBoostLevel.generated.h"

USTRUCT(BlueprintType)
struct FAntelopeVehicleBoostLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulationPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostTime;
    
    FORTNITEGAME_API FAntelopeVehicleBoostLevel();
};

