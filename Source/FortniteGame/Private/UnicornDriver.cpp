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
    bEnable_MainHighlightReel = true;
    bEnable_ShorterExtendedHighlightReel = false;
    bEnable_ShortHighlightReel = false;
    bEnable_ShortExtendedHighlightReel = true;
    bEnable_MediumHighlightReel = false;
    bEnable_MediumExtendedighlightReel = true;
    bEnable_PlayerSpotlightReel = true;
    bEnable_PlayerSpotlightNoDeathsReel = true;
    bEnable_VATReel = true;
    ShorterReelMaxClipDuration = 1;
    ShorterReelMaxLookback = 1;
    ShorterReelMaxTailTime = 1;
    ShorterReelEliminationLookbackTime = 1;
    ShortReelMaxClipDuration = 1;
    ShortReelMaxLookback = 1;
    ShortReelMaxTailTime = 1;
    ShortReelEliminationLookbackTime = 1;
    ShortExtendedReelMaxClipDuration = 1;
    ShortExtendedReelMaxLookback = 1;
    ShortExtendedReelMaxTailTime = 1;
    ShortExtendedReelEliminationLookbackTime = 1;
    MediumReelMaxClipDuration = 1;
    MediumReelMaxLookback = 1;
    MediumReelMaxTailTime = 1;
    MediumExtendedReelMaxClipDuration = 1;
    MediumExtendedReelMaxLookback = 1;
    MediumExtendedReelMaxTailTime = 1;
    VATReelEliminationLookbackTime = 1;
    MaxHighlightsToSave = 0;
    MinHighlightScore = 1;
    DefaultShotLeadTime = 1;
    DefaultShotTailTime = 1;
    HighlightAnnotationTime = 1;
    MinimumPlacementForHighlight = 0;
    SocialComponent = CreateDefaultSubobject<UUnicornSocialComponent>(TEXT("UnicornSocial"));
    WebAPIComponent = CreateDefaultSubobject<UUnicornWebAPIComponent>(TEXT("UnicornWeb"));
    bShouldUploadHighlightsPayload = true;
}

