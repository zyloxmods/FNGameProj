#pragma once
#include "CoreMinimal.h"
#include "FortMobileActionButtonBehavior.h"
#include "FortMobileActionButtonBehavior_SecondaryAbility.generated.h"

class AFortWeapon;

UCLASS(Abstract, Blueprintable)
class FORTNITEUI_API UFortMobileActionButtonBehavior_SecondaryAbility : public UFortMobileActionButtonBehavior {
    GENERATED_BODY()
public:
    UFortMobileActionButtonBehavior_SecondaryAbility();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PreviousWeapon);
    
};

