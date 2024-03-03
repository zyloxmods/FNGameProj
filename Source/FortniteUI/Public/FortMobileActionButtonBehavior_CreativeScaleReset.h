#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortMobileActionButtonBehavior.h"
#include "FortMobileActionButtonBehavior_CreativeScaleReset.generated.h"

class AFortWeapon;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortMobileActionButtonBehavior_CreativeScaleReset : public UFortMobileActionButtonBehavior {
    GENERATED_BODY()
public:
    UFortMobileActionButtonBehavior_CreativeScaleReset();
private:
    UFUNCTION(BlueprintCallable)
    void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PreviousWeapon);
    
    UFUNCTION(BlueprintCallable)
    void HandleMoveToolScaleModified(FVector currentScale);
    
};

