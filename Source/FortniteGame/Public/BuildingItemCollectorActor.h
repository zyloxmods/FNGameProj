#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "BuildingGameplayActor.h"
#include "CollectorTrackedData.h"
#include "CollectorUnitInfo.h"
#include "EFortItemCollectorBehavior.h"
#include "EFortItemCollectorState.h"
#include "EFortItemCollectorTrackingType.h"
#include "EFortRarity.h"
#include "EInteractionBeingAttempted.h"
#include "FortItemEntry.h"
#include "FortItemQuantityPair.h"
#include "ItemCollectorHandleManualOutputDelegate.h"
#include "ItemCollectorPickupSpawnedDelegate.h"
#include "ItemCollectorVehicleSpawnedDelegate.h"
#include "BuildingItemCollectorActor.generated.h"

class AFortPlayerController;
class UFortWorldItemDefinition;
class UTexture;

UCLASS(Blueprintable)
class ABuildingItemCollectorActor : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemCollectorBehavior ItemCollectorBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequireAllForInteraction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequireAllForTurnIn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasToHaveSomething: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIncrementCaptureCountWhenGoalIsReached: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCurrentInteractionSuccess: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemCollectorState, meta=(AllowPrivateAccess=true))
    EFortItemCollectorState ItemCollectorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemCollectorState, meta=(AllowPrivateAccess=true))
    EFortItemCollectorTrackingType TrackingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ControllingPlayer, meta=(AllowPrivateAccess=true))
    AFortPlayerController* ControllingPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName DefaultItemLootTierGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ItemCollectorHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCallOnLocalInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    bool bUseInstanceLootValueOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> OverrideOutputItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 OverrideGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NumInteractionsAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FCollectorUnitInfo> ItemCollections;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemCollectorHandleManualOutput ManualOutputOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveInputItem, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* ActiveInputItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* ClientPausedActiveInputItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ActiveItemRotationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemRotationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemRotationTimeVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowedItemRotationDamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat OutputDespenseDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespensingDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LootSpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LootTossDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LootTossConeHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LootTossSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTossOnGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnAmmoOnlyWhenCarryingWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 StartingGoalLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingGoalLevelOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* InactiveItemTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPickupOwnedByLooter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemCollectorPickupSpawned PickupSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemCollectorVehicleSpawned VehicleSpawned;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TrackedInteractionData, meta=(AllowPrivateAccess=true))
    TArray<FCollectorTrackedData> TrackedInteractionData;
    
public:
    ABuildingItemCollectorActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCollectorsActiveItem(int32 StartingSeedValue, UFortWorldItemDefinition* InputItem, UTexture* InputTexture, int32 CurrentGoal, int32 CurrentCollectedAmount, int32 CurrentCaptureCount, UTexture* OutputTexture);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetLootSpawnWorldTransformOverride(const FTransform& Transform);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetItemCollectorState(EFortItemCollectorState InItemCollectorState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnItem(const FFortItemEntry OutputItem);
    
    UFUNCTION(BlueprintCallable)
    void RefreshCollectorsActiveItem();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TrackedInteractionData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemCollectorState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ControllingPlayer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveInputItem();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReachedDepositGoal(AFortPlayerController* CurrentControllingPlayer, UFortWorldItemDefinition* CurrentActiveInputItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemCollectorStateChanged(EFortItemCollectorState InItemCollectorState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnForcedCycle();
    
    UFUNCTION(BlueprintCallable)
    bool HasEnoughDepositItems(AFortPlayerController* FortPC, UFortWorldItemDefinition* InputItem, bool bAllOrNothing, const EInteractionBeingAttempted InInteractionBeingAttempted);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 GetTeamReachedGoalCount(uint8 InTeam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetOverrideRarity(EFortRarity& Rarity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfCaptures(AFortPlayerController* InFortPC, UFortWorldItemDefinition* InInputItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDepositGoal(AFortPlayerController* InFortPC, UFortWorldItemDefinition* InInputItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDepositAmount(AFortPlayerController* InFortPC, UFortWorldItemDefinition* InInputItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWorldItemDefinition* GetCurrentActiveItem() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearLootSpawnWorldTransformOverride();
    
};

