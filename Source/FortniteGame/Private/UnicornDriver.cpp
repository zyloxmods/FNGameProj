#include "UnicornDriver.h"
#include "UnicornSocialComponent.h"
#include "UnicornWebAPIComponent.h"

void AUnicornDriver::UnicornStopStreamRecording() {
}

void AUnicornDriver::UnicornStartStreamRecording() {
}

void AUnicornDriver::UnicornStartStreamPlaybackToNow() {
}

void AUnicornDriver::UnicornStartStreamPlayback() {
}

void AUnicornDriver::UnicornSetLoggingEnabled(bool bEnabled) {
}

void AUnicornDriver::UnicornResetAll() {
}

void AUnicornDriver::UnicornPlayUnionAllPlayersHighlights(uint8 ReelId, uint8 MessageSettings, bool bExportSequenceFile) {
}

void AUnicornDriver::UnicornPlayTopHighlights(int32 NumHighlights, uint8 ReelId, uint8 MessageSetting, bool bExportSequenceFile) {
}

void AUnicornDriver::UnicornPlayTopEliminationHighlights(int32 NumHighlights, uint8 ReelId) {
}

void AUnicornDriver::UnicornPlayThroughPlayerHighlightReel(uint8 ReelId, uint8 MessageSettings, bool bExportSequenceFile) {
}

void AUnicornDriver::UnicornPlayOrderedHighlightsWithSocialFeature(int32 FeatureAsInt, uint8 ReelId) {
}

void AUnicornDriver::UnicornPlayOrderedHighlightsWithFeature(int32 FeatureAsInt, uint8 ReelId) {
}

void AUnicornDriver::UnicornPlayLastEliminationHighlights(int32 NumHighlights, uint8 ReelId) {
}

void AUnicornDriver::UnicornPlayHighlight(int32 HighlightId) {
}

void AUnicornDriver::UnicornFollowPlayerWithHighlight(int32 HighlightId) {
}

void AUnicornDriver::UnicornFakeAndUploadAndShutdown(int32 NumHighlights) {
}

void AUnicornDriver::UnicornFakeAndUpload(int32 NumHighlights) {
}

void AUnicornDriver::UnicornDebugUploadPayloadFile() {
}

void AUnicornDriver::UnicornDebugPlayerWithIdString(const FString& PlayerIdString) {
}

void AUnicornDriver::UnicornDebugHighlightTime(int32 HighlightId) {
}

void AUnicornDriver::UnicornDebugHighlight(int32 HighlightId) {
}

void AUnicornDriver::UnicornDebugCurrentReplayPlayer() {
}

void AUnicornDriver::UnicornDebugCurrentPlayerSampler() {
}

void AUnicornDriver::UnicornDebugCurrentPlayerPlayerLog() {
}

void AUnicornDriver::UnicornCreateAndPlayServerGameHighlights(int32 TargetSeconds, uint8 ReelId, uint8 MessageSetting, bool bExportSequenceFile) {
}

void AUnicornDriver::UnicornClearDebugPlayer() {
}

void AUnicornDriver::RunHighlightExtractors() {
}

void AUnicornDriver::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void AUnicornDriver::HandleDemoRecordingFinish(UWorld* InWorld) {
}

void AUnicornDriver::HandleDemoPlaybackFinish(UWorld* InWorld) {
}

AUnicornDriver::AUnicornDriver() {
    this->bEnable_MainHighlightReel = true;
    this->bEnable_ShorterExtendedHighlightReel = false;
    this->bEnable_ShortHighlightReel = false;
    this->bEnable_ShortExtendedHighlightReel = true;
    this->bEnable_MediumHighlightReel = false;
    this->bEnable_MediumExtendedighlightReel = true;
    this->bEnable_PlayerSpotlightReel = true;
    this->bEnable_PlayerSpotlightNoDeathsReel = true;
    this->bEnable_VATReel = true;
    this->ShorterReelMaxClipDuration = 1;
    this->ShorterReelMaxLookback = 1;
    this->ShorterReelMaxTailTime = 1;
    this->ShorterReelEliminationLookbackTime = 1;
    this->ShortReelMaxClipDuration = 1;
    this->ShortReelMaxLookback = 1;
    this->ShortReelMaxTailTime = 1;
    this->ShortReelEliminationLookbackTime = 1;
    this->ShortExtendedReelMaxClipDuration = 1;
    this->ShortExtendedReelMaxLookback = 1;
    this->ShortExtendedReelMaxTailTime = 1;
    this->ShortExtendedReelEliminationLookbackTime = 1;
    this->MediumReelMaxClipDuration = 1;
    this->MediumReelMaxLookback = 1;
    this->MediumReelMaxTailTime = 1;
    this->MediumExtendedReelMaxClipDuration = 1;
    this->MediumExtendedReelMaxLookback = 1;
    this->MediumExtendedReelMaxTailTime = 1;
    this->VATReelEliminationLookbackTime = 1;
    this->MaxHighlightsToSave = 0;
    this->MinHighlightScore = 1;
    this->DefaultShotLeadTime = 1;
    this->DefaultShotTailTime = 1;
    this->HighlightAnnotationTime = 1;
    this->MinimumPlacementForHighlight = 0;
    this->SocialComponent = CreateDefaultSubobject<UUnicornSocialComponent>(TEXT("UnicornSocial"));
    this->WebAPIComponent = CreateDefaultSubobject<UUnicornWebAPIComponent>(TEXT("UnicornWeb"));
    this->bShouldUploadHighlightsPayload = true;
}

