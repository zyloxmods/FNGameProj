#include "FortGameState.h"
#include "FortAmbientAudioController.h"
#include "Net/UnrealNetwork.h"

void AFortGameState::SetPlayerRespawningBlocked_Temporarily(bool bBlock) {
}

void AFortGameState::RunPerfMemCheatScript_Implementation(bool bStartStatFiles) {
}

void AFortGameState::OnRep_WorldManager() {
}

void AFortGameState::OnRep_WorldDaysElapsed() {
}

void AFortGameState::OnRep_Teams() {
}

void AFortGameState::OnRep_RecorderPlayerState() {
}

void AFortGameState::OnRep_PoiManager() {
}

void AFortGameState::OnRep_PawnForReplayRelevancy(AFortPawn* OldPawnForReplayRelevancy) {
}

void AFortGameState::OnRep_MusicManagerSubclass() {
}

void AFortGameState::OnRep_MusicManagerBank() {
}

void AFortGameState::OnRep_MissionManager() {
}

void AFortGameState::OnRep_GameSessionID() {
}

void AFortGameState::OnRep_GameplayState() {
}

void AFortGameState::OnRep_FeedbackManager() {
}

void AFortGameState::OnRep_CurrentWUID() {
}

void AFortGameState::OnRep_AnnouncementManager() {
}

void AFortGameState::OnRep_AdditionalPlaylistLevelsStreamed() {
}

void AFortGameState::OnFinishedStreamingAdditionalPlaylistLevel() {
}

void AFortGameState::OnFinishedShowingAdditionalPlaylistLevel() {
}

int32 AFortGameState::GetWorldDaysElapsed() const {
    return 0;
}

bool AFortGameState::GetPlayerRespawningBlocked_Temporarily() const {
    return false;
}

float AFortGameState::GetMatchTime() const {
    return 0.0f;
}

EFortGameplayState AFortGameState::GetGameplayState() const {
    return EFortGameplayState::NormalGameplay;
}

void AFortGameState::DemoEndOfDayRecap() {
}

bool AFortGameState::DBNOEnabledForGameMode() const {
    return false;
}

void AFortGameState::DbgSphereSendToAllInternal_DoNotCall_Implementation(const FVector& Center, float Radius, int32 Segments, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void AFortGameState::DbgLineSendToAllInternal_DoNotCall_Implementation(const FVector& LineStart, const FVector& LineEnd, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void AFortGameState::DbgCapsuleSendToAllInternal_DoNotCall_Implementation(const FVector& Center, float HalfHeight, float Radius, const FQuat& Rotation, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void AFortGameState::DbgBoxSendToAllInternal_DoNotCall_Implementation(const FVector& Center, const FVector& Extent, const FRotator& Rotation, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void AFortGameState::CopyGameSessionIdToClipboard() {
}

void AFortGameState::Client_RefreshEventCalendar_Implementation() {
}

void AFortGameState::Client_InitiateEndOfDayRecap_Implementation(const FEndOfDayRecap& EndOfDayRecap) {
}

void AFortGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameState, CurrentWUID);
    DOREPLIFETIME(AFortGameState, ParTime);
    DOREPLIFETIME(AFortGameState, WorldLevel);
    DOREPLIFETIME(AFortGameState, CraftingBonus);
    DOREPLIFETIME(AFortGameState, CurrentReadyToContinueTimer);
    DOREPLIFETIME(AFortGameState, TeamCount);
    DOREPLIFETIME(AFortGameState, GameFlagData);
    DOREPLIFETIME(AFortGameState, PoiManager);
    DOREPLIFETIME(AFortGameState, bDBNOEnabledForGameMode);
    DOREPLIFETIME(AFortGameState, bPlayerRespawningBlocked_Temporarily);
    DOREPLIFETIME(AFortGameState, AdditionalPlaylistLevelsStreamed);
    DOREPLIFETIME(AFortGameState, WorldDaysElapsed);
    DOREPLIFETIME(AFortGameState, FeedbackManager);
    DOREPLIFETIME(AFortGameState, MissionManager);
    DOREPLIFETIME(AFortGameState, AnnouncementManager);
    DOREPLIFETIME(AFortGameState, WorldManager);
    DOREPLIFETIME(AFortGameState, GameplayState);
    DOREPLIFETIME(AFortGameState, MusicManagerSubclass);
    DOREPLIFETIME(AFortGameState, MusicManagerBank);
    DOREPLIFETIME(AFortGameState, GameSessionId);
    DOREPLIFETIME(AFortGameState, PawnForReplayRelevancy);
    DOREPLIFETIME(AFortGameState, RecorderPlayerState);
    DOREPLIFETIME(AFortGameState, VisibilityManager);
    DOREPLIFETIME(AFortGameState, Teams);
    DOREPLIFETIME(AFortGameState, PendingTeamChangeRequests);
    DOREPLIFETIME(AFortGameState, TreasureChestInfos);
    DOREPLIFETIME(AFortGameState, AmmoBoxInfos);
}

AFortGameState::AFortGameState() {
    ParTime = 0;
    WorldLevel = 0;
    CraftingBonus = 0;
    CurrentReadyToContinueTimer = 1;
    TeamCount = 0;
    GameFlagData = 0;
    PoiManager = NULL;
    bDBNOEnabledForGameMode = true;
    bPlayersAlwaysVisible = false;
    bSkipWorldSave = false;
    bShowLoadingScreenUntilAllLevelAreLoaded = false;
    bPlayerRespawningBlocked_Temporarily = false;
    WorldDaysElapsed = 0;
    FeedbackManager = NULL;
    MissionManager = NULL;
    AnnouncementManager = NULL;
    ScriptedActionManager = NULL;
    LobbyGameState = NULL;
    WorldManager = NULL;
    GameplayState = EFortGameplayState::WaitingToStart;
    MusicManagerSubclass = NULL;
    MusicManagerBank = NULL;
    FortAmbientAudioControllerClass = UFortAmbientAudioController::StaticClass();
    PawnForReplayRelevancy = NULL;
    RecorderPlayerState = NULL;
    VisibilityManager = NULL;
    FXManager = NULL;
    WindManager = NULL;
    bSkipTeamReplication = false;
    bAllowPendingTeamChangeRequests = false;
    GlobalAbilityTargetingActor = NULL;
    UnplayableHitchThresholdInMs = 1;
    MaxUnplayableHitchesToTolerate = 0;
    CreativeQuestManager = NULL;
}

