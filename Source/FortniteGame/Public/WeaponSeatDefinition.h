#pragma once
#include "CoreMinimal.h"
#include "WeaponSeatDefinition.generated.h"

class UFortWeaponItemDefinition;

USTRUCT(BlueprintType)
struct FWeaponSeatDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SeatIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWeaponItemDefinition* VehicleWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortWeaponItemDefinition* VehicleWeaponOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortWeaponItemDefinition* LastEquippedVehicleWeapon;
    
    FORTNITEGAME_API FWeaponSeatDefinition();
};

