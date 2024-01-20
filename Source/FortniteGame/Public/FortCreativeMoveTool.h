#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AsyncTaskResult.h"
#include "CreativeOptionVariableBase.h"
#include "CreativePooledMID.h"
#include "CreativeSelectedActorInfo.h"
#include "EFortQuickBars.h"
#include "EScaleAxis.h"
#include "ESelectionProperty.h"
#include "ETransformationType.h"
#include "FlashCountedActorInfo.h"
#include "FortWeapon.h"
#include "OnAddedSelectedActorDelegate.h"
#include "OnCreativeQuickbarFocusedOnUserPrefabSlotChangedDelegate.h"
#include "OnCreativeQuickbarSlotContentChangedDelegate.h"
#include "OnFinishedSpawningSelectedActorsDelegate.h"
#include "OnMoveToolDropToFloorChangedDelegate.h"
#include "OnMoveToolFocusChangedDelegate.h"
#include "OnMoveToolInteractionStartedDelegate.h"
#include "OnMoveToolInteractionStoppedDelegate.h"
#include "OnMoveToolLineOfSightBlockingChangedDelegate.h"
#include "OnMoveToolPrecisionChangedDelegate.h"
#include "OnMoveToolRotationAxisChangedDelegate.h"
#include "OnMoveToolScaleAxisChangedDelegate.h"
#include "OnMoveToolScaleInsteadOfRotateChangedDelegate.h"
#include "OnMoveToolTransformationModeChangedDelegate.h"
#include "OnRemovedSelectedActorDelegate.h"
#include "OnSelectedActorsClearedDelegate.h"
#include "OnSelectionPropertyChangedDelegate.h"
#include "OriginalAndSpawnedPair.h"
#include "FortCreativeMoveTool.generated.h"

class AActor;
class UDeleteObjects;
class UFortCreativeOption;
class UFortCreativeUserPrefabItemDefinition;
class ULevelSaveRecord;
class UMeshComponent;
class UObjectInteractionBehavior;

UCLASS(Blueprintable, MinimalAPI)
class AFortCreativeMoveTool : public AFortWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOriginalAndSpawnedPair> SpawnHelperNewlyPlacedActors;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedSpawningSelectedActors OnFinishedSpawningSelectedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObjectInteractionBehavior* ActiveMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsPreviewingMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UObjectInteractionBehavior*> InteractionBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UDeleteObjects* DeleteObjectsInteractionBehavior;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolInteractionStarted OnMoveToolInteractionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolInteractionStopped OnMoveToolInteractionStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolRotationAxisChanged OnMoveToolRotationAxisChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolScaleAxisChanged OnMoveToolScaleAxisChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolLineOfSightBlockingChanged OnMoveToolLineOfSightBlockingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolDropToFloorChanged OnMoveToolDropToFloorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolPrecisionChanged OnMoveToolPrecisionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolTransformationModeChanged OnMoveToolTransformationModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolScaleInsteadOfRotateChanged OnMoveToolScaleInsteadOfRotateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddedSelectedActor OnAddedSelectedActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddedSelectedActor OnCouldNotAddReachedSelectionLimit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemovedSelectedActor OnRemovedSelectedActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectedActorsCleared OnSelectedActorsCleared;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectionPropertyChanged OnSelectionPropertyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeQuickbarFocusedOnUserPrefabSlotChanged OnCreativeQuickbarFocusedOnUserPrefabSlotChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeQuickbarSlotContentChanged OnCreativeQuickbarSlotContentChanged;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolFocusChanged OnMoveToolFocusChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransformationType CurrentTransformationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreativeSelectedActorInfo> SelectedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector ScaleModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SelectionToWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox SelectionSpaceActorsBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScaleUpPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMultiselectEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsQuickbarEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsQuickbarSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectionProperty, meta=(AllowPrivateAccess=true))
    ESelectionProperty SelectionProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScaleDownPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPushPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPullPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoTractorBeamRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRotateClockwisePressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRotateCounterclockwisePressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScalingInsteadOfRotating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat TargetRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat RotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> RotationAxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RotationAxisIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScaleAxis SelectedScaleAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UMeshComponent*> HoveredComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UMeshComponent*, float> ComponentsToReclaimMIDsFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreativePooledMID> AllMIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxUnhoverAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NewlyPlacedActors, meta=(AllowPrivateAccess=true))
    TArray<FOriginalAndSpawnedPair> NewlyPlacedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CutActors, meta=(AllowPrivateAccess=true))
    FFlashCountedActorInfo CutActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AActor*> AlreadyProcessedNewlyPlacedActorsOnClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDestroyPropsWhenPlacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AllowGravityOnPlace, meta=(AllowPrivateAccess=true))
    bool bAllowGravityOnPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreativeOptionVariableBase WantsGravityOnPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUsePrecisionGridSnapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 GridSnapIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreativeOptionVariableBase WantsPrecisionGridSnapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> GridSnapRatios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bClientNeedsToProcessNewlyPlacedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreativeOptionVariableBase WantedHitTraceRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MoveToolActivatedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortCreativeUserPrefabItemDefinition*> QuickbarSlotItemDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSaveRecord* CurrentLoadingSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSaveRecord* CurrentQuickbarRequestSaveRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFocusedOnUserPrefabSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFocusedOnUserPrefabSlotEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> ClientQuickbarSlotHasContent;
    
public:
    AFortCreativeMoveTool();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UnholsterWeapon();
    
    UFUNCTION(BlueprintCallable)
    void TurboBuildAttemptToPlace();
    
    UFUNCTION(BlueprintCallable)
    void SetupMIDForComponent(UMeshComponent* MeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetingState(bool bNewTargetingState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateTractorBeam(float NewTargetTractorBeamOffset, bool bNewIsPushPressed, bool bNewIsPullPressed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateScalePressed(bool bNewIsScaleUpPressed, bool bNewIsScaleDownPressed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateScaleAxis(EScaleAxis SelectedAxis);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateRotationAxis(uint8 AxisIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateRotation(FQuat ClientRotation, bool bNewIsRotateClockwisePressed, bool bNewIsRotateCounterclockwisePressed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdatePrecisionMode(bool bPrecisionMode, uint8 PrecisionModeIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateMirrored(bool bMirrored);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartInteracting(const TArray<AActor*>& Actors, const FTransform DragStart);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnSelectedActorsWithTransform(const bool bAllowOverlap, const bool bAllowGravity, const bool bIgnoreStructuralIssues, const bool bForPreviewing);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnActorWithTransform(AActor* ActorToSpawn, FTransform TargetTransform, const bool bAllowOverlap, const bool bAllowGravity, const bool bIgnoreStructuralIssues, const bool bForPreviewing);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAllowGravity(bool bAllow);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerResetScale();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlaceActorsAndClearMovementMode(FTransform TargetTransformForBuildings);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnNewlyPlacedActorProcessedByClient(FOriginalAndSpawnedPair NewlyPlacedActorPair);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMoveSelectionSet(const FTransform NewSelectionToWorld, const bool bShouldUpdateOwningClient);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDuplicateStartInteracting(const TArray<AActor*>& Actors, const FTransform DragStart);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDestroyActor(AActor* ActorToDestroy);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClearQuickBarSlot(const int32 DesiredSlotIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClearMovementMode(const bool bExited);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddToQuickBar(const TArray<AActor*>& Actors, const int32 DesiredSlotIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RemoteClientsUpdateSelectedActors(const TArray<FCreativeSelectedActorInfo>& NewSelectedActors, UObjectInteractionBehavior* CurrentObjectInteractionBehvaior);
    
    UFUNCTION(BlueprintCallable)
    void OnWantsPrecisionGridSnapping(UFortCreativeOption* CreativeOption, uint8 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnWantsGravityOnPlace(UFortCreativeOption* CreativeOption, uint8 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnWantedHitTraceRule(UFortCreativeOption* CreativeOption, uint8 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnValidPlacementChangedActorInstance(AActor* ActorForPlacement, bool ValidPlacement);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnValidPlacementChanged(bool bValidPlacement);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectionProperty();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NewlyPlacedActors();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CutActors();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AllowGravityOnPlace();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemoveHighlightSelectedActor(AActor* SelectedActor, const TArray<UMeshComponent*>& SelectedComponents);
    
    UFUNCTION(BlueprintCallable)
    void OnQuickbarFocusChanged(EFortQuickBars QuickBar, int32 SlotIdx);
    
    UFUNCTION(BlueprintCallable)
    void OnQuickbarEnabledChanged(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectPlacement(const TArray<UMeshComponent*>& Components, FOriginalAndSpawnedPair NewlyPlacedActorPair);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractionStarted(const TArray<UMeshComponent*>& Components);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractionFinished(const TArray<UMeshComponent*>& Components);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoverChanged(const TArray<UMeshComponent*>& NewHoveredComponents, const TArray<UMeshComponent*>& UnhoveredComponents, UObjectInteractionBehavior* ObjectInteraction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHighlightSelectedActor(AActor* SelectedActor, const TArray<UMeshComponent*>& SelectedComponents);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFinishedSpawningCurrentSave(const FAsyncTaskResult& Result);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllowGravityToggleChanged(bool bAllowGravity);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastUpdateSelectionSetExceptServerAndOwningClient(const FTransform NewTransformToWorld);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastUpdateSelectionSetExceptServer(const FTransform NewTransformToWorld);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetCollisionForActor(AActor* Actor, bool bEnableCollision);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRestoreCutActors();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastForceMoveActorExceptOwningClient(AActor* ActorToMove, const FTransform NewTransform);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastForceMoveActor(AActor* ActorToMove, const FTransform NewTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningOnOwningClient();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMultiselectingMoveOnGrid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMultiSelecting();
    
public:
    UFUNCTION(BlueprintCallable)
    void IncrementOrWrapHitTraceRuleOnClient();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleTransformModeUpPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleTransformModeDownPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleScaleUpReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleScaleUpPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleScaleSwitchAxisReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleScaleSwitchAxisPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleScaleDownReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleScaleDownPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRotateSwitchAxisReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRotateSwitchAxisPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRotateSingleCounterclockwiseReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRotateSingleCounterclockwisePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRotateSingleClockwiseReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRotateSingleClockwisePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRotateCounterclockwiseReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRotateCounterclockwisePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRotateClockwiseReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRotateClockwisePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleResetScaleHeldDownLongEnough();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleResetRotationHeldDownLongEnough();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleQuickbarSelectPreviousPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleQuickbarSelectNextPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePushReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePushPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePullReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePullPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePrecisionModeReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePrecisionModePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePickupPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMirrorPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleHitTraceRuleReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleHitTraceRulePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleHitTraceRuleHeldDownLongEnough();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleExitReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleExitPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleExitOrDeletePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleExitHeldDownLongEnough();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleDuplicateActorReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleDuplicateActorPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleDropToFloorPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleDeleteReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleDeletePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleCreativeQuickbarPressed(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleCopyPickupReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleCopyPickupPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleClearMultiSelectQueuePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleClearFocusedQuickbarSlotPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleAddToQuickBarPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleActorSelectedForQueueReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleActorSelectedForQueuePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleActivateTranslateModePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleActivateScaleModePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleActivateRotationModePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetValidQueuedActorsAsArray(TArray<AActor*>& ValidQueuedActors);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMultiselectLimit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAverageScaleModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllowGravityOnPlace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesCreativeQuickbarSlotHaveContent(int32 SlotIndex) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeactiveWeaponAndState();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopInteracting();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartInteracting(UObjectInteractionBehavior* NewActiveMovementMode, const TArray<FCreativeSelectedActorInfo>& NewSelectedActors, const FTransform& NewSelectionToWorld, const FBox& NewSelectionSpaceActorBounds);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDeactiveWeaponAndState();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientClearQuickBarSlotComplete(const int32 SlotCleared);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddToQuickBarComplete(const int32 SlotPutIn);
    
    UFUNCTION(BlueprintCallable)
    void AdjustOptionsBasedOnSelectionProperty(ESelectionProperty UpdatedSelectionProperty);
    
};

