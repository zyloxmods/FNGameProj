#pragma once
#include "CoreMinimal.h"
#include "EFortDualWieldStance.h"
#include "EFortDualWieldSwingState.h"
#include "FortWeaponPickaxeAthena.h"
#include "RespondsToVariantAction.h"
#include "FortWeaponPickaxeDualWieldAthena.generated.h"

class UAnimMontage;
class UFXSystemComponent;
class UFortWeaponAdditionalData_SingleWieldState;
class UNiagaraSystem;
class UParticleSystem;
class UParticleSystemComponent;
class USkeletalMeshComponentBudgeted;
class USoundBase;

UCLASS(Blueprintable)
class AFortWeaponPickaxeDualWieldAthena : public AFortWeaponPickaxeAthena, public IRespondsToVariantAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* WeaponMeshOffhand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* SwingOffhandVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* IdleOffhandVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* AnimTrailsOffhandPSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* AnimTrailsOffhandPSCTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* AnimTrailsOffhandNiagaraAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAnimTrailsOffhandPSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimTrailsOffhandFirstSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimTrailsOffhandSecondSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimTrailsOffhandWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IdleFXOffhandSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwingFXOffhandSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* OffhandGenericImpactSound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> OffhandImpactNiagaraPhysicalSurfaceEffectInstances;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* OffhandImpactPhysicalSurfaceSounds[26];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* OffhandImpactPhysicalSurfaceEffects[26];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UNiagaraSystem>> OffhandImpactNiagaraPhysicalSurfaceEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WieldStance, meta=(AllowPrivateAccess=true))
    EFortDualWieldStance CurrentWieldStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWeaponAdditionalData_SingleWieldState* EffectiveSingleWieldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OriginalEquipAnimation;
    
public:
    AFortWeaponPickaxeDualWieldAthena();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSwingState(EFortDualWieldSwingState NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WieldStance();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortDualWieldStance GetWieldStance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponentBudgeted* GetWeaponMeshOffhand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseAnimTrailsOffhandPSC() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemComponent* GetSwingOffhandVFXComponent() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystemComponent* GetSwingOffhandPSC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSwingFXOffhandSocketName() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemComponent* GetIdleOffhandVFXComponent() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystemComponent* GetIdleOffhandPSC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetIdleFXOffhandSocketName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortDualWieldSwingState GetCurrentSwingState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimTrailsOffhandWidth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAnimTrailsOffhandSecondSocketName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystem* GetAnimTrailsOffhandPSCTemplate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemComponent* GetAnimTrailsOffhandPSC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNiagaraSystem* GetAnimTrailsOffhandNiagaraAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAnimTrailsOffhandFirstSocketName() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    UFXSystemComponent* CreateAnimTrailOffhandFX();
    
    
    // Fix for true pure virtual functions not being implemented
};

