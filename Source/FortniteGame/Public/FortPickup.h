#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EFortPickupSourceTypeFlag.h"
#include "EFortPickupSpawnSource.h"
#include "FortInteractInterface.h"
#include "FortItemEntry.h"
#include "FortPickupLocationData.h"
#include "InteractionType.h"
#include "PickupOnDespawnDelegate.h"
#include "PickupOnPickupDelegate.h"
#include "FortPickup.generated.h"

class AFortPawn;
class AFortPickupEffect;
class UAudioComponent;
class UCapsuleComponent;
class UFortItem;
class UFortSimpleMiniMapIndicator;
class UFortSlateHUDIndicator;
class UProjectileMovementComponent;

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API AFortPickup : public AActor, public IFortInteractInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePickupWidget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeaponsCanBeAutoPickups;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoUpgradeWeapons;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupOnPickup OnPickup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupOnPickup OnPickupAttempted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupOnDespawn OnPickupDespawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bRandomRotation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PrimaryPickupItemEntry, meta=(AllowPrivateAccess=true))
    FFortItemEntry PrimaryPickupItemEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortItemEntry> MultiItemPickupEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PickupLocationData, meta=(AllowPrivateAccess=true))
    FFortPickupLocationData PickupLocationData;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 PickupSourceTypeFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortPickupSpawnSource PickupSpawnSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PickupOwnerData, meta=(AllowPrivateAccess=true))
    int32 OptionalOwnerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid OptionalMissionGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItem* PrimaryPickupDummyItem;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPickupEffect> PickupEffectBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* TouchCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bPickedUp, meta=(AllowPrivateAccess=true))
    bool bPickedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSplitOnPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TossedFromContainer, meta=(AllowPrivateAccess=true))
    bool bTossedFromContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bCombinePickupsWhenTossCompletes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ServerStoppedSimulation, meta=(AllowPrivateAccess=true))
    bool bServerStoppedSimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClientUseInterpolationOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ServerImpactSoundFlash, meta=(AllowPrivateAccess=true))
    uint8 ServerImpactSoundFlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastLandedSoundPlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandSoundZForceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultFlyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDefaultFlyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* DroppedLoopingSoundComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortPawn* PawnWhoDroppedPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CachedSpecialActorIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName SpecialActorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSimpleMiniMapIndicator* MinimapIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSlateHUDIndicator* HUDLabel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StormDespawnTime;
    
public:
    AFortPickup();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TossPickup(const FVector FinalLocation, AFortPawn* ItemOwner, int32 OverrideMaxStackCount, bool bToss, const EFortPickupSourceTypeFlag InPickupSourceTypeFlags, const EFortPickupSpawnSource InPickupSpawnSource);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PickedUp() const;
    
    UFUNCTION(BlueprintCallable)
    void OnServerStopCallback(const FHitResult& Hit);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TossedFromContainer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerStoppedSimulation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerImpactSoundFlash();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PrimaryPickupItemEntry();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PickupOwnerData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PickupLocationData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bPickedUp();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPawn* GetPawnWhoDroppedPickup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemEntryNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortItemEntry GetItemEntry(int32 ItemIndex) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetInteractText(FText& InteractText);
    
    UFUNCTION(BlueprintCallable)
    bool GetInteractErrorText(FText& InteractErrorText);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FText GetDisplayName();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool ServerOnAttemptInteract(const FInteractionType& InteractType) override PURE_VIRTUAL(ServerOnAttemptInteract, return false;);
    
};

