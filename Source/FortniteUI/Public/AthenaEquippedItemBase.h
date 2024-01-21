#pragma once
#include "CoreMinimal.h"
#include "BacchusHUDElement.h"
#include "EEquippedWeaponDisplay.h"
#include "AthenaEquippedItemBase.generated.h"

class AFortWeapon;
class AFortWeaponRanged;
class UAthenaPlayerViewModel;
class UFortResourceItemDefinition;
class UFortWeaponItemDefinition;
class UFortWorldItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaEquippedItemBase : public UBacchusHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquippedWeaponDisplay CurrentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaPlayerViewModel* VM;
    
public:
    UAthenaEquippedItemBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WeaponTypeChanged(EEquippedWeaponDisplay Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UtilityItemTypeChanged(AFortWeapon* Weapon, UFortWeaponItemDefinition* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UtilityItemCountChanged(int32 Remaining);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetViewModel(UAthenaPlayerViewModel* ViewModel);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResourceTypeChanged(UFortResourceItemDefinition* Item, int32 ResourceCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResourceCountChanged(int32 ResourceCount);
    
    UFUNCTION(BlueprintCallable)
    void OnWorldItemsChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponChanged(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);
    
    UFUNCTION(BlueprintCallable)
    void OnViewTargetChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnLocalAmmoChanged(int32 LocalCount, int32 LocalRemaining);
    
    UFUNCTION(BlueprintCallable)
    void OnBuildingMaterialChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HasAmmoChanged(bool bHasAmmo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AmmoTypeChanged(AFortWeaponRanged* RangedWeapon, UFortWorldItemDefinition* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AmmoChanged(int32 MagazineAmmoCount, int32 BackupAmmoCount, int32 TotalRemaining);
    
};

