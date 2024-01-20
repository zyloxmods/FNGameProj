#pragma once
#include "CoreMinimal.h"
#include "FortAttributeSet.h"
#include "FortGameplayAttributeData.h"
#include "FortWeaponAttrSet.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortWeaponAttrSet : public UFortAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponChanceToNotConsumeAmmo, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData WeaponChanceToNotConsumeAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AccumulatedWeaponChanceToNotConsumeAmmo, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData AccumulatedWeaponChanceToNotConsumeAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponRateOfFire, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData WeaponRateOfFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponHorizontalRecoil, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData WeaponHorizontalRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponVerticalRecoil, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData WeaponVerticalRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponSpreadReduction, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData WeaponSpreadReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponReloadSpeed, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData WeaponReloadSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponAmmoClipSize, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData WeaponAmmoClipSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponOverheatMultiplier, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData WeaponOverheatMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponOverheatMaxMultiplier, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData WeaponOverheatMaxMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponOverheatCoolingMultiplier, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData WeaponOverheatCoolingMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponOverheatCooldownMultiplier, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData WeaponOverheatCooldownMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterItemDurabilityDecayModifier, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData CharacterItemDurabilityDecayModifier;
    
    UFortWeaponAttrSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponVerticalRecoil();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponSpreadReduction();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponReloadSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponRateOfFire();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponOverheatMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponOverheatMaxMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponOverheatCoolingMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponOverheatCooldownMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponHorizontalRecoil();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponChanceToNotConsumeAmmo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponAmmoClipSize();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterItemDurabilityDecayModifier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AccumulatedWeaponChanceToNotConsumeAmmo();
    
};

