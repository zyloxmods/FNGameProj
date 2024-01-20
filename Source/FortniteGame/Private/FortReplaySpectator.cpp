#include "FortReplaySpectator.h"

bool AFortReplaySpectator::SetOverrideTimeOfDay(bool bOverride, float Time, bool bImmediate) {
    return false;
}

void AFortReplaySpectator::SetCloudAltitudes(float NewCloudAltitude) {
}

void AFortReplaySpectator::SetCanStreamBuildingFoundationsIn(bool bCanStream) {
}

void AFortReplaySpectator::SetAllowTimeDilation(bool bAllow) {
}





void AFortReplaySpectator::OnShotStartGotoTimeComplete(bool bWasSuccessful) {
}

void AFortReplaySpectator::OnScrubComplete(bool bWasSuccessful) {
}

void AFortReplaySpectator::OnPawnForReplayRelevancyChanged(AFortPawn* NewRelevancyPawn) {
}



void AFortReplaySpectator::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void AFortReplaySpectator::OnDemoScrubComplete(bool bWasSuccessful) {
}

bool AFortReplaySpectator::IsUnicornVideoRecordingActive() const {
    return false;
}

UFortReplaySequenceComponent* AFortReplaySpectator::GetSequencerComponent() const {
    return NULL;
}

void AFortReplaySpectator::EnableStableReplayPlayback() {
}

AFortReplaySpectator::AFortReplaySpectator() {
    this->PlaybackSpeedLUT.AddDefaulted(7);
    this->FollowedPlayerPrivate = NULL;
    this->OverriddenTODManager = NULL;
    this->SequencerComponent = NULL;
}

