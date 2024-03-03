#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "WeaponOverheatWidget.generated.h"

class AFortWeapon;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UWeaponOverheatWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* OverheatProgressImage;
    
public:
    UWeaponOverheatWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnWeaponUnequipped();
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponEquipped(AFortWeapon* CurrentWeapon, AFortWeapon* PrevWeapon);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnChanged();
    
};

