#pragma once
#include "CoreMinimal.h"
#include "GameFrameworkComponent.h"
#include "FortWeaponComponent.generated.h"

class AFortWeapon;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortWeaponComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    UFortWeaponComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUnEquip(AFortWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnReleaseTrigger(AFortWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnReleaseSecondaryFire(AFortWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnPressTrigger(AFortWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnPressSecondaryFire(AFortWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnEquip(AFortWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnConsumeAmmo(int32 Quantity);
    
};

