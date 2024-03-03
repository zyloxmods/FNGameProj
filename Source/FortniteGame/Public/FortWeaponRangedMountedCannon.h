#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortWeaponRangedForVehicle.h"
#include "FortWeaponRangedMountedCannon.generated.h"

UCLASS(Blueprintable)
class AFortWeaponRangedMountedCannon : public AFortWeaponRangedForVehicle {
    GENERATED_BODY()
public:
    AFortWeaponRangedMountedCannon();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFireActorInCannon(const FVector LaunchDir);
    
};

