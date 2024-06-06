#include "FortGameUserSettings.h"

void UFortGameUserSettings::ToggleScalabilityMode(EFortScalabilityMode Mode, bool bEnabled, bool bForceApply) {
}

void UFortGameUserSettings::SetUserInterfaceContrast(float InContrast) {
}

void UFortGameUserSettings::SetUseLatencyTweak2(int32 InLatencyTweak2) {
}

void UFortGameUserSettings::SetUseLatencyTweak1(bool bEnabled) {
}

void UFortGameUserSettings::SetUseLatencyFlash(bool bEnabled) {
}

void UFortGameUserSettings::SetUseGPUCrashDebugging(bool bEnabled) {
}

void UFortGameUserSettings::SetShowTemperature(bool bNewValue) {
}

void UFortGameUserSettings::SetShowCareerTabBang(bool Value) {
}

void UFortGameUserSettings::SetSafeZone(float Value) {
}

void UFortGameUserSettings::SetResolutionFraction(float ResolutionFraction) {
}

void UFortGameUserSettings::SetRenderingAPI(int32 InRenderingAPI) {
}

void UFortGameUserSettings::SetRayTracingShadowsQuality(bool InRayTracingShadowsQuality) {
}

void UFortGameUserSettings::SetRayTracingReflectionsQuality(int32 InRayTracingReflectionsQuality) {
}

void UFortGameUserSettings::SetRayTracingGIQuality(int32 InRayTracingGIQuality) {
}

void UFortGameUserSettings::SetRayTracingEnabled(bool bEnable) {
}

void UFortGameUserSettings::SetRayTracingAmbientOcclusionQuality(int32 InRayTracingAmbientOcclusionQuality) {
}

void UFortGameUserSettings::SetMobileFPSMode(const EFortMobileFPSMode Mode) {
}

void UFortGameUserSettings::SetLastSelectedFillOption(bool FillOption) {
}

void UFortGameUserSettings::SetHasSeenTapToShoot(bool bHasSeenIt) {
}

void UFortGameUserSettings::SetHasSeenPanningTip(bool bHasSeenIt) {
}

void UFortGameUserSettings::SetHasSeenCreativePhoneTutorial(bool NewBHasSeenCreativePhoneTutorial) {
}

void UFortGameUserSettings::SetHasSeenCreativeHeatmapTutorial(bool NewBHasSeenCreativeHeatmapTutorial) {
}

void UFortGameUserSettings::SetDonutShopSequenceMarkedAsSeen(bool bHasSeen) {
}

void UFortGameUserSettings::SetDLSSQuality(int32 InDLSSQuality) {
}

void UFortGameUserSettings::SetDisplayGamma(float InGamma) {
}

void UFortGameUserSettings::SetCachedPlayerLevel(int32 Value) {
}

void UFortGameUserSettings::ResetToDefaultDeviceScalability() {
}

void UFortGameUserSettings::ResetScalabilityModes() {
}

bool UFortGameUserSettings::IsVideoPlaybackAllowed() {
    return false;
}

bool UFortGameUserSettings::IsHeadphoneModeEnabled() const {
    return false;
}

bool UFortGameUserSettings::HasRecordedStat(const FName RecordName) const {
    return false;
}

float UFortGameUserSettings::GetUserInterfaceContrast() const {
    return 0.0f;
}

int32 UFortGameUserSettings::GetUseLatencyTweak2() const {
    return 0;
}

bool UFortGameUserSettings::GetUseLatencyTweak1() const {
    return false;
}

bool UFortGameUserSettings::GetUseLatencyFlash() const {
    return false;
}

bool UFortGameUserSettings::GetUseGPUCrashDebugging() const {
    return false;
}

bool UFortGameUserSettings::GetShowTemperature() const {
    return false;
}

bool UFortGameUserSettings::GetShowCareerTabBang() const {
    return false;
}

float UFortGameUserSettings::GetSafeZone() const {
    return 0.0f;
}

float UFortGameUserSettings::GetResolutionFraction() const {
    return 0.0f;
}

int32 UFortGameUserSettings::GetRenderingAPI() const {
    return 0;
}

bool UFortGameUserSettings::GetRayTracingShadowsQuality() const {
    return false;
}

int32 UFortGameUserSettings::GetRayTracingReflectionsQuality() const {
    return 0;
}

int32 UFortGameUserSettings::GetRayTracingGIQuality() const {
    return 0;
}

bool UFortGameUserSettings::GetRayTracingEnabled() const {
    return false;
}

int32 UFortGameUserSettings::GetRayTracingAmbientOcclusionQuality() const {
    return 0;
}

bool UFortGameUserSettings::GetLastSelectedFillOption() const {
    return false;
}

bool UFortGameUserSettings::GetHasSeenTapToShoot() const {
    return false;
}

bool UFortGameUserSettings::GetHasSeenPanningTip() const {
    return false;
}

bool UFortGameUserSettings::GetHasSeenCreativePhoneTutorial() const {
    return false;
}

bool UFortGameUserSettings::GetHasSeenCreativeHeatmapTutorial() const {
    return false;
}

FFireModeData UFortGameUserSettings::GetFireModeData() const {
    return FFireModeData{};
}

int32 UFortGameUserSettings::GetDLSSQuality() const {
    return 0;
}

bool UFortGameUserSettings::GetDLSSEnabled() const {
    return false;
}

float UFortGameUserSettings::GetDisplayGamma() const {
    return 0.0f;
}

int32 UFortGameUserSettings::GetCachedPlayerLevel() const {
    return 0;
}

UFortGameUserSettings::UFortGameUserSettings() {
    MouseSensitivity = 1;
    FortVersion = 0;
    UnlockConsoleFPS = false;
    LastAppliedUnlockConsoleFPS = false;
    SubGameSelectCount_Athena = 0;
    SubGameSelectCount_Campaign = 0;
    SafeZone = 1;
    bIsSafeZoneSet = false;
    CachedPlayerLevel = 0;
    bShowCareerTabBang = false;
    CustomVoiceChatInputDeviceId = TEXT("{c6938b94-4ad7-4771-abfa-bbd4415a55f8}");
    CustomVoiceChatOutputDeviceId = TEXT("{0.0.0.00000000}.{7002f2e3-756a-4d69-8ab5-d21c0e4f85cc}");
    bMotionBlur = false;
    bShowGrass = false;
    bShowFPS = true;
    bUseGPUCrashDebugging = false;
    UserRenderingAPI = 0;
    bLatencyTweak1 = false;
    LatencyTweak2 = 0;
    bLatencyFlash = false;
    DLSSQuality = 0;
    bRayTracing = false;
    RayTracingShadowsQuality = false;
    RayTracingReflectionsQuality = 0;
    RayTracingAmbientOcclusionQuality = true;
    RayTracingAOQuality = 0;
    RayTracingGIQuality = 0;
    DisplayGamma = 1;
    UserInterfaceContrast = 1;
    BattlePassOverrideTracker = 0;
    bHasSeenDonutShopSequence = false;
    DonutIdleGameHighScore = 1;
    LastSeenDailyStoreVersion = TEXT("3155063616000000000");
    LastSeenFeaturedStoreVersion = TEXT("3155063616000000000");
    LastSelectedFillOption = false;
    bHasSeenCreativePhoneTutorial = true;
    bHasSeenCreativeHeatmapTutorial = false;
    CreativeOptionLastUsedCategory = 0;
    CreativeOptionLastUsedIndexInCategory = 0;
    LastNewsVersionViewedBR = TEXT("2020-11-01T17:36:19.024Z");
    LastNewsVersionViewedSTW = TEXT("2023-01-13T12:58:32.959Z");
    LastFrontEndBackPlateStageUsed[0] = TEXT("worldcup");
    LastFrontEndBackPlateStageUsed[1] = TEXT("worldcup");
    bEulaAccepted = true;
    EulaAcceptedUserId = TEXT("Tamely");
    bTimesSeenBacchusLoadTutorial = 0;
    bHasSeenTapToShoot = false;
    NumTimesSeeingPanningTip = 0;
    bDesiredHeadphoneMode = false;
    bUseHeadphoneMode = false;
    InitialBenchmarkState = 0;
    bDisableMouseAcceleration = false;
    ChosenLoginType = ESavedAccountType::None;
    SocialImportOptedOutVersion = 0;
    VKImportOptedOutVersion = 0;
    bHasSeenErebusSocialImport = false;
    bHasSeenFriendImportToast = false;
    bAutoImportFriendEnabled = false;
    bSeenLetoSellModal = false;
    SocialImportPromptCountCurrentVersion = 0;
    SocialImportPromptCountAllVersions = 0;
    VKImportPromptCountCurrentVersion = 0;
    VKImportPromptCountAllVersions = 0;
    bSocialImportDisplayed = false;
    bAccountItemWarningShownThisLaunch = false;
    bMultiFactorAuthModalOpOut = false;
    MobileRecommendationDismissedVersion = 0;
    ShowLiveStreamPictureInPictureInMatchV2 = EShowInGamePictureInPicture::Default;
    CurrentLivePiPStreamOverrideCounter = 0;
    bNeverShowMobileLink = false;
    bHasShownMobileLink = false;
    bDesiredAllowLowPowerMode = false;
    bDesiredAllowMultithreadedRendering = true;
    bHasMigratedDownloadSettings = false;
    bSendAppsFlyerEventOnInstallation = true;
    bAllowCellularDownload = false;
    bAllowCellularDownloadOverride = false;
    bAllowFullGameDownload = false;
    bAllowFullGameDownloadOverride = false;
    bAllowElectraPlayerDownload = false;
    bAllowElectraPlayerDownloadOverride = false;
    bResumeUserCanceledOrPausedDownload = false;
    bForceNoPatchingForDownloads = false;
    bAutoLaunchFullGame = false;
    bAllowDownloadHighResMips = false;
    bAllowLowPowerMode = false;
    bAllowVideoPlayback = true;
    bAllowMultithreadedRendering = true;
    MobileFPSMode = EFortMobileFPSMode::Mode_20Fps;
    bHasSeenSamsungPressureSensorWarning = false;
    bNeverDisplaySamsungPressureSensorWarning = false;
    bHasRecentlySeenBadMatchPopup = false;
    MatchesSinceLastBadMatchPopup = 0;
    bHasAlreadyRatedOnGooglePlay = false;
    DaysToSnoozeBeforeNextGooglePlayRating = 0;
    GooglePlayRatingDelayedOccurences = 0;
    bShowTemperature = false;
    LastYearForcedDisplayWinterfestInfoButton = 0;
}

