#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "Chaos/ChaosEngineInterface.h"
#include "ChallengeObjectiveHotfix.h"
#include "ChallengeSuppressedHotfix.h"
#include "ContentInstallError.h"
#include "EContentInstallState.h"
#include "EFortAccountLinkingUIConfig.h"
#include "EFortClientUpdateType.h"
#include "EFortGameFeature.h"
#include "EFortStartupPhase.h"
#include "ESubGame.h"
#include "ETimeLimitForReplayCinematic.h"
#include "KairosSubmitLogOptions.h"
#include "LoginFailureLogSubmitOptions.h"
#include "LogoutLogSubmitOptions.h"
#include "PartyFailureLogSubmit.h"
#include "PurchaseFailureLogSubmitOptions.h"
#include "SubGameAccess.h"
#include "VoiceChatLogSubmitOptions.h"
#include "XPEventEntryHotfix.h"
#include "FortGlobals.generated.h"

class AActor;
class UFortGameFeaturePluginManager;

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API UFortGlobals : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BRMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BRMapFullName;
    
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
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChallengeObjectiveHotfix> ChallengeObjectiveHotfixes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChallengeSuppressedHotfix> ChallengeSuppressedHotfixes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FXPEventEntryHotfix> XPEventEntryHotfixes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMaydayStrangeLands;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceMaydayStrangeLands;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHestia;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCatabaEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSmallCatabaLayout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableIronCityAutoAmplifierPlacement;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWargameDebug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableEnduranceDebug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTrapScoringCrafting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTrapScoringPlacement;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTrapScoringActivation;
    
public:
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
    bool bSubmitSecondaryReturnToMenuErrorLogs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReturnToMenuErrorLogTailKb;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReturnToMenuErrorLogSubmitChance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyFailureLogSubmit PartyJoinFailureLogSubmit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKairosSubmitLogOptions> KairosSubmitOptions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoiceChatLogSubmitOptions VoiceChatSubmitOptions;
    
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
    bool bEnableQuestContentCheckOnSave;
    
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
    bool bUploadAthenaStatsV2;
    
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
    bool bPapayaSpeakersEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoAthenaClientStartupWeaponPreloading;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoCosmeticAssetStreaming;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAthenaSpatialUIDeferMarkingItemsSeen;
    
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
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLegacyMediaSourceForCreative;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableMediaStreamingOnWindows7;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowElectraForCellStreaming;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxElectraVerticalResolutionOf60fpsVideos;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxElectraVerticalResolutionOfWindowsSWD;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElectraLivePresentationOffset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElectraLiveAudioPresentationOffset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bElectraLiveUseConservativePresentationOffset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowElectraForReplayCinematic;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableElectraForReplayCinematicOnWin7;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableElectraForReplayCinematicOnWin7AndWin8;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProbabilityOfUsingElectraForReplayCinematic;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenTimeLimitForReplayCinematic;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationTimeLimitForReplayCinematic;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationExtraTimeForReplayCinematic;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowElectraForWatchBattlePassMovie;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowExtendedBattlePassMovie;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProbabilityOfUsingElectraForWatchBattlePassMovie;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenTimeLimitForWatchBattlePassMovie;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowForceDefaultAudioTrack;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 MemoryRequirementForMediaStreamingMB;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LiveStreamingCDNs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> VODStreamingCDNs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LiveStreamingCDNsCN;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> VODStreamingCDNsCN;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxResolutionForMediaStreaming;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxResolutionForStandalonePlayer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RiskyReelsPlaylistBlacklistFilter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RadioPlaylistBlacklistFilter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegionCN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GlobalSnowAltitude;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubGameAccess> SubGameAccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortGameFeaturePluginManager* GameFeaturePluginManager;
    
public:
    UFortGlobals();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool UseElectraForWatchBattlePassMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool UseElectraForReplayCinematic();
    
    UFUNCTION(BlueprintCallable)
    static float StWTutorialContentInstallationProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShowExtendedBattlePassMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldStreamOutTextureDataWhenPlayerIsTeleportedAtEndOfZone();
    
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
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalSnowAltitude(float Altitude);
    
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
    
    UFUNCTION(BlueprintCallable)
    static bool IsStWTutorialContentInstalled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSmallCatabaLayoutEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNewRewardFlowEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsMobileGame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsIronCityAutoAmplifierPlacementEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInSubGame(const UObject* WorldContextObject, const ESubGame SubGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInPhoenixZone(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInAthena(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHestiaEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHeroLoadoutSystemEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameFeatureContentInstalled(const EFortGameFeature GameFeature);
    
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
    static bool IsAllContentInstalled(const ESubGame SubGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAccountLinkingUIURLButtonEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAccountLinkingEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool InstallStWTutorialContent();
    
    UFUNCTION(BlueprintCallable)
    static bool InstallGameFeatureContent(const EFortGameFeature GameFeature);
    
    UFUNCTION(BlueprintCallable)
    static bool InstallAllOnDemandContent(const ESubGame SubGame);
    
    UFUNCTION(BlueprintCallable)
    static void HandleClientUpdateRequired(EFortClientUpdateType Type, bool RequestExit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetUseLegacyMediaSourceForCreative();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetUseLegacyMediaSource();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTimeLimitForWatchBattlePassMovie(ETimeLimitForReplayCinematic TimeLimitForWatchBattlePassMovie);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTimeLimitForReplayCinematic(ETimeLimitForReplayCinematic TimeLimitForReplayCinematic);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EPhysicalSurface> GetSurfaceType(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    static EContentInstallState GetStWTutorialContentInstallState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFortStartupPhase GetStartupPhase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetRiskyReelsPlaylistBlacklistFilter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPapayaSpeakersEnabled();
    
    UFUNCTION(BlueprintCallable)
    static EContentInstallState GetOnDemandContentInstallState(const ESubGame SubGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMinTheaterListRefreshDelay();
    
    UFUNCTION(BlueprintPure)
    static int64 GetMemoryRequirementForMediaStreamingMB();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxTheaterListRefreshDelay();
    
    UFUNCTION(BlueprintCallable)
    FContentInstallError GetLastOnDemandContentInstallError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetIronCityWargameTagList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIronCityEndlessEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIronCityEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGlobalSnowAltitude();
    
    UFUNCTION(BlueprintCallable)
    static EContentInstallState GetGameFeatureContentInstallState(const EFortGameFeature GameFeature);
    
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
    
    UFUNCTION(BlueprintCallable)
    static float GameFeatureContentInstallationProgress(const EFortGameFeature GameFeature);
    
    UFUNCTION(BlueprintCallable)
    static float ContentInstallationProgress(const ESubGame SubGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreFriendCodesEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AllowContainersInCreativeItemLists();
    
};

