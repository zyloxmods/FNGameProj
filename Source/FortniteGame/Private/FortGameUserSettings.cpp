#include "FortGameUserSettings.h"

void UFortGameUserSettings::ToggleScalabilityMode(EFortScalabilityMode Mode, bool bEnabled, bool bForceApply) {
}

void UFortGameUserSettings::SetMobileFPSMode(const EFortMobileFPSMode Mode) {
}

void UFortGameUserSettings::SetHasSeenTapToShoot(bool bHasSeenIt) {
}

void UFortGameUserSettings::SetHasSeenPanningTip(bool bHasSeenIt) {
}

void UFortGameUserSettings::ResetToDefaultDeviceScalability() {
}

void UFortGameUserSettings::ResetScalabilityModes() {
}

bool UFortGameUserSettings::IsVideoPlaybackAllowed() {
    return false;
}

bool UFortGameUserSettings::GetHasSeenTapToShoot() const {
    return false;
}

bool UFortGameUserSettings::GetHasSeenPanningTip() const {
    return false;
}

FFireModeData UFortGameUserSettings::GetFireModeData() const {
    return FFireModeData{};
}

UFortGameUserSettings::UFortGameUserSettings() {
    this->MouseSensitivity = 0.07f;
    this->FortVersion = 2;
    this->UnlockConsoleFPS = false;
    this->LastAppliedUnlockConsoleFPS = false;
    this->CurrentConsoleFPSMode = 0;
    this->SubGameSelectCount_Athena = 1751;
    this->SubGameSelectCount_Campaign = 62;
    this->bMotionBlur = false;
    this->bShowGrass = true;
    this->bShowFPS = true;
    this->LastSeenDailyStoreVersion = TEXT("3155063616000000000");
    this->LastSeenFeaturedStoreVersion = TEXT("3155063616000000000");
    this->LastSelectedFillOption = true;
    this->LastNewsVersionViewedBR = TEXT("2019-10-31T20:29:39.334Z");
    this->LastNewsVersionViewedSTW = TEXT("2023-07-26T19:01:18.945Z");
    this->LastPlaylistInfoVersionViewedBR = TEXT("2019-10-29T14:05:17.030Z");
    this->bEulaAccepted = true;
    this->EulaAcceptedUserId = TEXT("3c894133d79345b491a2298ccc168040");
    this->bTimesSeenBacchusLoadTutorial = 0;
    this->bHasSeenTapToShoot = false;
    this->NumTimesSeeingPanningTip = 0;
    this->InitialBenchmarkState = 1;
    this->bDisableMouseAcceleration = false;
    this->ChosenLoginType = ESavedAccountType::None;
    this->SocialImportOptedOutVersion = 0;
    this->VKImportOptedOutVersion = 0;
    this->bHasSeenErebusSocialImport = false;
    this->bHasSeenFriendImportToast = false;
    this->bAutoImportFriendEnabled = false;
    this->SocialImportPromptCountCurrentVersion = 0;
    this->SocialImportPromptCountAllVersions = 0;
    this->VKImportPromptCountCurrentVersion = 0;
    this->VKImportPromptCountAllVersions = 0;
    this->bSocialImportDisplayed = false;
    this->bMultiFactorAuthModalOpOut = false;
    this->bAllowCellularDownload = false;
    this->bAllowCellularDownloadOverride = false;
    this->bAllowKairosDownload = false;
    this->bAllowKairosDownloadOverride = false;
    this->bAllowFullGameDownload = false;
    this->bAllowFullGameDownloadOverride = false;
    this->bResumeUserCanceledOrPausedDownload = false;
    this->bAutoLaunchFullGame = false;
    this->bAllowLowPowerMode = false;
    this->bAllowVideoPlayback = true;
    this->bAllowMultithreadedRendering = true;
    this->MobileFPSMode = EFortMobileFPSMode::Mode_30Fps;
}

