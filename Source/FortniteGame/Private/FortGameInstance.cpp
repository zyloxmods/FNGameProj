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
    bBattleRoyaleMatchmakingEnabled = true;
    bCreativeModeProfileEnabled = true;
    FrontEndPlaylistData.AddDefaulted(50);
    bOverridingCurrentEmoteMusicFFT = false;
    CurrentEmoteMusicFFT100hz = 1;
    CurrentEmoteMusicFFT2000hz = 1;
    EmoteMusicEnvelopeBeatCount = 1;
    KairosHeartbeatManager = NULL;
    ProfileManager = NULL;
    InventoryManager = NULL;
    Matchmaking = NULL;
    MatchmakingV2 = NULL;
    RejoinCheck = NULL;
    SocialManager = NULL;
    MatchAnalytics = NULL;
    PartySpectateAnalytics = NULL;
    SidecarSys = NULL;
    TooltipManager = NULL;
    UpdateManager = NULL;
    DataAssetDirectoryManager = NULL;
    InteractabilityTracker = NULL;
    Chatroom = NULL;
    SeasonalEventManager = NULL;
    TournamentManager = NULL;
    MobilePushNotificationManager = NULL;
    BroadcastFeatureStatusRate = 1;
    CurrentMissionGenerator = NULL;
    AppActivationSoundMixManager = NULL;
    KairosUIResX = 0;
    KairosUIResY = 0;
    KairosWebUrls.AddDefaulted(2);
    KairosMinSupportedAppVersion = 0;
    KairosHotfixCheckTimer = 1;
    KairosHotfixCheckVariance = 1;
    PlaylistManager = NULL;
    MaterialCacheManager = NULL;
    GameFrameworkComponentManager = NULL;
    ReplayVideoManager = NULL;
    ExtractionBootstrapper = NULL;
    PegasusDriver = NULL;
    ContentBeaconClient = NULL;
}

