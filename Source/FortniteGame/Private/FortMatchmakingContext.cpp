#include "FortMatchmakingContext.h"

void UFortMatchmakingContext::StartWargameSimulationAssist(float MinMissionDifficulty, float MaxMissionDifficulty) {
}

void UFortMatchmakingContext::StartStormShieldExpansionAssist(float MinMissionDifficulty, float MaxMissionDifficulty) {
}

void UFortMatchmakingContext::StartQuickPlay(float MinMissionDifficulty, float MaxMissionDifficulty) {
}

bool UFortMatchmakingContext::StartOnboardingMission() {
    return false;
}

void UFortMatchmakingContext::StartMatchmaking() {
}

void UFortMatchmakingContext::StartCriticalMission(float MinMissionDifficulty, float MaxMissionDifficulty) {
}

void UFortMatchmakingContext::SetMatchmakingFlowActive(bool InFlow) {
}

void UFortMatchmakingContext::SetCustomMatchmakingKey(const FString& Key) {
}

void UFortMatchmakingContext::ReadyUp() {
}

bool UFortMatchmakingContext::NeedToCheckRejoinStatus() {
    return false;
}

bool UFortMatchmakingContext::JoinFromLobby() {
    return false;
}

bool UFortMatchmakingContext::IsWorldRecordLoaded() {
    return false;
}

bool UFortMatchmakingContext::IsWaitingOnUpdateManager() {
    return false;
}

bool UFortMatchmakingContext::IsOutpostPermitted() const {
    return false;
}

bool UFortMatchmakingContext::IsMatchmakingLocal() const {
    return false;
}

bool UFortMatchmakingContext::IsMatchmakingFlowActive() const {
    return false;
}

bool UFortMatchmakingContext::IsJoinableGameAvailable() {
    return false;
}

bool UFortMatchmakingContext::IsInputBasedMatchmakingEnabled() const {
    return false;
}

bool UFortMatchmakingContext::IsInLobby() const {
    return false;
}

bool UFortMatchmakingContext::IsCustomMatchmakingKeyEnabled() const {
    return false;
}

bool UFortMatchmakingContext::IsConnectedToGame() const {
    return false;
}

bool UFortMatchmakingContext::HasBroadcasterToken() const {
    return false;
}

FText UFortMatchmakingContext::GetMatchmakingFillText(bool bDesiredFill) {
    return FText::GetEmpty();
}

float UFortMatchmakingContext::GetLobbyWaitForPlayersTimeRemaining() {
    return 0.0f;
}

AFortLobbyBeaconClient* UFortMatchmakingContext::GetLobbyBeaconClient() const {
    return NULL;
}

FText UFortMatchmakingContext::GetLegacyNonInputBasedPlayAgainstText() {
    return FText::GetEmpty();
}

ECommonInputType UFortMatchmakingContext::GetInputBasedMatchmakingPool(bool& bIsDefaultPool, bool& bEntirePartyUsingTargetPoolInput) {
    return ECommonInputType::MouseAndKeyboard;
}

FString UFortMatchmakingContext::GetCustomMatchmakingKey() const {
    return TEXT("");
}

void UFortMatchmakingContext::EnterOutpost() {
}

void UFortMatchmakingContext::DisplayAntiTaxiError() {
}

void UFortMatchmakingContext::DisconnectFromLobby() {
}

void UFortMatchmakingContext::CheckRejoinStatus() {
}

void UFortMatchmakingContext::CancelMatchmaking() {
}

UFortMatchmakingContext::UFortMatchmakingContext() {
    bMatchmakingFlowActive = false;
}

