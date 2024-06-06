#include "FortReplaySpectator.h"

void AFortReplaySpectator::SkipToSequencerShot(int32 ShotIndex) const {
}

void AFortReplaySpectator::SkipToNextSequencerShot() const {
}

bool AFortReplaySpectator::ShouldSetupUIForRecording() const {
    return false;
}

bool AFortReplaySpectator::SetOverrideTimeOfDay(bool bOverride, float Time, bool bImmediate) {
    return false;
}

void AFortReplaySpectator::SetCloudAltitudes(float NewCloudAltitude) {
}

void AFortReplaySpectator::SetCanStreamBuildingFoundationsIn(bool bCanStream) {
}

void AFortReplaySpectator::SetAllowTimeDilation(bool bAllow) {
}

void AFortReplaySpectator::SequencerLoadAndPlayFile(const FString& SequenceFileName) {
}

void AFortReplaySpectator::PlayThroughHightlightReel(const FHighlightReel& Highlights) {
}





void AFortReplaySpectator::OnShotStartGotoTimeComplete(bool bWasSuccessful) {
}

void AFortReplaySpectator::OnScrubComplete(bool bWasSuccessful) {
}

void AFortReplaySpectator::OnReplayExtractionPreScrubComplete(bool bWasSuccessful) {
}

void AFortReplaySpectator::OnPlayerStatePlacementChanged(AFortPlayerStateAthena* Sender, int32 InPlace) {
}

void AFortReplaySpectator::OnPawnForReplayRelevancyChanged(AFortPawn* NewRelevancyPawn) {
}



void AFortReplaySpectator::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void AFortReplaySpectator::OnDemoScrubComplete(bool bWasSuccessful) {
}

bool AFortReplaySpectator::HasPermissionToViewHighlights() const {
    return false;
}

UFortReplaySequenceComponent* AFortReplaySpectator::GetSequencerComponent() const {
    return NULL;
}

bool AFortReplaySpectator::AreReplayGameHighlightsAvailable() const {
    return false;
}

AFortReplaySpectator::AFortReplaySpectator() {
    PlaybackSpeedLUT.AddDefaulted(7);
    FollowedPlayerPrivate = NULL;
    OverriddenTODManager = NULL;
    SequencerComponent = NULL;
    SequencerLoadingScreenRevealTime = 1;
    bShouldUpdateReplayContextAboutSequencer = false;
    BaseSequencerRetryFindPawnGraceTime = 1;
    HighlightAnnotationTime = 1;
    ExtendedGameHighlightsTargetSeconds = 1;
    GameHighlightsTargetSeconds = 1;
    FeatureReelTargetSeconds = 1;
    HighlightShotExtraLeadTime = 1;
    UnicornDriver = NULL;
}

