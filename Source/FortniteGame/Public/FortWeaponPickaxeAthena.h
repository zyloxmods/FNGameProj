#pragma once
#include "CoreMinimal.h"
#include "FortVFXDataOwner.h"
#include "FortWeapon.h"
#include "MarshalledVFXRuntimeData.h"
#include "FortWeaponPickaxeAthena.generated.h"

class UAnimMontage;
class UAthenaPickaxeItemDefinition;
class UFXSystemComponent;
class UMaterialInstanceDynamic;
class UNiagaraSystem;
class UParticleSystem;
class UParticleSystemComponent;
class USoundBase;

UCLASS(Blueprintable, Config=Game)
class AFortWeaponPickaxeAthena : public AFortWeapon, public IFortVFXDataOwner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* SwingVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* IdleVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* AnimTrailsPSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* AnimTrailsPSCTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* AnimTrailsNiagaraAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAnimTrailsPSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimTrailsFirstSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimTrailsSecondSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimTrailsWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IdleFXSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwingFXSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* GenericImpactSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Material0MID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWatchKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WatchedKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCandyCaneKillReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* CQCEnemyAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> PokeAnimationsToCheckForOnImpact;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarshalledVFXRuntimeData> RuntimeMarshalledData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaPickaxeItemDefinition* CachedCosmeticItemDefinition;
    
public:
    AFortWeaponPickaxeAthena();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAuthoredData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseAnimTrailsPSC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemComponent* GetSwingVFXComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystemComponent* GetSwingPSC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSwingFXSocketName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemComponent* GetIdleVFXComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystemComponent* GetIdlePSC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetIdleFXSocketName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemComponent* GetAnimTrailVFXComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimTrailsWidth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAnimTrailsSecondSocketName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystem* GetAnimTrailsPSCTemplate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemComponent* GetAnimTrailsPSC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNiagaraSystem* GetAnimTrailsNiagaraAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAnimTrailsFirstSocketName() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    UFXSystemComponent* CreateAnimTrailFX();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AttachesAnimTrailsToWeapon() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

