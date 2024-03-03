#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameUserSettings.h"
#include "EFortMobileFPSMode.h"
#include "EFortScalabilityMode.h"
#include "ESavedAccountType.h"
#include "EShowInGamePictureInPicture.h"
#include "FireModeData.h"
#include "FortMobileHUDProfileIdentifier.h"
#include "FortPortalOriginInfo.h"
#include "FortSimpleGameStats.h"
#include "HUDLayoutData.h"
#include "OnAllowVideoPlaybackChangedDelegate.h"
#include "OnScalabilityChangedDelegate.h"
#include "PlaylistData.h"
#include "RecentPlayerEncounterSerialized.h"
#include "SavedCredentials.h"
#include "SavedCustomMatchOptions.h"
#include "SavedShopSectionState.h"
#include "FortGameUserSettings.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FortVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UnlockConsoleFPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool LastAppliedUnlockConsoleFPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CurrentFpsModeString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CurrentDeviceProfileOverrideSuffix;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubGameSelectCount_Athena;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime SubGameLastSelectedTime_Athena;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubGameSelectCount_Campaign;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime SubGameLastSelectedTime_Campaign;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastTimeSettingsSnapshotUploaded;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime FirstLoginOnDevice;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafeZone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSafeZoneSet;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedPlayerLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowCareerTabBang;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomVoiceChatInputDevice;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomVoiceChatOutputDevice;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomVoiceChatInputDeviceId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomVoiceChatOutputDeviceId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMotionBlur;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowGrass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowFPS;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGPUCrashDebugging;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserRenderingAPI;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLatencyTweak1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LatencyTweak2;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLatencyFlash;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DLSSQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRayTracing;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RayTracingShadowsQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RayTracingReflectionsQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RayTracingAmbientOcclusionQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RayTracingAOQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RayTracingGIQuality;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayGamma;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UserInterfaceContrast;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDateTime> NamedTimes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> NamedCounts;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattlePassOverrideTracker;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSeenDonutShopSequence;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DonutIdleGameHighScore;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastSeenDailyStoreVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastSeenFeaturedStoreVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FSavedShopSectionState> LastSeenShopSectionState;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSavedShopSectionState> LastSeenShopSectionStateBySectionId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FSavedShopSectionState> LastReceivedShopSectionState;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LastSeenAthenaRMTStore;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlaylistData LastSelectedPlaylist;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LastSelectedFillOption;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSavedCustomMatchOptions> CustomMatchOptions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> CreativeOptions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSeenCreativePhoneTutorial;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSeenCreativeHeatmapTutorial;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreativeOptionLastUsedCategory;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreativeOptionLastUsedIndexInCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortPortalOriginInfo LastPortalOrigin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastNewsVersionViewedBR;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastNewsVersionViewedCreative;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastNewsVersionViewedSTW;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LastPlaylistInfoVersionViewedBR;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastFrontEndBackPlateStageUsed[2];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEulaAccepted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EulaAcceptedUserId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastEulaCheckTime;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDLayoutData HUDLayoutData[3];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMobileHUDProfileIdentifier ActiveHUDProfileIdentifier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bTimesSeenBacchusLoadTutorial;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSeenTapToShoot;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTimesSeeingPanningTip;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFireModeData FireModeData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSimpleGameStats SimpleMobileStats;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDesiredHeadphoneMode;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHeadphoneMode;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialBenchmarkState;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableMouseAcceleration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESavedAccountType ChosenLoginType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScalabilityChanged OnViewDistanceQualityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScalabilityChanged OnShadowQualityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScalabilityChanged OnAntiAliasingQualityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScalabilityChanged OnTextureQualityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScalabilityChanged OnEffectsQualityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScalabilityChanged OnPostProcessQualityChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedCredentials> Credentials;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SocialImportOptedOutVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VKImportOptedOutVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSeenErebusSocialImport;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSeenFriendImportToast;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastSocialImportPromptTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoImportFriendEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSeenLetoSellModal;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SocialImportPromptCountCurrentVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SocialImportPromptCountAllVersions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VKImportPromptCountCurrentVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VKImportPromptCountAllVersions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSocialImportDisplayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAccountItemWarningShownThisLaunch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastAccountItemWarningTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMultiFactorAuthModalOpOut;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastEnableMFAModalPromptTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastVKImportPromptTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastAffiliateToastTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FDateTime> FailedInviteMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MobileRecommendationDismissedVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShowInGamePictureInPicture ShowLiveStreamPictureInPictureInMatchV2;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CurrentLivePiPStreamOverrideCounter;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeverShowMobileLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasShownMobileLink;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDesiredAllowLowPowerMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllowVideoPlaybackChanged OnAllowVideoPlaybackChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDesiredAllowMultithreadedRendering;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMigratedDownloadSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSendAppsFlyerEventOnInstallation;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCellularDownload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowCellularDownloadOverride;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowFullGameDownload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowFullGameDownloadOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowElectraPlayerDownload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowElectraPlayerDownloadOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bResumeUserCanceledOrPausedDownload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForceNoPatchingForDownloads;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoLaunchFullGame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDownloadHighResMips;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowLowPowerMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowVideoPlayback;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMultithreadedRendering;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMobileFPSMode MobileFPSMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MobileQualitySettingsResetDefaultsGUID;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSeenSamsungPressureSensorWarning;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeverDisplaySamsungPressureSensorWarning;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasRecentlySeenBadMatchPopup;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchesSinceLastBadMatchPopup;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAlreadyRatedOnGooglePlay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DaysToSnoozeBeforeNextGooglePlayRating;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GooglePlayRatingDelayedOccurences;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTemperature;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastGameStartNotificationSentTime;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ScheduledNotifications;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastYearForcedDisplayWinterfestInfoButton;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecentPlayerEncounterSerialized> RecentPlayerEncounters;
    
public:
    UFortGameUserSettings();
    UFUNCTION(BlueprintCallable)
    void ToggleScalabilityMode(EFortScalabilityMode Mode, bool bEnabled, bool bForceApply);
    
    UFUNCTION(BlueprintCallable)
    void SetUserInterfaceContrast(float InContrast);
    
    UFUNCTION(BlueprintCallable)
    void SetUseLatencyTweak2(int32 InLatencyTweak2);
    
    UFUNCTION(BlueprintCallable)
    void SetUseLatencyTweak1(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetUseLatencyFlash(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetUseGPUCrashDebugging(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetShowTemperature(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShowCareerTabBang(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSafeZone(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetResolutionFraction(float ResolutionFraction);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderingAPI(int32 InRenderingAPI);
    
    UFUNCTION(BlueprintCallable)
    void SetRayTracingShadowsQuality(bool InRayTracingShadowsQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetRayTracingReflectionsQuality(int32 InRayTracingReflectionsQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetRayTracingGIQuality(int32 InRayTracingGIQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetRayTracingEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetRayTracingAmbientOcclusionQuality(int32 InRayTracingAmbientOcclusionQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetMobileFPSMode(const EFortMobileFPSMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetLastSelectedFillOption(bool FillOption);
    
    UFUNCTION(BlueprintCallable)
    void SetHasSeenTapToShoot(bool bHasSeenIt);
    
    UFUNCTION(BlueprintCallable)
    void SetHasSeenPanningTip(bool bHasSeenIt);
    
    UFUNCTION(BlueprintCallable)
    void SetHasSeenCreativePhoneTutorial(bool NewBHasSeenCreativePhoneTutorial);
    
    UFUNCTION(BlueprintCallable)
    void SetHasSeenCreativeHeatmapTutorial(bool NewBHasSeenCreativeHeatmapTutorial);
    
    UFUNCTION(BlueprintCallable)
    void SetDonutShopSequenceMarkedAsSeen(bool bHasSeen);
    
    UFUNCTION(BlueprintCallable)
    void SetDLSSQuality(int32 InDLSSQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayGamma(float InGamma);
    
    UFUNCTION(BlueprintCallable)
    void SetCachedPlayerLevel(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefaultDeviceScalability();
    
    UFUNCTION(BlueprintCallable)
    void ResetScalabilityModes();
    
    UFUNCTION(BlueprintCallable)
    bool IsVideoPlaybackAllowed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeadphoneModeEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRecordedStat(const FName RecordName) const;
    
    UFUNCTION(BlueprintCallable)
    float GetUserInterfaceContrast() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetUseLatencyTweak2() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetUseLatencyTweak1() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetUseLatencyFlash() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetUseGPUCrashDebugging() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetShowTemperature() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetShowCareerTabBang() const;
    
    UFUNCTION(BlueprintCallable)
    float GetSafeZone() const;
    
    UFUNCTION(BlueprintCallable)
    float GetResolutionFraction() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetRenderingAPI() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetRayTracingShadowsQuality() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetRayTracingReflectionsQuality() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetRayTracingGIQuality() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetRayTracingEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetRayTracingAmbientOcclusionQuality() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetLastSelectedFillOption() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasSeenTapToShoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasSeenPanningTip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasSeenCreativePhoneTutorial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasSeenCreativeHeatmapTutorial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFireModeData GetFireModeData() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetDLSSQuality() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetDLSSEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDisplayGamma() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetCachedPlayerLevel() const;
    
};

