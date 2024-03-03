#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponOverheatState.h"
#include "EFortWeaponReloadType.h"
#include "Components/SlateWrapperTypes.h"
#include "BacchusHUDElement.h"
#include "EEquippedWeaponDisplay.h"
#include "AthenaEquippedItemBase.generated.h"

class AFortWeapon;
class UCommonTextBlock;
class UCommonVisibilitySwitcher;
class UFortResourceItemDefinition;
class UImage;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UAthenaEquippedItemBase : public UBacchusHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquippedWeaponDisplay CurrentMode;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountConsideredInfinite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* Switcher_Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ResourceContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_AmmoContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_UtilityContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_AmmoIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ResourceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_UtilityIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_MagazineAmmoCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SurplusAmmoCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ResourceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_UtilityAmmoCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_OutOfAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility WeaponEquipVisibility;
    
public:
    UAthenaEquippedItemBase();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleWorldItemsChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponTargetingChanged(bool bIsTargeting);
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponReloadStarted(float ReloadTime, EFortWeaponReloadType ReloadType);
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponReloadCancelled();
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponOverheatValueChanged(float CurrentValue, float MaxValue, EFortWeaponOverheatState State, bool bIsInCooldown);
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);
    
    UFUNCTION(BlueprintCallable)
    void HandleViewTargetChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleLocalAmmoChanged(int32 LocalCount, int32 LocalRemaining);
    
    UFUNCTION(BlueprintCallable)
    void HandleBuildingMaterialChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleWeaponTargetingChanged(bool bIsTargeting);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleWeaponReloadStarted(float ReloadTime, EFortWeaponReloadType ReloadType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleWeaponReloadCancelled(AFortWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleWeaponOverheatValueChanged(float CurrentValue, float MaxValue, EFortWeaponOverheatState State, bool bIsInCooldown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleWeaponModeChanged(EEquippedWeaponDisplay Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleResourceTypeChanged(const UFortResourceItemDefinition* Item, int32 ResourceCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleResourceCountChanged(int32 ResourceCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleHasBulletsPerClipChanged(bool bHasBulletsPerClip);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleHasAmmoChanged(bool bHasAmmo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleAmmoCountChanged(int32 MagazineAmmoCount, int32 SurplusAmmoCount, int32 TotalRemaining);
    
};

