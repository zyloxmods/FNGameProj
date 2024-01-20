#include "FortGameState.h"
#include "FortAmbientAudioController.h"
#include "Net/UnrealNetwork.h"

void AFortGameState::SetPlayerSpawningBlocked_Temporarily(bool bBlock) {
}

void AFortGameState::RunPerfMemCheatScript_Implementation(bool bStartStatFiles) {
}

void AFortGameState::OnRep_WorldManager() {
}

void AFortGameState::OnRep_WorldDaysElapsed() {
}

void AFortGameState::OnRep_Teams() {
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

bool AFortGameState::GetPlayerSpawningBlocked_Temporarily() const {
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

void AFortGameState::DbgSphereSendToAllInternal_DoNotCall_Implementation(const FVector& Center, float Radius, int32 Segments, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void AFortGameState::DbgLineSendToAllInternal_DoNotCall_Implementation(const FVector& LineStart, const FVector& LineEnd, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void AFortGameState::DbgCapsuleSendToAllInternal_DoNotCall_Implementation(const FVector& Center, float HalfHeight, float Radius, const FQuat& Rotation, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void AFortGameState::DbgBoxSendToAllInternal_DoNotCall_Implementation(const FVector& Center, const FVector& Extent, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
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
    DOREPLIFETIME(AFortGameState, bPlayerSpawningBlocked_Temporarily);
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
}

AFortGameState::AFortGameState() {
    this->ParTime = 0;
    this->WorldLevel = 0;
    this->CraftingBonus = 0;
    this->CurrentReadyToContinueTimer = -1.00f;
    this->TeamCount = 0;
    this->GameFlagData = 0;
    this->PoiManager = NULL;
    this->bPlayersAlwaysVisible = false;
    this->bSkipWorldSave = false;
    this->bPlayerSpawningBlocked_Temporarily = false;
    this->WorldDaysElapsed = 0;
    this->FeedbackManager = NULL;
    this->MissionManager = NULL;
    this->AnnouncementManager = NULL;
    this->ScriptedActionManager = NULL;
    this->LobbyGameState = NULL;
    this->WorldManager = NULL;
    this->GameplayState = EFortGameplayState::WaitingToStart;
    this->MusicManagerSubclass = NULL;
    this->MusicManagerBank = NULL;
    this->FortAmbientAudioControllerClass = UFortAmbientAudioController::StaticClass();
    this->PawnForReplayRelevancy = NULL;
    this->RecorderPlayerState = NULL;
    this->VisibilityManager = NULL;
    this->FXManager = NULL;
    this->BuildingTickManager = NULL;
    this->WindManager = NULL;
    this->bSkipTeamReplication = false;
    this->bAllowPendingTeamChangeRequests = false;
    this->GlobalAbilityTargetingActor = NULL;
}

