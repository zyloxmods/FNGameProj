#include "FortTimelineBase.h"

void UFortTimelineBase::HandleReplayTimelineMarkerAdded(EFortReplayEventType EventType, float RelativeTime, int32 EventIndex) {
}

void UFortTimelineBase::HandleReplayTimelineChanged(float StartTime, float EndTime) {
}

void UFortTimelineBase::HandleReplayTimeChanged(float ReplayTime) {
}

void UFortTimelineBase::HandleReplayHudVisibilityChanged(EHudVisibilityState VisibilityState) {
}

UFortTimelineBase::UFortTimelineBase() {
    this->TimelineMarkerClass = NULL;
    this->Slider_Gamepad = NULL;
    this->ProgressBar_TimeElapsed = NULL;
    this->Text_CurrentTime = NULL;
    this->Text_EndTime = NULL;
    this->CanvasPanel_Markers = NULL;
    this->Overlay_ProgressBar = NULL;
}

