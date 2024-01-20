#pragma once
#include "CoreMinimal.h"
#include "FerretVehicleBoostLevel.generated.h"

USTRUCT(BlueprintType)
struct FFerretVehicleBoostLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulationPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostTime;
    
    FORTNITEGAME_API FFerretVehicleBoostLevel();
};

