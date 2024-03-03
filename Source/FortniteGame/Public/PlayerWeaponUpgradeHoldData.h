#pragma once
#include "CoreMinimal.h"
#include "PlayerWeaponUpgradeHoldData.generated.h"

class AFortPlayerController;
class AFortWeapon;

USTRUCT(BlueprintType)
struct FPlayerWeaponUpgradeHoldData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* InteractingPC;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortWeapon> UpgradeTargetWeapon;
    
    FORTNITEGAME_API FPlayerWeaponUpgradeHoldData();
};

