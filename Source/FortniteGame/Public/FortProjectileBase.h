#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CurveTable.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "EFortBaseWeaponDamage.h"
#include "FortDamageableActorInterface.h"
#include "FortGameplayEffectDeliveryActor.h"
#include "FortInteractInterface.h"
#include "FortProjectileMovementInterface.h"
#include "InteractionType.h"
#include "Templates/SubclassOf.h"
#include "FortProjectileBase.generated.h"

class AFortPlayerController;
class AFortSkyTube;
class UBulletWhipTrackerComponentBase;
class UCapsuleComponent;
class UFortProjectileMovementComponent;
class USceneComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortProjectileBase : public AFortGameplayEffectDeliveryActor, public IFortDamageableActorInterface, public IGameplayTagAssetInterface, public IFortInteractInterface, public IFortProjectileMovementInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle VerticleFireOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle InitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle ChargeUpInitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedMaxSpeed, meta=(AllowPrivateAccess=true))
    float ReplicatedMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GravityScale, meta=(AllowPrivateAccess=true))
    float GravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ChargePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MomentumTransfer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddOwnerVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnPointCanBeUsedByOtherPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerSpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBePickedUpWhenStopped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortProjectileMovementComponent* ProjectileMovementComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDummyProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopSimulatingOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableCollisionOnStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bStoppedSimulatingDueToHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicateStopSimulationLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClientInterpMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClientInterpRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSelectAttachedForInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SimulationStoppingHit, meta=(AllowPrivateAccess=true))
    FHitResult SimulationStoppingHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFiredWhileTargeting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ResumeSimulationCount, meta=(AllowPrivateAccess=true))
    int32 ResumeSimulationCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBaseWeaponDamage::Type> WeaponResponseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DefaultTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* CachedPassByPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkyTubeForceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentSkyTube, meta=(AllowPrivateAccess=true))
    AFortSkyTube* CurrentSkyTube;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBulletWhipTrackerComponentBase> BulletWhipTrackerComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetOverlapRestrictionsOnBounce;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBulletWhipTrackerComponentBase* BulletWhipTrackerComponent;
    
public:
    AFortProjectileBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGravityScale(float InitialGravityScale);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResumeSimulation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStoppedOnServer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStopCallback(const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStop(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShot(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResumeSimulation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SimulationStoppingHit();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ResumeSimulationCount();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedMaxSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GravityScale();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentSkyTube();
    
    UFUNCTION(BlueprintCallable)
    void OnBounceCallback(const FHitResult& Hit, const FVector& ImpactVelocity);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBounce(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortSkyTube* GetSkyTube() const;
    
    UFUNCTION(BlueprintCallable)
    AFortPlayerController* GetOwnerPlayerController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGravityScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultSpeed(float InChargePercent) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ExitSkyTube(AFortSkyTube* SkyTube, bool& bIsLastTube);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EnterSkyTube(AFortSkyTube* SkyTube, bool& bIsFirstTube);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
    UFUNCTION()
    bool ServerOnAttemptInteract(const FInteractionType& InteractType) override PURE_VIRTUAL(ServerOnAttemptInteract, return false;);
    
};

