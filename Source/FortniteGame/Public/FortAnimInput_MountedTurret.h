#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_MountedTurret.generated.h"

USTRUCT(BlueprintType)
struct FFortAnimInput_MountedTurret {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsUsingMountedTurret;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimingYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimingPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PedalScaler;
    
    FORTNITEGAME_API FFortAnimInput_MountedTurret();
};

