#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortMobileActionButtonBehavior.h"
#include "FortMobileActionButtonBehavior_CreativeRotationReset.generated.h"

class AFortWeapon;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortMobileActionButtonBehavior_CreativeRotationReset : public UFortMobileActionButtonBehavior {
    GENERATED_BODY()
public:
    UFortMobileActionButtonBehavior_CreativeRotationReset();
private:
    UFUNCTION(BlueprintCallable)
    void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PreviousWeapon);
    
    UFUNCTION(BlueprintCallable)
    void HandleMoveToolRotationModified(FQuat currentRotationOffset);
    
};

