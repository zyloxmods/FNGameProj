#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AppliedHomebaseData.h"
#include "EFortGameplayState.h"
#include "EndOfDayRecap.h"
#include "FortGameStateBase.h"
#include "OnPoiManagerReplicatedDelegate.h"
#include "OnTimeHitInfo.h"
#include "TeamChangeRequest.h"
#include "Templates/SubclassOf.h"
#include "FortGameState.generated.h"

class ABuildingActorTickManager;
class AFortAIPawn;
class AFortClientAnnouncementManager;
class AFortFXManager;
class AFortFeedbackManager;
class AFortGlobalAbilityTargetingActor;
class AFortLobbyBeaconState;
class AFortMissionManager;
class AFortMusicManager;
class AFortPawn;
class AFortPlayerState;
class AFortPoiManager;
class AFortScriptedActionManager;
class AFortTeamInfo;
class AFortVisibilityManager;
class AFortWindManager;
class AFortWorldManager;
class UFortAmbientAudioController;
class UFortMovementComp_Character;
class UFortMusicManagerBank;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameState : public AFortGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentWUID, meta=(AllowPrivateAccess=true))
    FString CurrentWUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ParTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 WorldLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CraftingBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentReadyToContinueTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TeamCount;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint32 GameFlagData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PoiManager, meta=(AllowPrivateAccess=true))
    AFortPoiManager* PoiManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayersAlwaysVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipWorldSave;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayerSpawningBlocked_Temporarily;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AdditionalPlaylistLevelsStreamed, meta=(AllowPrivateAccess=true))
    TArray<FName> AdditionalPlaylistLevelsStreamed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WorldDaysElapsed, meta=(AllowPrivateAccess=true))
    int32 WorldDaysElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FeedbackManager, meta=(AllowPrivateAccess=true))
    AFortFeedbackManager* FeedbackManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MissionManager, meta=(AllowPrivateAccess=true))
    AFortMissionManager* MissionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AnnouncementManager, meta=(AllowPrivateAccess=true))
    AFortClientAnnouncementManager* AnnouncementManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortScriptedActionManager* ScriptedActionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortLobbyBeaconState* LobbyGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_WorldManager, meta=(AllowPrivateAccess=true))
    AFortWorldManager* WorldManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GameplayState, meta=(AllowPrivateAccess=true))
    EFortGameplayState GameplayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MusicManagerSubclass, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortMusicManager> MusicManagerSubclass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MusicManagerBank, meta=(AllowPrivateAccess=true))
    UFortMusicManagerBank* MusicManagerBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAmbientAudioController> FortAmbientAudioControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GameSessionID, meta=(AllowPrivateAccess=true))
    FString GameSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortMovementComp_Character*> ManagedCharMovementComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortAIPawn*> ManagedAnimPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PawnForReplayRelevancy, meta=(AllowPrivateAccess=true))
    AFortPawn* PawnForReplayRelevancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerState* RecorderPlayerState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortMovementComp_Character*> ManagedCharMovementComponentsCopy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FOnTimeHitInfo> TimeOfDayCallbacks;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortVisibilityManager* VisibilityManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortFXManager* FXManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingActorTickManager* BuildingTickManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortWindManager* WindManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Teams, meta=(AllowPrivateAccess=true))
    TArray<AFortTeamInfo*> Teams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipTeamReplication;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FTeamChangeRequest> PendingTeamChangeRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPendingTeamChangeRequests;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPoiManagerReplicated OnPoiManagerReplicatedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortGlobalAbilityTargetingActor* GlobalAbilityTargetingActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAppliedHomebaseData> AppliedHomebaseDataArray;
    
public:
    AFortGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerSpawningBlocked_Temporarily(bool bBlock);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RunPerfMemCheatScript(bool bStartStatFiles);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WorldManager();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WorldDaysElapsed();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_Teams();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PoiManager();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PawnForReplayRelevancy(AFortPawn* OldPawnForReplayRelevancy);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MusicManagerSubclass();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MusicManagerBank();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionManager();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameSessionID();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameplayState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FeedbackManager();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentWUID();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AnnouncementManager();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_AdditionalPlaylistLevelsStreamed();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedStreamingAdditionalPlaylistLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedShowingAdditionalPlaylistLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWorldDaysElapsed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerSpawningBlocked_Temporarily() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMatchTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortGameplayState GetGameplayState() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void DemoEndOfDayRecap();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void DbgSphereSendToAllInternal_DoNotCall(const FVector& Center, float Radius, int32 Segments, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void DbgLineSendToAllInternal_DoNotCall(const FVector& LineStart, const FVector& LineEnd, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void DbgCapsuleSendToAllInternal_DoNotCall(const FVector& Center, float HalfHeight, float Radius, const FQuat& Rotation, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void DbgBoxSendToAllInternal_DoNotCall(const FVector& Center, const FVector& Extent, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CopyGameSessionIdToClipboard();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_RefreshEventCalendar();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_InitiateEndOfDayRecap(const FEndOfDayRecap& EndOfDayRecap);
    
};

