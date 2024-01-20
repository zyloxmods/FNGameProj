#pragma once
#include "CoreMinimal.h"
#include "GoatVehicleBoostLevel.generated.h"

USTRUCT(BlueprintType)
struct FGoatVehicleBoostLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulationPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostTime;
    
    FORTNITEGAME_API FGoatVehicleBoostLevel();
};

