#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "Engine/NetSerialization.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ProfileUpdateSingle.h"
#include "PlayspacePlayerController.h"
#include "AIDirectorDebugInfo.h"
#include "AttributeModifierInfo.h"
#include "BuildingWeakSpotData.h"
#include "ChoiceData.h"
#include "CosmeticLoadoutOwner.h"
#include "CreateBuildingActorData.h"
#include "DelayedQuickBarActionContainer.h"
#include "EAthenaCustomizationCategory.h"
#include "EBuildingHighlightType.h"
#include "EFortBuildPreviewMarkerOptionalAdjustment.h"
#include "EFortCollectedVariantClientUpdate.h"
#include "EFortCostInfoTypes.h"
#include "EFortDamageZone.h"
#include "EFortGameplayState.h"
#include "EFortItemEntryState.h"
#include "EFortItemTier.h"
#include "EFortItemType.h"
#include "EFortJumpStaminaCost.h"
#include "EFortObjectiveStatus.h"
#include "EFortPCTutorialCompletedState.h"
#include "EFortPawnStasisMode.h"
#include "EFortQuickBars.h"
#include "EFortRequestedGameplayAction.h"
#include "EFortResourceLevel.h"
#include "EFortResourceType.h"
#include "ELockOnState.h"
#include "ERichPresenceStateChange.h"
#include "EStatCategory.h"
#include "EStatMod.h"
#include "EStatRecordingPeriod.h"
#include "ESubGame.h"
#include "EVolumeState.h"
#include "FortAnalyticsControllerInterface.h"
#include "FortAthenaLoadout.h"
#include "FortDamageNumberInfo.h"
#include "FortInventoryOwnerInterface.h"
#include "FortItemEntry.h"
#include "FortItemEntryStateValue.h"
#include "FortMcpCollectedItemProperties.h"
#include "FortPersistentGameplayStatContainer.h"
#include "FortPickupTossOverrideData.h"
#include "FortRequirementsInfo.h"
#include "FortRewardReport.h"
#include "FortTeamActorInterface.h"
#include "FortUpdatedObjectiveStat.h"
#include "LastBuildableState.h"
#include "LockOnInfo.h"
#include "McpVariantChannelInfo.h"
#include "OnAutoRunEnabledDelegate.h"
#include "OnBuildPreviewMarkerVisibilityChangedDelegate.h"
#include "OnChosenSignatureDelegate.h"
#include "OnEnterVehicleDriverDelegate.h"
#include "OnEnterVehiclePassengerDelegate.h"
#include "OnExitVehicleDelegate.h"
#include "OnMcpProfilesInitializedDelegate.h"
#include "OnNotifyInputFilteredDelegate.h"
#include "OnOpenVoteDialogDelegate.h"
#include "OnPlayerEnteredBuildModeDelegate.h"
#include "OnPlayerPawnPossessedDelegate.h"
#include "OnQuestObjectiveStateChangedDelegate.h"
#include "OnReadyCheckCompleteBPDelegate.h"
#include "OnRegainedFocusDelegate.h"
#include "OnSetFirstPersonCameraDelegate.h"
#include "OnShowFPSChangeDelegate.h"
#include "OnShowTemperatureChangeDelegate.h"
#include "OnTetherChangedDelegate.h"
#include "OnToggleFullscreenMapDelegate.h"
#include "OnWeakSpotResetDelegate.h"
#include "QueuedItemsToDropViaPickup.h"
#include "RecentlyRemovedQuickbarInfo.h"
#include "Templates/SubclassOf.h"
#include "FortPlayerController.generated.h"

class AActor;
class ABattleMapPawnLive;
class ABuildingActor;
class ABuildingPlayerPrimitivePreview;
class ABuildingSMActor;
class ABuildingTrapDefender;
class ABuildingWeakSpot;
class AFortAIDirectorDataManager;
class AFortAIPawn;
class AFortDamageNumbersActor;
class AFortDecoHelper;
class AFortInventory;
class AFortMarkActor;
class AFortMusicManager;
class AFortObjectiveBase;
class AFortPawn;
class AFortPlayerController;
class AFortPlayerPawn;
class AFortQuickBars;
class AFortSprayDecalInstance;
class AFortVolume;
class UAthenaCharacterItemDefinition;
class UAthenaCosmeticItemDefinition;
class UAudioComponent;
class UForceFeedbackEffect;
class UFortAbilitySystemComponent;
class UFortAccountItem;
class UFortAccountItemDefinition;
class UFortAwardManager;
class UFortCinematicCamera;
class UFortClientBotManager;
class UFortClientPilot_Base;
class UFortCollectionBookManager;
class UFortControllerComponent_Aircraft;
class UFortControllerComponent_Collections;
class UFortControllerComponent_Interaction;
class UFortControllerComponent_InventoryNetworkManagement;
class UFortControllerComponent_Telemetry;
class UFortCustomizationAssetLoader;
class UFortDefenderItem;
class UFortGameplayAbility;
class UFortGameplayMessageComponentBase;
class UFortIndicatorManager;
class UFortItem;
class UFortItemDefinition;
class UFortMcpProfileAthena;
class UFortMcpProfileCampaign;
class UFortMcpProfileCollections;
class UFortMcpProfileCommonCore;
class UFortMcpProfileCommonPublic;
class UFortMcpProfileCreative;
class UFortMcpProfileMetadata;
class UFortMinigameItemContainerComponent;
class UFortMinigameManager;
class UFortMontageItemDefinitionBase;
class UFortQuestManager;
class UFortRegisteredPlayerInfo;
class UFortStatEventManager;
class UHeartbeatManager;
class UInputComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UMcpProfileGroup;
class UMediaPlayer;
class UMediaSource;
class UQuickHealItemPicker;
class USceneComponent;
class USoundBase;
class USoundEffectSourcePresetChain;
class USoundMix;
class UStatManager;
class UUserWidget;

UCLASS(Blueprintable, MinimalAPI)
class AFortPlayerController : public APlayspacePlayerController, public IFortTeamActorInterface, public IFortInventoryOwnerInterface, public IFortAnalyticsControllerInterface, public ICosmeticLoadoutOwner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerPawnPossessed OnPlayerPawnPossessed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotifyInputFiltered OnInputFiltered;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPcbBenefits;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInPossession;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* AircraftInputComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* SkydiveMusicAudioComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bFailedToRespawn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDisconnecting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsBeingKicked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bHasInitiallySpawned: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAssignedStartSpawn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReadyToStartMatch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bClientPawnIsLoaded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SpawnLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPreviousSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanSpectateBot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReadyCheckCompleteBP OnBlueprintReadyCheckCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* SimpleLoadingScreenSoundMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString RegisteredPartnerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag RegisteredPartnerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortAIPawn*> ManagedAIs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* MyFortPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* MyFortPawnBeforeTakeoverOfScriptedPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* ScriptedPawnControllerBeforeTakeover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasClientFinishedLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bHasServerFinishedLoading, meta=(AllowPrivateAccess=true))
    bool bHasServerFinishedLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeStartedWaiting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeFinishedNavigationBuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialParameterCollection;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLoadingScreenDropped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PendingSpectatorLocation;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ActorUnderReticle;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> AutoFireReticleTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle AutofireTimerHandle;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ABuildingWeakSpot> WeakspotUnderReticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBuildingWeakSpotData> ActiveWeakSpots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastActiveTime;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRevertPlayerListenerChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* VehicleInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldingPrimaryFireFromTouch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportNextPieceAssist;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoBuildForTrapPlacement;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoBuildForFloorTrapPlacement;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoBuildForWallTrapPlacement;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoBuildForCeilingTrapPlacement;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoControllerLighting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReturnToMainMenuTimeoutDelay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestObjectiveStateChanged OnQuestObjectiveStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* LastDamager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* LastFallInstigator;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastDamagerCreditThresholdDropElim;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastDamagerCreditThresholdSelfElim;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastDamagerCreditThresholdStormElim;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGiveLastDamagerElimCreditOnDrop;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGiveLastDamagerElimCreditOnSelfDamage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGiveLastDamagerElimCreditOnStormDamage;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMcpProfilesInitialized OnMcpProfilesInitializedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterVehicleDriver OnEnterVehicleDriver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterVehiclePassenger OnEnterVehiclePassenger;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExitVehicle OnExitVehicle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExitVehicle OnFullyExitVehicle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTetherChanged OnTetherChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HoldingObject, meta=(AllowPrivateAccess=true))
    uint8 bHoldingObject: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* DBNOCarryInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* HeldObjectsInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWantsToSprint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHoldingSprint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSprintToggleable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSprintByDefault: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSprintCancelsReload: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSprintWasCancelledByReload: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bAutoRunOn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bUseHoldToSwapPickup: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bTargetingToggleable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bTargetingToggleableWithTouch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bMovementDisabledDueToCancellableAction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsPlayerActivelyMoving: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPlaceHeldObjectPressed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 InMovementCancellableAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowHoldForAmmoCrafting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsClientTimingOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientTimeoutBlockInputTime;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 LastMoveInputFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastPressGamepadSprintTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAutoRunWasHoldingForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAtNameBaseScreen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetFirstPersonCamera OnSetFirstPersonCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCinematicCamera> CinematicCameraClassOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOnPressExecuteJetpack;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowHitMarkersForFriendlyFire;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bServerSideHitMarkers;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChosenSignature OnUiChoiceCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRegainedFocus OnRegainedFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOpenVoteDialog OnOpenVoteDialog;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGamepadAbilityPending;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAllowCursorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAllowCameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressEventNotifications;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastSpotTime;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFortMarkActor>> CurrentMarks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UAudioComponent*> LoopingUIFeedbackComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGameplayAbility* PreviewAbility;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IntensityGraphInfo, meta=(AllowPrivateAccess=true))
    FAIDirectorDebugInfo IntensityGraphInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PIDValuesGraphInfo, meta=(AllowPrivateAccess=true))
    FAIDirectorDebugInfo PIDValuesGraphInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PIDContributionsGraphInfo, meta=(AllowPrivateAccess=true))
    FAIDirectorDebugInfo PIDContributionsGraphInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAIDirectorDataManager* AIDirectorDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortMusicManager* MusicManager;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuildPreviewMarkerVisibilityChanged OnBuildPreviewMarkerVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeakSpotReset OnWeakSpotReset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePredictedBuildingActors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterPredictedBuildingActorsWithGrid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PredictedActorLifespan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABuildingSMActor*> PredictedBuildingSMActors;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* BuildPreviewModeInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingPlayerPrimitivePreview* BuildPreviewMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingPlayerPrimitivePreview* BuildPreviewMarkerExtraPiece;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowBuildingPreviewAutoRotation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireTraceToExistingBuildingToSetContext;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowTraceToExistingBuildingToSetContextToRedirectToBlockingBuilding;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireTraceToExistingBuildingToSetContextExcludeCurrentContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingActor* TargetedBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetedVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingSMActor> ContextualConversionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> StartUpgradeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABuildingActor*> HighlightedPrimaryBuildings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABuildingActor*> HighlightedInteractionBuildings;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ABuildingActor> HighlightedPrimaryBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> BuildPreviewMarkerParentMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> BuildPreviewMarkerMIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 BuildPreviewRotationIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bBuildPreviewMirrored: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortBuildPreviewMarkerOptionalAdjustment BuildPreviewMarkerOptionalAdjustment;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bBuildFree: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCraftFree: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortCostInfoTypes::Type> CurrentCostInfoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingSMActor> CurrentBuildableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingSMActor> PreviousBuildableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortResourceLevel CurrentResourceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortResourceType CurrentResourceType;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLastBuildableState LastBuildableStateData[12];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortDamageNumberInfo> QueuedDamageNumbers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortDamageNumbersActor* DamageNumbersActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* EditModeInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* EditBuildingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EditModeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastBuildPreviewGridSnapLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator LastBuildPreviewGridSnapRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastBuildPreviewGridSnapCentroid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* PickerInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortDecoHelper* TrapPickerDecoHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitResult> TouchEditResults;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBuildingPlacementTraceSkipInitialPenetrationOfBuildingSMActor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBuildingPlacementTraceSkipInitialPenetrationOfStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortQuickBars* ClientQuickBars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRecentlyRemovedQuickbarInfo> RecentlyRemovedQuickbarInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DelayedQuickBarActions, meta=(AllowPrivateAccess=true))
    FDelayedQuickBarActionContainer DelayedQuickBarActions;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<uint32> ClientProcessedQuickBarActions;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldForceDeleteDroppedItems;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQueuedItemsToDropViaPickup QueuedItemsToDrop;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bAutoEquipBetterItems: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=HandleWorldInventoryLocalUpdate, meta=(AllowPrivateAccess=true))
    AFortInventory* WorldInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=HandleOutpostInventoryLocalUpdate, meta=(AllowPrivateAccess=true))
    AFortInventory* OutpostInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=HandleViewTargetInventoryLocalUpdate, meta=(AllowPrivateAccess=true))
    AFortInventory* ViewTargetInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasInitializedWorldInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasInitializedHeroInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAccountInventoryWasUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceWorldInventoryUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSavingGadgetLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortClientPilot_Base* BotPilot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortClientBotManager* BotManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortClientBotManager> ClientBotManagerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaLoadout CosmeticLoadoutPC;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCustomizationAssetLoader* LocalPawnCustomizationAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDropWeaponsDuringAllMissionStates;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LatestRewardReport, meta=(AllowPrivateAccess=true))
    FFortRewardReport LatestRewardReport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortRegisteredPlayerInfo* MyPlayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdatedObjectiveStats, meta=(AllowPrivateAccess=true))
    TArray<FFortUpdatedObjectiveStat> UpdatedObjectiveStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdatedUnsavedPrimaryMissionProgress, meta=(AllowPrivateAccess=true))
    bool bHasUnsavedPrimaryMissionProgress;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStatManager* StatManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHeartbeatManager* HeartbeatManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortStatEventManager* StatEventManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPersistentGameplayStatContainer CachedPersistentGameplayStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMontageItemDefinitionBase* LastEmotePlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UFortMontageItemDefinitionBase*, int32> EmoteUsageCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> AnalyticsBuildingWallTooLowLocations;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMcpProfileGroup* McpProfileGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMcpProfileCommonPublic* CommonPublicMcpProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMcpProfileCommonCore* CommonCoreMcpProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMcpProfileCampaign* MainMcpProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMcpProfileAthena* AthenaProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMcpProfileMetadata* MetadataProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMcpProfileCreative* CreativeModeProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMcpProfileCollections* CollectionsMcpProfile;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EFortPCTutorialCompletedState TutorialCompletedState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldReceiveCriticalMatchBonus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerEnteredBuildMode OnPlayerChangedBuildMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAutoRunEnabled OnAutoRunEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundEffectSourcePresetChain* VoiceInputSourceEffectPresetChain;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LocationUnderReticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bEnableVoiceChatPTT: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bVoiceChatPTTTransmit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInfiniteAmmo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInfiniteMagazine: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bNoCoolDown: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInfiniteDurability: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bUsePickers: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPickerOpen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPickerEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CheatMovement, meta=(AllowPrivateAccess=true))
    uint8 bCheatGhost: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CheatMovement, meta=(AllowPrivateAccess=true))
    uint8 bCheatFly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bEnableShotLogging: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsNearActiveEncounters: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 OverriddenBackpackSize;
    
    UPROPERTY(Config, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint32 AimHelpMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortJumpStaminaCost::Type> JumpStaminaCost;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName CameraPrototypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideHudEnglishText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoChangeMaterial;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bServerAutoChangeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPeripheralLightingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRudderControlEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RudderDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RudderMaxThrottle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortSprayDecalInstance*> ActiveSprayInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActiveToyInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, int32> ToySummonCounts;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSyncPeripheralLightingWithEmoteMusic;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPushEmoteAudioDataToCosmeticMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastEmoteMusicFFT100hz;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastEmoteMusicFFT2000hz;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmoteMusicBeatThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EmoteMusicEnvelopeBeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bZeroingCameraRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTryPickupSwap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClientSideEditPrediction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientSideEditPredictionTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* PendingEnterEditModeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RandomCharacterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AntiAddictionPlayTimeMultiplier;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportQuickEdit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bQuickEditEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesWidgetForFPSDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowFPS;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowFPSChange OnShowFPSChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTemperature;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowTemperatureChange OnShowTemperatureChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLockOnInfo LockOnInfo;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLockPrimaryInputMethodToMouse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortIndicatorManager* IndicatorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bFinalXPUpdateFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* TestUserWidget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortPawnStasisMode PreviousStasisMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattleMapPawnLive> BattleMapSpectatorClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReleaseBuildingContextOnPlace;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurboPlaceFirstInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurboPlaceInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreativeTurboDelete;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurboDeleteFirstInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurboDeleteInterval;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTurboBuild;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurboBuildFirstInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurboBuildRequestFailedInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurboBuildInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_Telemetry* FortControllerComponent_Telemetry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_InventoryNetworkManagement* InventoryNetworkManagementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_Interaction* InteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_Collections* CollectionsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* PendingExecuteInventoryItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuickHealItemPicker> QuickHealItemPickerClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeshParentIds, meta=(AllowPrivateAccess=true))
    TArray<FString> MeshParentIds;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggleFullscreenMap OnToggleFullscreenMap;
    
    AFortPlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool WantsToSecondaryInteract();
    
    UFUNCTION(BlueprintCallable)
    bool WantsToDBNOCarry();
    
public:
    UFUNCTION(Client, Reliable)
    void UpdateClientCollection(const FString& CollectionType, const FString& Category, const FFortMcpCollectedItemProperties& Properties, EFortCollectedVariantClientUpdate UpdateKind);
    
    UFUNCTION(BlueprintCallable)
    void UnMutePlayer(const FUniqueNetIdRepl& UniqueNetId);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TossSpecificItem(const UFortItemDefinition* DropItemDef, const FFortPickupTossOverrideData& TossOverrideData);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void TogglePersonalVehicle(bool bOn);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleInventory();
    
    UFUNCTION(BlueprintCallable)
    void ToggleFullScreenMap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleClientBot();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleBattleMapSpectator();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestStreamedVideo(const FString& URLInQuotes);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SuppressEventNotifications(bool bSuppress);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Suicide();
    
    UFUNCTION(BlueprintCallable)
    bool StopBattleMapSpectator();
    
    UFUNCTION(BlueprintCallable)
    void StartZeroingCameraRoll();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    bool StartReadyCheck(FText QueryText, FText YesText, FText NoText, float PercentageToPass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* SpawnToyInstance(TSubclassOf<AActor> ToyClass, FTransform SpawnPosition);
    
    UFUNCTION(BlueprintCallable, Exec)
    ABattleMapPawnLive* SpawnBattleMapSpectator();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowInfoIndicator(const AActor* TestActor) const;
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceInputEffectChain(USoundEffectSourcePresetChain* InSourceEffectPresetChain);
    
    UFUNCTION(BlueprintCallable)
    void SetRotatePawnToCamera(bool bNewRotatePawnToCamera);
    
    UFUNCTION(BlueprintCallable)
    void SetPickerEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetLockOnTargetStickCoords(const FVector2D& Coords);
    
    UFUNCTION(BlueprintCallable)
    void SetInputYawScale(float InInputYawScale);
    
    UFUNCTION(BlueprintCallable)
    void SetInputPitchScale(float InInputPitchScale);
    
    UFUNCTION(BlueprintCallable)
    void SetFullscreenMapVisible(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetFirstPersonCamera(bool bNewUseFirstPersonCamera);
    
    UFUNCTION(BlueprintCallable)
    bool SetCompHiddenOtherLocalControllersOnly(USceneComponent* SceneComp, const bool bNewHiddenGame, const bool bPropagateToChildren);
    
    UFUNCTION(BlueprintCallable)
    bool SetCompHiddenControllerOnly(USceneComponent* SceneComp, const bool bNewHiddenGame, const bool bPropagateToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SetClientPawnNewRotation(const FRotator& NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetCinematicOverrideClass(TSubclassOf<UFortCinematicCamera> OverrideCameraClass);
    
    UFUNCTION(BlueprintCallable)
    void SetCinematicModeWithWeapon(bool bInCinematicMode, bool bHidePlayer, bool bHideWeapon, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
    
    UFUNCTION(BlueprintCallable)
    void SetBuildingHighlight(const TArray<ABuildingActor*>& TargetedBuildings, TEnumAsByte<EBuildingHighlightType::Type> HighlightType, bool bValidHighlight);
    
    UFUNCTION(BlueprintCallable)
    void SetAtNameHomeBaseScreen(bool AtScreen);
    
    UFUNCTION(BlueprintCallable)
    bool SetActorHiddenControllerOnly(AActor* TargetActor, const bool bNewHidden);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpgradeBuildingActor(ABuildingActor* BuildingActorToUpgrade, int32 NewUpgradeLevel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateMessageComponents(const TArray<UFortGameplayMessageComponentBase*>& ModifiedComponents, const TArray<FGameplayTagContainer>& NewChannelIds);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateItemListOptions(UFortMinigameItemContainerComponent* ItemContainerComponent, int32 ItemIndex, const TArray<FString>& OptionsKeys, const TArray<FString>& OptionsValues);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateGameplayOptions(const TArray<FString>& UserOptionsKeys, const TArray<FString>& UserOptionsValues);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateGameDescriptionData(AActor* DataTarget, const FText& GameName, const TArray<FText>& GameDescriptionText);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateActorOptions(AActor* OptionsTarget, const TArray<FString>& OptionsKeys, const TArray<FString>& OptionsValues);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUIChoiceCompleted(int32 ChosenItem, int32 MenuIdentifier);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTriggerGenericObjectiveEvent(AFortObjectiveBase* Objective);
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerTouchActiveTime();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTeleportToReticle(FVector TeleportLocation);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTeamChatRoomReady(const FString& ChatRoomId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSuicide();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartPIDValueGraphing();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartPIDContributionsGraphing();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartIntensityGraphing();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpotActor(AActor* NewlySpottedActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnMark(AActor* ActorToAttachTo, FVector AttachOffset, const FText& PreapprovedText);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetShouldUsePilotComponent(bool InValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetShouldUseBotManager(bool InValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetReadyToContinue(bool bReady, EFortGameplayState RequestedState, bool bTryStartTimer);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPartyOwner(const FUniqueNetIdRepl& PartyOwnerUniqueId);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetMarkText(AFortMarkActor* MarkActor, const FString& MarkText);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetInventoryStateValue(FGuid ItemGuid, FFortItemEntryStateValue StateValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetHero(const FString& NewHeroID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetClientHasFinishedLoading(bool bInHasFinishedLoading);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAutoEquipBetterItems(bool bAutoEquip);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAntiAddictionPlayTimeMultiplier(float NewPlayTimeRewardRate);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSendClientProgressUpdate(int32 ClientProgressState, const TArray<uint64>& ClientProgressUpdate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReturnToMainMenu();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestGameplayAction(EFortRequestedGameplayAction RequestedAction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestAttributeSources(FGameplayAttribute Attribute, UFortAbilitySystemComponent* AbilitySystemComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestAIDebug();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerReportClientFPS(float ClientAvgFPS, uint8 ClientAvgFrameScore, uint8 ClientMaxFrameScore);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReplyToReadyCheck(bool bReady);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRepairBuildingActor(ABuildingSMActor* BuildingActorToRepair);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveInventoryStateValue(FGuid ItemGuid, EFortItemEntryState StateValueType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveInventoryItem(FGuid ItemGuid, int32 Count, bool bForceRemoveFromQuickBars, bool bForceRemoval, bool bForcePersistWhenEmpty);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveDefender(ABuildingTrapDefender* DefenderTrap);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReleaseInventoryItemKey(FGuid ItemGuid);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReadyToStartMatch();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerPlayEmoteItem(const UFortMontageItemDefinitionBase* EmoteAsset, float EmoteRandomNumber);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPingMinimap(FVector WorldLocation, FLinearColor PingColor, uint8 RequiredTeam);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnMaterialSelection(EFortResourceType NewResourceType, EFortResourceLevel NewResourceLevel);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyMeshNetPlayer(FName Tag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerModifyStat(FName StatName, int32 Amount, EStatMod ModType, bool bForceStatSave);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLoadingScreenDropped();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerKillAllAIPawnsAroundPlayer();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerKickPlayer(const FUniqueNetIdRepl& PlayerToKick, const FText& Reason);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerItemWillBeDestroyed(FGuid DestroyedItemGuid, int32 Count);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandleMissionEvent_ToggledEditMode(ABuildingSMActor* EditableActor, bool bOpened);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandleMissionEvent_ToggledCursorMode(bool bOpened);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandleMissionEvent_StartLeavingZone();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGiftInventoryItemToOtherPlayer(FGuid ItemGuid, FUniqueNetIdRepl PlayerId, int32 Quantity);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerExecutePresetTeamChat(const FText& ChatText, FUniqueNetIdRepl SenderID);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerExecuteInventoryItem(FGuid ItemGuid);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEndEditingBuildingActor(ABuildingSMActor* BuildingActorToStopEditing);
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerEmote(const FName AssetName);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEditBuildingActor(ABuildingSMActor* BuildingActorToEdit, TSubclassOf<ABuildingSMActor> NewBuildingClass, uint8 RotationIterations, bool bMirrored);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDropCarriedObject();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDropAllItems(const UFortItemDefinition* IgnoreItemDef);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDisassembleInventoryItems(const TArray<FGuid>& ItemGuids, const TArray<int32>& ItemCounts);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDeveloper_GetConsoleVariable(const FString& ConsoleVariable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDeployDefender(ABuildingTrapDefender* DefenderTrap, const FString& SelectedItemInstanceId, const FName DefenderSquadId, const FGuid WeaponToGiveGuid, const int32 AmmoQuantity);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreateBuildingActor(FCreateBuildingActorData CreateBuildingData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCraftSchematic(const FString& ItemId, int32 PostCraftSlot, int32 CraftAmount, EFortItemTier RequestedTier, bool bIsQuickCrafted);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCombineInventoryItems(FGuid TargetItemGuid, FGuid SourceItemGuid);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClientPawnLoaded(bool bIsPawnLoaded);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClearItemList(UFortMinigameItemContainerComponent* ItemContainerComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheatAll(const FString& Msg);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheat(const FString& Msg);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBroadcastUIFeedbackEvent(FName EventName);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBroadcastPlayerChangedBuildMode(bool bIsInBuildMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBeginEditingBuildingActor(ABuildingSMActor* BuildingActorToEdit);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAttemptInventoryDrop(FGuid ItemGuid, int32 Count, bool bTrash);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAnnouncementStoppedOnClient(FGuid AnnouncementID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddPawnMovementInput(AFortPawn* InChar, FVector WorldDirection, float ScaleValue, bool bForce);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAcknowledgeDelayedQuickBarAction(const TArray<uint32>& ProcessedActionIds);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SendStreamingAnalytics(UMediaPlayer* MediaPlayer) const;
    
    UFUNCTION(BlueprintCallable)
    void SendMessage(const FText& Message);
    
    UFUNCTION(BlueprintCallable)
    void ReturnToMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToAthenaItemShop();
    
    UFUNCTION(BlueprintCallable)
    void ResetInputRotationScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ReportVideoStreamingError(UMediaPlayer* MediaPlayer, bool bLocalContentFallback, const FString& LastError) const;
    
    UFUNCTION(BlueprintCallable)
    void RemoveItemFromQuickBars(UFortItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ProcessMcpProfileUpdate(const FProfileUpdateSingle& Update);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintEventInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintDebugInfo();
    
    UFUNCTION(BlueprintCallable)
    void PreparePlayerForDisplay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PostHeroStatSkillPointsEarned(int32 NumSkillPoints);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PostHeroStatMissionCompleted(int32 DifficultyRating);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PostHeroStatCollectionBookProgressMade(int32 LevelReached);
    
    UFUNCTION(BlueprintCallable)
    void PlaySpatialSound(USoundBase* Sound, FVector Location);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayEmoteItem(const UFortMontageItemDefinitionBase* EmoteAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OwnsIslandVolume(AFortVolume* Volume) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OwnsCurrentIslandVolume() const;
    
    UFUNCTION(BlueprintCallable)
    void OpenVoteDialog();
    
    UFUNCTION(BlueprintCallable)
    void OpenInventory(int32 TargetTab);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OpenChoiceUI(FChoiceData ChoiceData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdatedUnsavedPrimaryMissionProgress();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdatedObjectiveStats();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_PIDValuesGraphInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PIDContributionsGraphInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MeshParentIds();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LatestRewardReport();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_IntensityGraphInfo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HoldingObject();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DelayedQuickBarActions();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CheatMovement();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bHasServerFinishedLoading();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMinigameVolumeStateChanged(EVolumeState NewState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalInteraction(AActor* ReceivingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayHitMarker(const FGameplayTagContainer& HitTags, EFortDamageZone Zone);
    
    UFUNCTION(BlueprintCallable, Exec)
    void NotifyMeshNetPlayer(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void MutePlayer(const FUniqueNetIdRepl& UniqueNetId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastClearWeakSpotData(ABuildingSMActor* ParentBuilding);
    
    UFUNCTION(BlueprintCallable)
    void ModifyStat(FName StatName, int32 Amount, EStatMod ModType, bool bForceStatSave);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void MarkCollectionItemSeen(const FString& CollectionType, const FString& Category, const FString& Variant);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void LocalStopForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void LocalPlayForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void LocalOverrideBuildMode(bool bVisible, TSubclassOf<ABuildingSMActor> InBuildingClass, FVector BuildingOverrideDistance, UMaterialInterface* PreviewMaterial, FVector NewScale, FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void LocalOnUiChoiceCompleted(int32 ChosenItem, int32 MenuIdentifier);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LocalOnBlueprintEdit(ABuildingSMActor* EditedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnLeaveVolume(AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnEnterVolume(AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingTouch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingHarvestingTool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingGamepad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingFirstPersonCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void IsUsingCosmeticsOwnedByStWHero(bool& bIsUsingOutfitOwnedByHero, bool& bIsUsingBackblingOwnedByHero) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequirementsMet(const FFortRequirementsInfo& InRequirements, bool bUsePhoenixStats) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingEmote() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPersonalVehicleAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPersonalVehicleActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartyLeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNearActiveEncounters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInRespawnCountdown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInBuildMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAircraft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHiddenControllerOnly(AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullscreenMapVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClientTimingOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClientBot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuildToolOverridden() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoChangeMaterialOn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionInputIgnored() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeZeroingCameraRoll();
    
    UFUNCTION(BlueprintCallable)
    void HideFullScreenMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPermissionToEditWorld(const ABuildingActor* Building, const FVector& Location, const FRotator& Rotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLockOnTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleWorldInventoryLocalUpdate();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleWinnerAnnounced(const FString& WinnerPlayerName);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleViewTargetInventoryLocalUpdate();
    
    UFUNCTION(BlueprintCallable)
    void HandleOutpostInventoryLocalUpdate();
    
    UFUNCTION(BlueprintCallable)
    void HandleNonZeroRollSetOnCamera();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleDifferentHeroLoadoutActivated(const UFortMcpProfileCampaign* Profile);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleBattleMapSpectatorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GivePlayerAmmo(int32 AmmoCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseHoldToSwapPickupSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRemainingForRespawnBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamPerkProgressiveActivationLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABuildingActor* GetTargetedBuilding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatValue(FName StatName, EStatRecordingPeriod Period) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRotatePawnToCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRevertPlayerListenerChangeFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortRegisteredPlayerInfo* GetRegisteredPlayerInfo() const;
    
    UFUNCTION(BlueprintCallable)
    UAthenaCharacterItemDefinition* GetRandomDefaultAthenaCharacterDefinition(UFortMcpProfileAthena* McpAthenaProfile);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortQuestManager* GetQuestManager(ESubGame SubGame) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetPlayerPawnOrVehicleDriver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetPlayerPawn() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumQuickbarSlots(EFortQuickBars QuickBarType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortMinigameManager* GetMinigameManager(ESubGame SubGame) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortMcpProfileCampaign* GetMcpCampaignProfile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELockOnState GetLockOnState() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemNumInStackByGuid(FGuid ItemGuid);
    
    UFUNCTION(BlueprintCallable)
    UFortItem* GetItemInQuickbarSlot(EFortQuickBars QuickBarType, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetItemDefinitionOwnershipState(const UFortItemDefinition* ItemDefinition, bool& bIsOwned) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetGliderDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetGameAccountId() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetFPSForHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetForceAllowCameraMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortCollectionBookManager* GetCollectionBookManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABuildingPlayerPrimitivePreview* GetBuildPreviewMarker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAwardManager* GetAwardManager(ESubGame SubGame) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAtNameHomeBaseScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UFortControllerComponent_Aircraft* GetAircraftComponent() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    AFortAIDirectorDataManager* GetAIDirectorDataManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActorUnderReticle() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetAccountLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAccountItem* GetAccountItem(const FString& ID) const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ForwardActiveVariantChangeRequest(FName ItemTemplateToChange, FGameplayTag VariantChannelToChange, FGameplayTag DesiredActiveVariant, AFortPlayerPawn* PreviewPawn);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void FortClientPlaySoundAtLocation(USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void FortClientPlaySound(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ForceCancelBuildingTool();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FixupInteractionWidgetsOnUnzoom();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindItem(const UFortItem* Item, EFortQuickBars& OutQuickBar, int32& OutSlot) const;
    
    UFUNCTION(BlueprintCallable)
    void ExecuteInventoryItemDefinition(UFortItemDefinition* ItemDefinition, float Delay, bool bForceExecute, bool bActivateSlotAfterSettingFocused);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Emote(const FName AssetName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpHomebaseRatingInfo() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DropSpecificItem(const UFortItemDefinition* DropItemDef);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DropAllItems(const UFortItemDefinition* IgnoreItemDef, const UFortItemDefinition* AdditionalIgnoreItemDef, bool bIgnoreBuildingMaterials, bool bSpawnPickups);
    
    UFUNCTION(BlueprintCallable)
    void DeployDefender(ABuildingTrapDefender* DefenderTrap, const UFortDefenderItem* DefenderItem, const FName DefenderSquadId, const UFortItem* WeaponItem, const int32 AmmoQuantity);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool DBNOTryStartCarry();
    
    UFUNCTION(BlueprintCallable)
    void DBNOCarryThrow();
    
    UFUNCTION(BlueprintCallable)
    void DBNOCarryHoist();
    
    UFUNCTION(BlueprintCallable)
    void DBNOCarryDrop();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CountInventoryOverflowFromAddingItem(const FFortItemEntry& ItemDescription, bool bIsClassItem, bool bFromPickup) const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateServerOnPlayerChangedBuildMode();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateRichPresence(ERichPresenceStateChange RichPresenceChange, bool bImportant);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdatePlayerList();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTriggerUIFeedbackEvent(FName EventName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSwapQuickBarFocus(EFortQuickBars InQuickBar, int32 SlotOverride, bool bForceExecution);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopUIFeedbackEvent(FName EventName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopAutoRun();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSpawnWeakSpotOnBuildingActor(FBuildingWeakSpotData ReplicatedWeakSpotData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClientSideEditPredictionTimedOut();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetSpectatorCamera(FVector CameraLocation, FRotator CameraRotation);
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientSetInviteFlags(const FJoinabilitySettings& Settings);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetActionMappingEnabled(FName ActionName, bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendMessage(const FText& Message, USoundBase* StartSound);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendConfirmationMessage(const FText& ConfirmationMessage, bool bClientQuitAfterMessage);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientRequestReadyCheck(const FText& QueryText, const FText& YesText, const FText& NoText);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientReportGotResourceFromVehicle(AActor* Vehicle, int32 ResourceCount);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientReportDamagedResourceBuilding(ABuildingSMActor* BuildingSMActor, EFortResourceType PotentialResourceType, int32 PotentialResourceCount, bool bDestroyed, bool bJustHitWeakspot);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRegisterWithParty();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRefreshPlayerList();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceivePresetTeamChat(const FText& ChatText, FUniqueNetIdRepl SenderID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceivedAttributeSources(FGameplayAttribute Attribute, UFortAbilitySystemComponent* AbilitySystemComponent, const TArray<FAttributeModifierInfo>& Sources);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientReadyCheckComplete(bool bPassed);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPrecacheMediaSource(UMediaPlayer* InMediaPlayer, UMediaSource* InMediaSource);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPingMinimap(FVector WorldLocation, FLinearColor PingColor);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOpenChoiceUI(FChoiceData ChoiceItems);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnGenericPlayerInitialization();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientLogDebugString(const FString& Msg);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientJoinConsoleSession(const FString& ConsoleSession);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientGivePlayerLocalAccountItem(UFortAccountItemDefinition* ItemDefinition, int32 Count);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientForceWorldInventoryUpdate();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientForceUpdateQuickbar(EFortQuickBars QuickbarToRefresh);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientForceProfileQuery();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientForceCancelBuildingTool();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientFinishedInteractionInZone();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientFailedToBeginEditingBuildingActor(ABuildingSMActor* BuildingActorToStopEditing);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientExecuteInventoryItem(FGuid ItemGuid, float Delay, bool bForceExecute, bool bActivateSlotAfterSettingFocused);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEquipItem(const FGuid& ItemGuid, bool bForceExecution);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEndGameKick();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDeveloper_GetConsoleVariable(const FString& ConsoleVariable, const FString& Value);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCreateOrJoinChatRoom(const FString& ChatRoomId);
    
    UFUNCTION(Client, Reliable)
    void ClientConfirmTargetData(uint16 UniqueId, bool bSuccess, const TArray<uint8>& HitReplaces);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCancelCrafting();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBotSetModuleToUse(const FString& PilotCategory, const FString& NewModule, bool bResetNow);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBotEnqueueCommand(const FString& CommandToEnqueue);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientAddScoreNumber(int32 Score, EStatCategory ScoreCategory, const FVector_NetQuantize& ScoreLocation, bool bDisplayScoreOnPlayer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientActivateSlot(EFortQuickBars InQuickBar, int32 Slot, float ActivateDelay, bool bUpdatePreviousFocusedSlot, bool bForceExecution);
    
    UFUNCTION(BlueprintCallable)
    bool CheckPossessionOfAmountOfItems(EFortItemType Type, int32 AmountToCheck);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatAll(const FString& Msg);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Cheat_StopObjectiveServer(AFortObjectiveBase* Objective, const EFortObjectiveStatus Status);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Cheat_ForcePlayEmoteItem(const UFortMontageItemDefinitionBase* EmoteAsset);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Cheat_ForceCosmeticVariantChannels(const TArray<FMcpVariantChannelInfo>& CosmeticVariantChannels);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Cheat_ForceAthenaCosmeticItemInSlot(const UAthenaCosmeticItemDefinition* CosmeticItem, EAthenaCustomizationCategory Slot, int32 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Cheat_ClearForcedCosmeticVariantChannels();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Cheat_ClearForcedCosmeticItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat(const FString& Msg);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeActiveVariantForCosmeticItem(FName ItemTemplateToChange, FGameplayTag VariantChannelToChange, FGameplayTag DesiredActiveVariant, AFortPlayerPawn* PreviewPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEnableBattleMapSpectator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAlterHostileWalls() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* BP_GetInventoryItemWithGuid(FGuid ItemGuid) const;
    
    UFUNCTION(BlueprintCallable)
    void BP_FindItemInstancesFromDefinition(const UFortItemDefinition* ItemDefinition, UPARAM(Ref) TArray<UFortItem*>& ItemArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* BP_FindExistingItemForDefinition(const UFortItemDefinition* ItemDefinition, bool bInStorageVault) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool AreActionsBoundToSameKey(FName FirstActionName, FName SecondActionName, const TEnumAsByte<EInputEvent> InputEvent);
    
    UFUNCTION(BlueprintCallable)
    void AlternateInteractCarryHoldStopped(FName InputActionName, bool bCompletedSuccessfully);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddItemToQuickBars(UFortItemDefinition* ItemDefinition, EFortQuickBars QuickBarType, int32 SlotIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddInventoryItemWithAnimation(const FFortItemEntry& ItemDescription);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddInventoryItemWithAlterationBasedOnLootLevel(FFortItemEntry ItemDescription);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    uint8 GetTeam() const override PURE_VIRTUAL(GetTeam, return 0;);
    
};

