#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/Scene.h"
#include "EFortAbilityTargetingSource.h"
#include "EFortWeaponOverheatState.h"
#include "FortEffectDistanceQuality.h"
#include "FortWeapon.h"
#include "OnProjectileSpawnedDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortWeaponRanged.generated.h"

class AFortPawn;
class AFortProjectileBase;
class AFortTracerBase;
class UAnimMontage;
class UMaterialInterface;
class UParticleSystem;
class UParticleSystemComponent;
class UTexture2D;

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class AFortWeaponRanged : public AFortWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileSpawned OnProjectileSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortTracerBase> TracerTemplate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowAutomaticWeaponCatchup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentNumBullets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ScopeTargetingMuzzleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CurrentMuzzleBlockedLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortAbilityTargetingSource CurrentDamageStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MaxTargetingAimAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectilePitchOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldDisplayAmmoCounter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldAimFromMuzzleAtCloseRange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysAimFromMuzzle: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMaintainAimLocationDuringTargeting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseScopeTargeting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseFirstPersonTargeting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseReducedTargetingAimAssist: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPersistentFireFX: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseBeamParticles: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseImpactFXForProjectiles: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseImpactFXForProjectileOverlaps: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseImpactDecals: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsePersistentBeam: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEffectDistanceQuality BeamSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEffectDistanceQuality ImpactSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEffectDistanceQuality DecalSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScopeImpactEffectDistanceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BeamParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BeamSourceSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DecalSizeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DecalSizeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecalLifespanMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecalLifespanMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DecalColorStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DecalColorEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DecalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DecalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EPhysicalSurface>> SurfaceAcceptingDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ShellReloadCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator TargetingRotAdjustmentTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastTargetingRotAdjustmentWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedBlendable> ScopePostProcessMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseAthenaRecoil: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseAthenaPerfectADSAim: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFirstShotAccuracyCheckVehicleMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstShotAccuracyMinWaitTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FireAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FireDownsightsAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FireFromCrouchWalkAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CockingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponFireMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponFireDownsightsMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponFireFromCrouchWalkMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponCockingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BeamPSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchWalkSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRecoilDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OverheatState, meta=(AllowPrivateAccess=true))
    EFortWeaponOverheatState OverheatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OverheatedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponOverheatedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCooldownWhileOverheated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float OverheatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeHeatWasLastAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeOverheatedBegan;
    
public:
    AFortWeaponRanged();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseScopeTargeting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseReducedAimAssist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseFirstPersonTargeting() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void TempHack_PlayOverheatedAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldSpawnBulletShellFX();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayAmmoCounter() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetHomingTarget(AFortPawn* PlayerPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartOverheated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartHeating();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartCooling();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnProjectile(AFortProjectileBase* SpawnProjectile);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OverheatState(EFortWeaponOverheatState PreviousOverheatState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalFailedToFireWhenOverheated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedCooling();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingScopeOrFirstPersonCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingScope() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingFirstPersonCamera() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCachedIsProjectileWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeBeamFX(UParticleSystemComponent* InBeamPSC);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverheatingMaxValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentOverheatValue() const;
    
    UFUNCTION(BlueprintCallable)
    float GetADSTransitionOutTime();
    
    UFUNCTION(BlueprintCallable)
    float GetADSTransitionInTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceScopeFX();
    
    UFUNCTION(BlueprintCallable)
    void EnableCornersReticle(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void EnableAltOuterReticle(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void EnableAltCenterReticle(bool bNewEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeactivateBeamFX();
    
    UFUNCTION(BlueprintCallable)
    void ClearHomingTarget();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AbortScopeFX();
    
};

