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
#include "FortMarkableActorInterface.h"
#include "FortPickupLocationData.h"
#include "InteractionType.h"
#include "PickupOnCombinedDelegate.h"
#include "PickupOnDespawnDelegate.h"
#include "PickupOnPickupDelegate.h"
#include "FortPickup.generated.h"

class AFortPawn;
class AFortPickupEffect;
class AFortPlayerController;
class AFortPlayerPawn;
class UAudioComponent;
class UCapsuleComponent;
class UFortItem;
class UFortLinkToActorComponent;
class UFortSimpleMiniMapIndicator;
class UFortSlateHUDIndicator;
class UFortWaterInteractionComponent;
class UProjectileMovementComponent;
class USoundBase;

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class AFortPickup : public AActor, public IFortInteractInterface, public IFortMarkableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePickupWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressInteractionWidget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeaponsCanBeAutoPickups;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoUpgradeWeapons;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoServerHandlePickupTrace;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulatingTooLongLength;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupOnPickup OnPickup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupOnPickup OnPickupAttempted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupOnDespawn OnPickupDespawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupOnDespawn OnPickupDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupOnCombined OnPickupCombined;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PrimaryPickupItemEntry, meta=(AllowPrivateAccess=true))
    FFortItemEntry PrimaryPickupItemEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortItemEntry> MultiItemPickupEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PickupLocationData, meta=(AllowPrivateAccess=true))
    FFortPickupLocationData PickupLocationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortPickupSourceTypeFlag PickupSourceTypeFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortPickupSpawnSource PickupSpawnSource;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_PickupOwnerData, meta=(AllowPrivateAccess=true))
    int16 OptionalOwnerID;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortWaterInteractionComponent* WaterInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortLinkToActorComponent* LinkToActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bPickedUp, meta=(AllowPrivateAccess=true))
    bool bPickedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSplitOnPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TossedFromContainer, meta=(AllowPrivateAccess=true))
    bool bTossedFromContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ForceHideMinimapIndicator, meta=(AllowPrivateAccess=true))
    bool bForceHideMinimapIndicator;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float OverrideInteractAimRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandSoundZForceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultFlyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDefaultFlyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* DroppedLoopingSoundComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* LandedSoundOverride;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bRandomRotation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StormDespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StartSimulatingTime;
    
public:
    AFortPickup();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TossPickup(const FVector FinalLocation, AFortPawn* ItemOwner, int32 OverrideMaxStackCount, bool bToss, bool bShouldCombinePickupsWhenTossCompletes, const EFortPickupSourceTypeFlag InPickupSourceTypeFlags, const EFortPickupSpawnSource InPickupSpawnSource);
    
    UFUNCTION(BlueprintCallable)
    void SetPickedUp(const bool bInPickedUp);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOverrideInteractRadius(float NewRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetCombinePickupsWhenTossCompletes(const bool CombinePickupsWhenTossCompletes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PickedUp() const;
    
    UFUNCTION(BlueprintCallable)
    void OnServerStopCallback(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnServerBounceCallback(const FHitResult& Hit, const FVector& OldVelocity);
    
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
    void OnRep_ForceHideMinimapIndicator();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bPickedUp();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleConnectedActorDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortItemEntry GetPrimaryItemEntry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPawn* GetPawnWhoDroppedPickup() const;
    
    UFUNCTION(BlueprintCallable)
    AFortPlayerController* GetOwnerPlayerController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementCapsuleRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementCapsuleHalfHeight() const;
    
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
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BlueprintSetPickupTarget(AFortPawn* PickupTarget, bool bPlayPickupSound);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BlueprintGetInteractErrorText(FText& OverrideInteractErrorText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BlueprintCanInteract(const AFortPlayerPawn* FortPawn, bool& bCanInteractOverride);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AllowLongRangeAutoPickup(const AFortPlayerPawn* FortPawn);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool ServerOnAttemptInteract(const FInteractionType& InteractType) override PURE_VIRTUAL(ServerOnAttemptInteract, return false;);
    
};

