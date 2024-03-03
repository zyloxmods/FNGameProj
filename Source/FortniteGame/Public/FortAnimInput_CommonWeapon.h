#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_CommonWeapon.generated.h"

USTRUCT(BlueprintType)
struct FFortAnimInput_CommonWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsWeaponEquipped: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bForceUpperBodyTargeting: 1;
    
    FORTNITEGAME_API FFortAnimInput_CommonWeapon();
};

