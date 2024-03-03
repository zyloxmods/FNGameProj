#include "FortGameInstance.h"
/*
bool UFortGameInstance::UninstallFortniteBROnNextBoot_Implementation(bool bRestartApp, bool bPromptForRestart) {
    return false;
}

bool UFortGameInstance::UninstallAllOptionalContentOnNextBoot_Implementation(bool bRestartApp, bool bPromptForRestart) {
    return false;
}
*/
//void UFortGameInstance::SetUserSetting(const FString& Key, const FString& Value, FWebJSResponse Response) {
//}
/*
void UFortGameInstance::SetOverrideCurrentMusicFFT(float FFT100hz, float FFT2000hz) {
}

void UFortGameInstance::SetMultipleUserSettings(const TMap<FString, FString>& Settings, FWebJSResponse Response) {
}

void UFortGameInstance::SetHotfixCompleteCallback(FWebJSFunction Callback) {
}

void UFortGameInstance::SetFeatureStatusCallback(FWebJSFunction Callback) {
}

void UFortGameInstance::SetErrorSimulationCommands(const FString& CommandLine) {
}

void UFortGameInstance::RequestBroadcast() {
}

void UFortGameInstance::PauseContentInstall() {
}

void UFortGameInstance::OpenUpdateApp() {
}

void UFortGameInstance::OnTournamentDataRefreshed() {
}

void UFortGameInstance::KairosSubmitBugReport(const FString& Subject, const FString& Body, FWebJSResponse Response) {
}

void UFortGameInstance::IsContentUpToDate(EFortGameFeature Feature, FWebJSResponse Response) {
}

void UFortGameInstance::GetUserSetting(const FString& Key, FWebJSResponse Response) {
}

void UFortGameInstance::GetProjectVersion(FWebJSResponse Response) {
}

UFortLinkDataManager* UFortGameInstance::GetLinkDataManager() const {
    return NULL;
}

void UFortGameInstance::GetHotfixHasApplied(FWebJSResponse Response) {
}

void UFortGameInstance::GetFeatureRequiredSizesRequiredOnly(EFortGameFeature Feature, FWebJSResponse Response) {
}

void UFortGameInstance::GetFeatureRequiredSizesOptionalOnly(EFortGameFeature Feature, FWebJSResponse Response) {
}

void UFortGameInstance::GetFeatureRequiredSizes(EFortGameFeature Feature, FWebJSResponse Response) {
}

UFortSeasonalEventManager* UFortGameInstance::GetEventManager() const {
    return NULL;
}

void UFortGameInstance::GetContentState(EFortGameFeature Feature, FWebJSResponse Response) {
}

void UFortGameInstance::GetAnalyticsSessionDetails(FWebJSResponse Response) {
}

void UFortGameInstance::DebugCreatePlayerWithLoginInfo(int32 ControllerId, const FString& Email, const FString& Password) {
}

void UFortGameInstance::DebugCreateBackgroundPlayer(int32 ControllerId) {
}

void UFortGameInstance::ContinueDelayedStartup() {
}

void UFortGameInstance::ClearOverrideCurrentMusicFFT() {
}

void UFortGameInstance::CheckLatestClient(FWebJSResponse Response) {
}

void UFortGameInstance::ChangeActiveGameFeature(const FString& FeatureString) {
}

bool UFortGameInstance::CancelUninstallFortniteBROnNextBoot() {
    return false;
}

bool UFortGameInstance::CancelUninstallAllOptionalContentOnNextBoot() {
    return false;
}

void UFortGameInstance::CancelContentInstall() {
}*/

UFortGameInstance::UFortGameInstance() {
    this->bBattleRoyaleMatchmakingEnabled = true;
    this->bCreativeModeProfileEnabled = true;
    this->FrontEndPlaylistData.AddDefaulted(50);
    this->bOverridingCurrentEmoteMusicFFT = false;
    this->CurrentEmoteMusicFFT100hz = 1;
    this->CurrentEmoteMusicFFT2000hz = 1;
    this->EmoteMusicEnvelopeBeatCount = 1;
    this->KairosHeartbeatManager = NULL;
    this->ProfileManager = NULL;
    this->InventoryManager = NULL;
    this->Matchmaking = NULL;
    this->MatchmakingV2 = NULL;
    this->RejoinCheck = NULL;
    this->SocialManager = NULL;
    this->MatchAnalytics = NULL;
    this->PartySpectateAnalytics = NULL;
    this->SidecarSys = NULL;
    this->TooltipManager = NULL;
    this->UpdateManager = NULL;
    this->DataAssetDirectoryManager = NULL;
    this->InteractabilityTracker = NULL;
    this->Chatroom = NULL;
    this->SeasonalEventManager = NULL;
    this->TournamentManager = NULL;
    this->MobilePushNotificationManager = NULL;
    this->BroadcastFeatureStatusRate = 1;
    this->CurrentMissionGenerator = NULL;
    this->AppActivationSoundMixManager = NULL;
    this->KairosUIResX = 0;
    this->KairosUIResY = 0;
    this->KairosWebUrls.AddDefaulted(2);
    this->KairosMinSupportedAppVersion = 0;
    this->KairosHotfixCheckTimer = 1;
    this->KairosHotfixCheckVariance = 1;
    this->PlaylistManager = NULL;
    this->MaterialCacheManager = NULL;
    this->GameFrameworkComponentManager = NULL;
    this->ReplayVideoManager = NULL;
    this->ExtractionBootstrapper = NULL;
    this->PegasusDriver = NULL;
    this->ContentBeaconClient = NULL;
}

