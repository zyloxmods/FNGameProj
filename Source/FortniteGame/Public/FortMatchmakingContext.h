#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "FortBlueprintContext.h"
#include "FortMatchmakingConfig.h"
#include "OnLobbyConnectingToGameDelegate.h"
#include "OnLobbyConnectionAttemptFailedDelegateDelegate.h"
#include "OnLobbyConnectionStartedDelegateDelegate.h"
#include "OnLobbyDisconnectedDelegate.h"
#include "OnLobbyStartedDelegateDelegate.h"
#include "OnLobbyTimeExpiredDelegateDelegate.h"
#include "OnLobbyTimeUpdatedDelegateDelegate.h"
#include "OnLobbyWaitingForPlayersDelegateDelegate.h"
#include "OnLobbyWaitingForPlayersTimeUpdateDelegateDelegate.h"
#include "OnMatchmakingCompletedDelegateDelegate.h"
#include "OnMatchmakingFlowChangeDelegateDelegate.h"
#include "OnMatchmakingStartedDelegateDelegate.h"
#include "OnMatchmakingStateChangeDelegateDelegate.h"
#include "OnOutpostDiscoveryFailureDelegate.h"
#include "OnReadyUpStatusChangedDelegateDelegate.h"
#include "OnRejoinCheckCompletedDelegateDelegate.h"
#include "OnWorldRecordLoadedChangedDelegateDelegate.h"
#include "FortMatchmakingContext.generated.h"

class AFortLobbyBeaconClient;

UCLASS(Blueprintable, NonTransient, Config=Game)
class FORTNITEGAME_API UFortMatchmakingContext : public UFortBlueprintContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMatchmakingStartedDelegate OnMatchmakingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMatchmakingCompletedDelegate OnMatchmakingComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMatchmakingStateChangeDelegate OnMatchmakingStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMatchmakingFlowChangeDelegate OnMatchmakingFlowChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyConnectionStartedDelegate OnLobbyConnectionAttemptStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyConnectionAttemptFailedDelegate OnLobbyConnectionAttemptFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyConnectionAttemptFailedDelegate OnLobbyConnectionAttemptProceedToLobby;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyWaitingForPlayersDelegate OnLobbyWaitingForPlayers;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyWaitingForPlayersTimeUpdateDelegate OnLobbyWaitingForPlayersTimeUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyStartedDelegate OnLobbyStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyDisconnected OnLobbyDisconnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyConnectingToGame OnLobbyConnectingToGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyTimeUpdatedDelegate OnLobbyTimeUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyTimeExpiredDelegate OnLobbyTimeExpired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReadyUpStatusChangedDelegate OnLocalReadyUpStatusChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWorldRecordLoadedChangedDelegate OnWorldRecordLoadedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRejoinCheckCompletedDelegate OnRejoinCheckCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMatchmakingConfig NormalConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMatchmakingConfig CriticalConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMatchmakingConfig QuickPlayConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMatchmakingConfig OnboardingConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMatchmakingConfig OutpostConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMatchmakingFlowActive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOutpostDiscoveryFailure OnOutpostDiscoveryFailure;
    
public:
    UFortMatchmakingContext();
    UFUNCTION(BlueprintCallable)
    void StartWargameSimulationAssist(float MinMissionDifficulty, float MaxMissionDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void StartStormShieldExpansionAssist(float MinMissionDifficulty, float MaxMissionDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void StartQuickPlay(float MinMissionDifficulty, float MaxMissionDifficulty);
    
    UFUNCTION(BlueprintCallable)
    bool StartOnboardingMission();
    
    UFUNCTION(BlueprintCallable)
    void StartMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void StartCriticalMission(float MinMissionDifficulty, float MaxMissionDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchmakingFlowActive(bool InFlow);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomMatchmakingKey(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void ReadyUp();
    
    UFUNCTION(BlueprintCallable)
    bool NeedToCheckRejoinStatus();
    
    UFUNCTION(BlueprintCallable)
    bool JoinFromLobby();
    
    UFUNCTION(BlueprintCallable)
    bool IsWorldRecordLoaded();
    
    UFUNCTION(BlueprintCallable)
    bool IsWaitingOnUpdateManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutpostPermitted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchmakingLocal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchmakingFlowActive() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsJoinableGameAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputBasedMatchmakingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInLobby() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCustomMatchmakingKeyEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnectedToGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBroadcasterToken() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetMatchmakingFillText(bool bDesiredFill);
    
    UFUNCTION(BlueprintCallable)
    float GetLobbyWaitForPlayersTimeRemaining();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortLobbyBeaconClient* GetLobbyBeaconClient() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetLegacyNonInputBasedPlayAgainstText();
    
    UFUNCTION(BlueprintCallable)
    ECommonInputType GetInputBasedMatchmakingPool(bool& bIsDefaultPool, bool& bEntirePartyUsingTargetPoolInput);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCustomMatchmakingKey() const;
    
    UFUNCTION(BlueprintCallable)
    void EnterOutpost();
    
    UFUNCTION(BlueprintCallable)
    void DisplayAntiTaxiError();
    
    UFUNCTION(BlueprintCallable)
    void DisconnectFromLobby();
    
    UFUNCTION(BlueprintCallable)
    void CheckRejoinStatus();
    
    UFUNCTION(BlueprintCallable)
    void CancelMatchmaking();
    
};

