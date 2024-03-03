#pragma once
#include "CoreMinimal.h"
#include "FortMobileButtonBehaviorComponent_TagIconPicker.h"
#include "FortMobileButtonBehaviorComponent_WeaponIconPicker.generated.h"

class AFortWeapon;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileButtonBehaviorComponent_WeaponIconPicker : public UFortMobileButtonBehaviorComponent_TagIconPicker {
    GENERATED_BODY()
public:
    UFortMobileButtonBehaviorComponent_WeaponIconPicker();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PreviousWeapon);
    
};

