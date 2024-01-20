#pragma once
#include "CoreMinimal.h"
#include "FortWeaponRangedDualForVehicle.h"
#include "FortWeaponRangedDualFerret.generated.h"

class AFortAthenaFerretVehicle;

UCLASS(Blueprintable, MinimalAPI)
class AFortWeaponRangedDualFerret : public AFortWeaponRangedDualForVehicle {
    GENERATED_BODY()
public:
    AFortWeaponRangedDualFerret();
    UFUNCTION(BlueprintCallable)
    AFortAthenaFerretVehicle* GetCachedFerretVehicle();
    
};

