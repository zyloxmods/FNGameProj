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
    this->MouseSensitivity = 1;
    this->FortVersion = 0;
    this->UnlockConsoleFPS = false;
    this->LastAppliedUnlockConsoleFPS = false;
    this->SubGameSelectCount_Athena = 0;
    this->SubGameSelectCount_Campaign = 0;
    this->SafeZone = 1;
    this->bIsSafeZoneSet = false;
    this->CachedPlayerLevel = 0;
    this->bShowCareerTabBang = false;
    this->CustomVoiceChatInputDeviceId = TEXT("{c6938b94-4ad7-4771-abfa-bbd4415a55f8}");
    this->CustomVoiceChatOutputDeviceId = TEXT("{0.0.0.00000000}.{7002f2e3-756a-4d69-8ab5-d21c0e4f85cc}");
    this->bMotionBlur = false;
    this->bShowGrass = false;
    this->bShowFPS = true;
    this->bUseGPUCrashDebugging = false;
    this->UserRenderingAPI = 0;
    this->bLatencyTweak1 = false;
    this->LatencyTweak2 = 0;
    this->bLatencyFlash = false;
    this->DLSSQuality = 0;
    this->bRayTracing = false;
    this->RayTracingShadowsQuality = false;
    this->RayTracingReflectionsQuality = 0;
    this->RayTracingAmbientOcclusionQuality = true;
    this->RayTracingAOQuality = 0;
    this->RayTracingGIQuality = 0;
    this->DisplayGamma = 1;
    this->UserInterfaceContrast = 1;
    this->BattlePassOverrideTracker = 0;
    this->bHasSeenDonutShopSequence = false;
    this->DonutIdleGameHighScore = 1;
    this->LastSeenDailyStoreVersion = TEXT("3155063616000000000");
    this->LastSeenFeaturedStoreVersion = TEXT("3155063616000000000");
    this->LastSelectedFillOption = false;
    this->bHasSeenCreativePhoneTutorial = true;
    this->bHasSeenCreativeHeatmapTutorial = false;
    this->CreativeOptionLastUsedCategory = 0;
    this->CreativeOptionLastUsedIndexInCategory = 0;
    this->LastNewsVersionViewedBR = TEXT("2020-11-01T17:36:19.024Z");
    this->LastNewsVersionViewedSTW = TEXT("2023-01-13T12:58:32.959Z");
    this->LastFrontEndBackPlateStageUsed[0] = TEXT("worldcup");
    this->LastFrontEndBackPlateStageUsed[1] = TEXT("worldcup");
    this->bEulaAccepted = true;
    this->EulaAcceptedUserId = TEXT("Tamely");
    this->bTimesSeenBacchusLoadTutorial = 0;
    this->bHasSeenTapToShoot = false;
    this->NumTimesSeeingPanningTip = 0;
    this->bDesiredHeadphoneMode = false;
    this->bUseHeadphoneMode = false;
    this->InitialBenchmarkState = 0;
    this->bDisableMouseAcceleration = false;
    this->ChosenLoginType = ESavedAccountType::None;
    this->SocialImportOptedOutVersion = 0;
    this->VKImportOptedOutVersion = 0;
    this->bHasSeenErebusSocialImport = false;
    this->bHasSeenFriendImportToast = false;
    this->bAutoImportFriendEnabled = false;
    this->bSeenLetoSellModal = false;
    this->SocialImportPromptCountCurrentVersion = 0;
    this->SocialImportPromptCountAllVersions = 0;
    this->VKImportPromptCountCurrentVersion = 0;
    this->VKImportPromptCountAllVersions = 0;
    this->bSocialImportDisplayed = false;
    this->bAccountItemWarningShownThisLaunch = false;
    this->bMultiFactorAuthModalOpOut = false;
    this->MobileRecommendationDismissedVersion = 0;
    this->ShowLiveStreamPictureInPictureInMatchV2 = EShowInGamePictureInPicture::Default;
    this->CurrentLivePiPStreamOverrideCounter = 0;
    this->bNeverShowMobileLink = false;
    this->bHasShownMobileLink = false;
    this->bDesiredAllowLowPowerMode = false;
    this->bDesiredAllowMultithreadedRendering = true;
    this->bHasMigratedDownloadSettings = false;
    this->bSendAppsFlyerEventOnInstallation = true;
    this->bAllowCellularDownload = false;
    this->bAllowCellularDownloadOverride = false;
    this->bAllowFullGameDownload = false;
    this->bAllowFullGameDownloadOverride = false;
    this->bAllowElectraPlayerDownload = false;
    this->bAllowElectraPlayerDownloadOverride = false;
    this->bResumeUserCanceledOrPausedDownload = false;
    this->bForceNoPatchingForDownloads = false;
    this->bAutoLaunchFullGame = false;
    this->bAllowDownloadHighResMips = false;
    this->bAllowLowPowerMode = false;
    this->bAllowVideoPlayback = true;
    this->bAllowMultithreadedRendering = true;
    this->MobileFPSMode = EFortMobileFPSMode::Mode_20Fps;
    this->bHasSeenSamsungPressureSensorWarning = false;
    this->bNeverDisplaySamsungPressureSensorWarning = false;
    this->bHasRecentlySeenBadMatchPopup = false;
    this->MatchesSinceLastBadMatchPopup = 0;
    this->bHasAlreadyRatedOnGooglePlay = false;
    this->DaysToSnoozeBeforeNextGooglePlayRating = 0;
    this->GooglePlayRatingDelayedOccurences = 0;
    this->bShowTemperature = false;
    this->LastYearForcedDisplayWinterfestInfoButton = 0;
}

