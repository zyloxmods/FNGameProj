#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EChunkInstallState.h"
#include "EFortAccountLinkingUIConfig.h"
#include "EFortStartupPhase.h"
#include "ESubGame.h"
#include "LoginFailureLogSubmitOptions.h"
#include "LogoutLogSubmitOptions.h"
#include "PartyFailureLogSubmit.h"
#include "PurchaseFailureLogSubmitOptions.h"
#include "SubGameAccess.h"
#include "FortGlobals.generated.h"

class AActor;

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API UFortGlobals : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinTheaterListRefreshDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTheaterListRefreshDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCullObjectSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCullDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCullObjectSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCullDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRespawnHeightForEnvironmentDeath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRespawnInAirHeight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePlayerTriggeredRespawn;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableNewCustomizationPanel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableInfluenceMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAIDespawning;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDBNO;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableIronCity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableForceBuildingActorRecordUpdates;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IronCityWargameTagList;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableIronCityCoast;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHestia;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableIronCityAutoAmplifierPlacement;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWargameDebug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableEnduranceDebug;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMilestoneMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAssetsToPreload;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyPreloadCity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableInWorldScoreNumbers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustUseToggleJetpackExecute;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableNewRewardFlow;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWIFE;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFrontendCrafting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFrontendStorage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLazyASC;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFriendCodes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCreativeMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCreativeModeLimitedAccess;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCreativeModeLimitedAccessForFounders;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyVerificationInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CreativeModeLimitedAccessEndTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCreativeModeTutorials;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CreativeTutorialSkydivingDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CreativeReturnToHubTutorialDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoginFailureLogSubmitOptions LoginFailureOptions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogoutLogSubmitOptions LogoutFailureOptions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPurchaseFailureLogSubmitOptions RealMoneyPurchaseFailureOptions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubmitReturnToMenuErrorLogs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReturnToMenuErrorLogTailKb;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReturnToMenuErrorLogSubmitChance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyFailureLogSubmit PartyJoinFailureLogSubmit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowSkillTreeMovies;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMissionResultsMovies;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePlayerTeleportDuringMissionResults;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableParticleEffectsDuringMissionResults;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlushGPUWhenPlayerIsTeleportedAtEndOfZone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStreamOutTextureDataWhenPlayerIsTeleportedAtEndOfZone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTwitchEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowContainersInCreativeItemLists;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAccountLinkingEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAccountLinkingUIConfig AccountLinkingUIConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccountLinkingUIURL;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAccountLinkingUIURLButton;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowStreamerSafetyCharacterReplication;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnonymousCharacterModeSafetyCharacterReplication;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTournamentSafetyCharacterReplication;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSafetyCharacterReplicationToUseVariantItems;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowItemWrapMaterialSyncLoads;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTwitchHeartbeatEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTwitchAllowDisplayViewernames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTwitchViewerNamesToCache;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TwitchViewerNameExpirationMinutes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTwitchHeartbeatInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TwitchAccountInformationRefreshInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowLogout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowQuit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasWorldMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerJoinServerTimeoutSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerUnregistrationFailsafeTimer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PollForDedicatedServerReadyToShutdownInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUploadAthenaStats;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUploadAthenaStatsV2;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableTimePlayedStat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAthenaStatsFrontendEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAthenaLeaderboardFrontEndEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAthenaSquadQuickChatEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AthenaQuickChatRangeForNonSquadTeamMembers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGlobalLeaderboardsFrontEndEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeBetweenLeaderboardRequestsMinutes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstShotAccuracyDisabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowProjectileRethrow;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAthenaUsesSimCollision;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAthenaSimVehicles;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAthenaSubstepping;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCampaignSubstepping;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCampaignUsesSimCollision;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCampaignSimVehicles;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumCharacterVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> AthenaReferencedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumOutstandingAthenaAsyncRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalAthenaAsyncRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> AthenaAlwaysLoadedContentHack;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowXboxStwToken;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePlatformProfanityFilterForChat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSendSettingsSnapshotOnLogin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldForceAllowBroadcasting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLegacyMediaSource;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 MemoryRequirementForMediaStreamingMB;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxResolutionForMediaStreaming;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubGameAccess> SubGameAccess;
    
public:
    UFortGlobals();
    UFUNCTION(BlueprintCallable)
    static bool UninstallAllOnDemandChunks();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldStreamOutTextureDataWhenPlayerIsTeleportedAtEndOfZone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldShowSkillTreeMovies();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldShowMissionResultsMovies();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldFlushGPUWhenPlayerIsTeleportedAtEndOfZone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldDisablePlayerTeleportDuringMissionResults();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldDisableParticleEffectsDuringMissionResults();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldDelayStartupLoading();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCurrentSubGame(const UObject* WorldContextObject, const ESubGame SubGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWIFEEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWargameDebugEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUsingTouch(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTwitchEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTouchInputPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTencentBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNewRewardFlowEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsMobileGame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsMilestoneModeEnabled(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsIronCityAutoAmplifierPlacementEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInSubGame(const UObject* WorldContextObject, const ESubGame SubGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInAthena(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHestiaEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHeroLoadoutSystemEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFrontendStorageEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFrontendCraftingEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFirstShotAccuracyDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsErebus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnduranceDebugEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDisplayingTwitchViewerNamesAllowed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBROnly();
    
    UFUNCTION(BlueprintCallable)
    static bool IsAllContentInstalled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAccountLinkingUIURLButtonEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAccountLinkingEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool InstallAllOnDemandChunks();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetUseLegacyMediaSource();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFortStartupPhase GetStartupPhase();
    
    UFUNCTION(BlueprintCallable)
    static EChunkInstallState GetOnDemandChunksInstallState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMinTheaterListRefreshDelay();
    
    UFUNCTION(BlueprintPure)
    static int32 GetMemoryRequirementForMediaStreamingMB();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxTheaterListRefreshDelay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetIronCityWargameTagList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIronCityEndlessEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIronCityEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetForceBuildingActorRecordUpdatesEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetDoubleClickTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESubGame GetCurrentSubGame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAccountLinkingUIURL();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFortAccountLinkingUIConfig GetAccountLinkingUIConfig();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreFriendCodesEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AllowContainersInCreativeItemLists();
    
};

