#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Scene.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EFortAbilityTargetingSource.h"
#include "EFortWeaponOverheatState.h"
#include "FortBulletPatternEntry.h"
#include "FortEffectDistanceQuality.h"
#include "FortWeapon.h"
#include "OnOverheatValueChangedDelegate.h"
#include "OnProjectileSpawnedDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortWeaponRanged.generated.h"

class AFortPawn;
class AFortProjectileBase;
class AFortTracerBase;
class IFortAthenaAILODSettings;
class UFortAthenaAILODSettings;
class UAnimMontage;
class UAnimationAsset;
class UMaterialInterface;
class UNiagaraSystem;
class UParticleSystem;
class UParticleSystemComponent;
class USkeletalMesh;
class UStaticMeshComponent;
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsMuzzleTraceNearWall: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MuzzleTraceNearWallThreshold;
    
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
    TSoftObjectPtr<UNiagaraSystem> BeamNiagaraSystemAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BeamSourceSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* FortSpawnPropOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* FortSpawnPropAnimOverride;
    
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
    bool ScopePostProcessEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScopePostProcessBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedBlendable> ScopePostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortBulletPatternEntry> BulletPattern;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BeamNiagaraSystemInstance;
    
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
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOverheatValueChanged OnOverheatValueChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OverheatState, meta=(AllowPrivateAccess=true))
    EFortWeaponOverheatState OverheatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OverheatedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponOverheatedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCooldownWhileOverheated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverheatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeHeatWasLastAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeOverheatedBegan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCacheAimPointOnFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CachedAimPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortAthenaAILODSettings> CachedLODSettingsManager;
    
public:
    AFortWeaponRanged();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseScopeTargeting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseFirstPersonTargeting() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void TempHack_PlayOverheatedAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldSpawnBulletShellFX();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPlayShellFX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPlayReloadFX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPlayPersistentFireFX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayAmmoCounter() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetShellReloadCounter(int32 InputShellReloadCounter);
    
    UFUNCTION(BlueprintCallable)
    void SetHomingTarget(AFortPawn* PlayerPawn);
    
    UFUNCTION(BlueprintCallable)
    void SetDecalColorStart(FLinearColor InputDecalColorStart);
    
    UFUNCTION(BlueprintCallable)
    void SetDecalColorEnd(FLinearColor InputDecalColorEnd);
    
    UFUNCTION(BlueprintCallable)
    UParticleSystem* SetBeamParticleSystem(UParticleSystem* InputBeamParticleSystem);
    
    UFUNCTION(BlueprintCallable)
    UNiagaraSystem* SetBeamNiagaraSystem(UNiagaraSystem* InputBeamNiagaraSystem);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetMuzzleTraceNearWall(bool bIsNearWall);
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverheated() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCachedIsProjectileWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeBeamFX(UParticleSystemComponent* InBeamPSC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseBeamParticles() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUniqueMuzzleSocketNames(TArray<FName>& Names) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AFortTracerBase> GetTracerTemplate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShellReloadCounter() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FWeightedBlendable> GetScopePostProcessMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetScopeParameters(UStaticMeshComponent*& ScopeComponent, FVector2D& DepthOfFieldVignetteRange, float& WeaponSightsCameraOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortWeaponOverheatState GetOverheatState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverheatingMaxValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentOverheatValue() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystemComponent* GetBeamPSC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystem* GetBeamParticleSystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNiagaraSystem* GetBeamNiagaraSystem() const;
    
public:
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesWeaponOverheat() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeactivateBeamFX();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientFixupOverheatValue(const float InOverheatValue);
    
    UFUNCTION(BlueprintCallable)
    void ClearHomingTarget();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AbortScopeFX();
    
};

