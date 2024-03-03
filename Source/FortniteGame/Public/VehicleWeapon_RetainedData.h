#pragma once
#include "CoreMinimal.h"
#include "VehicleWeapon_RetainedData.generated.h"

USTRUCT(BlueprintType)
struct FVehicleWeapon_RetainedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoInClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastFireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPrevious;
    
    FORTNITEGAME_API FVehicleWeapon_RetainedData();
};

