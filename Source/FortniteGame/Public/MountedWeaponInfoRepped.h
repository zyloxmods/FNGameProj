#pragma once
#include "CoreMinimal.h"
#include "MountedWeaponInfoRepped.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FMountedWeaponInfoRepped {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* HostVehicleCachedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HostVehicleSeatIndexCached;
    
    FORTNITEGAME_API FMountedWeaponInfoRepped();
};

