#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EFortSpectatorBlendType.h"
#include "EPlayEventType.h"
#include "ESpectateBlendEasing.h"
#include "ESpectatorCameraType.h"
#include "ESpectatorSquadIdMode.h"
#include "FortPlayerControllerGameplay.h"
#include "NoParamDelegateDelegate.h"
#include "NotificationUISettings.h"
#include "OnCameraTypeChangedDelegate.h"
#include "OnFollowedPlayerChangedDelegate.h"
#include "OnPlayerBecameIrrelevantDelegate.h"
#include "OnPlayerBecameRelevantDelegate.h"
#include "OnPlayerDiedDelegate.h"
#include "OnShowNotificationDelegate.h"
#include "OnShowNotificationsEnabledChangedDelegate.h"
#include "PlayerStateAthenaDelegateDelegate.h"
#include "QuickBarData.h"
#include "RemoteViewRotSnapshotManager.h"
#include "SavedPlayerSpectatorCameraData.h"
#include "SavedSpectatorCameras.h"
#include "SpectatorDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortPlayerControllerSpectating.generated.h"

class AActor;
class ABattleMapPawnReplay;
class AFortBroadcastRemoteClientInfo;
class AFortPlayerState;
class AFortPlayerStateAthena;
class AFortRelevancyZoneIndicator;
class AFortReplaySpectatorPawnBase;
class AFortSpectatorThirdPersonPawn;
class AHoverDronePawn;
class APlayerState;
class AVolume;
class UAthenaMarkerComponent;
class UAthenaPlayerMatchReport;
class UFortMiniMapTeamIndicators;
class UFortReplayContext;
class UFortSpectatorCameraComponent;
class UInputComponent;
class UMaterialInterface;
class UWorld;

UCLASS(Blueprintable, MinimalAPI)
class AFortPlayerControllerSpectating : public AFortPlayerControllerGameplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpectatorCameraType CurrentCameraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESpectatorCameraType> CameraModeCycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MinimapPlayerIconColorBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MinimapPlayerIconColorHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomThresholdForPlayerNames;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickBarData QuickBarDefinitions[3];
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFollowedPlayerChanged OnFollowedPlayerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraTypeChanged OnCameraTypeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerBecameRelevant OnPlayerBecameRelevant;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerBecameIrrelevant OnPlayerBecameIrrelevant;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStateAthenaDelegate OnPlayerStateAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStateAthenaDelegate OnPlayerStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDied OnPlayerDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpectatorDelegate OnTimelineScrubbed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpectatorDelegate OnZoomChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowNotification OnShowNotification;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowNotificationsEnabledChanged OnShowNotificationsEnabledChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate OnFollowedPlayerChangedTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SpectatorPostProcessMaterial;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortReplaySpectatorPawnBase> SpectatorPawnBaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortSpectatorThirdPersonPawn> ThirdPersonPawnBaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHoverDronePawn> HoverDronePawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattleMapPawnReplay> BattleMapPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHoverDronePawn> ARDronePawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMiniMapTeamIndicators> MinimapIndicatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSavedPlayerSpectatorCameraData> SavedCameraStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APlayerState*, bool> PlayerRelevancyTrackingMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, AFortPlayerStateAthena*> AddedPlayersMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, UAthenaPlayerMatchReport*> PlayerMatchReports;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ChaseCamOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerState* LastDamagerOfViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* HoveredActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* FullScreenMapInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedSpectatorCameras HotkeyCameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastKnownViewTarget;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemoteViewRotSnapshotManager RemoteViewRotSnapshotManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* CameraBoundsVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClampDroneToCameraBoundsVolume;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortRelevancyZoneIndicator> RelevancyZoneIndicatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortRelevancyZoneIndicator* RelevancyZoneIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortReplayContext* ReplayContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMarkerComponent* MarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> SquadMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FollowedPlayerRemoteClientInfo, meta=(AllowPrivateAccess=true))
    AFortBroadcastRemoteClientInfo* FollowedPlayerRemoteClientInfo;
    
public:
    AFortPlayerControllerSpectating();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ZoomIn(const float Val);
    
    UFUNCTION()
    void UpdateReplayEvents(EPlayEventType Type);
    
    UFUNCTION(BlueprintCallable)
    void ToggleSpectatorHUD();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpectatorSpecialAction();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpectatorClearSavedCameraShots();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetShowVehiclesOnMap(bool bInShowVehiclesOnMap);
    
    UFUNCTION(BlueprintCallable)
    void SetShowPlayersOnMap(bool bInShowPlayersOnMap);
    
    UFUNCTION(BlueprintCallable)
    void SetShowBusPathsOnMap(bool bInShowBusPathsOnMap);
    
    UFUNCTION(BlueprintCallable)
    void SetNotificationsEnabled(bool bNewState);
    
    UFUNCTION(BlueprintCallable)
    void SetNewCameraType(ESpectatorCameraType NewCameraType, bool bReset);
    
    UFUNCTION(BlueprintCallable)
    void SetMapWeaponTracersEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowedPlayer(AFortPlayerState* NewPlayerToFollow);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendType(EFortSpectatorBlendType NewBlendType);
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraBoundsVolume();
    
    UFUNCTION(BlueprintCallable)
    void ResetCamera();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllCameras();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayerBecameRelevant(AFortPlayerState* FPS);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FollowedPlayerRemoteClientInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnNextCameraMode();
    
public:
    UFUNCTION(BlueprintCallable)
    bool JumpToHoveredActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidToFollow(AFortPlayerState* FPS) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInRelevancy(const AFortPlayerState* FPS) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFollowedPlayerInBus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Exec)
    bool IsCameraBlending() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsAllowedChangeCamera();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBroadcasterToken() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleTimelineScrubbed(UWorld* InWorld);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSquadIdModeChanged(ESpectatorSquadIdMode SquadIdMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void HandleNewNotificationRequest(const FText& NotificationText, const FNotificationUISettings& NotificationSettings) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowVehiclesOnMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowPlayersOnMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowBusPathsOnMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAthenaMarkerComponent* GetMarkerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMapWeaponTracersEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerState* GetFollowedPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortSpectatorCameraComponent* GetCurrentSpectatorCameraComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortSpectatorBlendType GetBlendType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FUniqueNetIdRepl, AFortPlayerStateAthena*> GetAddedPlayersMap() const;
    
    UFUNCTION(BlueprintCallable)
    void FullscreenMapZoom(float Value);
    
    UFUNCTION(BlueprintCallable)
    void FullScreenMapCursorStopDrag();
    
    UFUNCTION(BlueprintCallable)
    void FullScreenMapCursorStartDrag();
    
    UFUNCTION(BlueprintCallable)
    void FullScreenMapCursorMoved(const FVector2D& CursorWidgetLocation, const FVector2D& CursorDelta);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FollowPrevTeamMember();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FollowPrevSquadMember();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FollowPrevPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FollowPlayerByName(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FollowNextTeamMember();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FollowNextSquadMember();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FollowNextPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FollowLastDamagerOfViewTarget();
    
    UFUNCTION(BlueprintCallable)
    bool FollowHoveredPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerState* FindPlayerStateByUID(const FUniqueNetIdRepl& UID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRespawnAfterDeath() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void BlendCameraPlacement(const FTransform InTransform, const FTransform InTargetTransform, const float BlendDuration, const ESpectateBlendEasing InEasing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreNotificationsEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void AdjustNormalizedDistanceToPlayer(const float Val);
    
};

