#pragma once
#include "CoreMinimal.h"
#include "FortAttributeSet.h"
#include "FortGameplayAttributeData.h"
#include "FortWeaponAttrSet.generated.h"

UCLASS(Blueprintable)
class UFortWeaponAttrSet : public UFortAttributeSet {
    GENERATED_BODY()
public:
private:
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponChargeRate, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData WeaponChargeRate;
    
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
    
public:
    UFortWeaponAttrSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponVerticalRecoil(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponSpreadReduction(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponReloadSpeed(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponRateOfFire(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponOverheatMultiplier(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponOverheatMaxMultiplier(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponOverheatCoolingMultiplier(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponOverheatCooldownMultiplier(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponHorizontalRecoil(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponChargeRate(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponChanceToNotConsumeAmmo(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponAmmoClipSize(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterItemDurabilityDecayModifier(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AccumulatedWeaponChanceToNotConsumeAmmo(const FFortGameplayAttributeData& OldValue);
    
};

