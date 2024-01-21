#pragma once
#include "CoreMinimal.h"
#include "FortVehicleAnimInstance.h"
#include "FortMountedTurretAnimInstance.generated.h"

class AFortMountedTurret;

UCLASS(Blueprintable, NonTransient)
class UFortMountedTurretAnimInstance : public UFortVehicleAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortMountedTurret* MountedTurret;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsUsingMountedTurret;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimingYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimingPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PedalScaler;
    
    UFortMountedTurretAnimInstance();
};

