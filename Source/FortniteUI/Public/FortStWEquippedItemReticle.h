#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponOverheatState.h"
#include "EFortWeaponReloadType.h"
#include "FortHUDElementWidget.h"
#include "FortStWEquippedItemReticle.generated.h"

class AFortWeapon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortStWEquippedItemReticle : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortWeapon> BoundWeapon;
    
public:
    UFortStWEquippedItemReticle();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponTargetingChanged(bool bIsTargeting);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponReloadStarted(float ReloadTime, EFortWeaponReloadType ReloadType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponReloadCancelled(AFortWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponOverheatValueChanged(float CurrentValue, float MaxValue, EFortWeaponOverheatState State, bool bIsInCooldown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponChanged(AFortWeapon* NewWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAmmoChanged(int32 MagazineAmmoCount, int32 TotalRemaining);
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponTargetingChanged(bool bIsTargeting);
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponReloadStarted(float ReloadTime, EFortWeaponReloadType ReloadType);
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponReloadCancelled();
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponOverheatValueChanged(float CurrentValue, float MaxValue, EFortWeaponOverheatState State, bool bIsInCooldown);
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponChanged(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);
    
    UFUNCTION(BlueprintCallable)
    void HandleAmmoChanged(int32 MagazineAmmoCount, int32 TotalRemaining);
    
};

