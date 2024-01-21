#include "DiscoCaptureWidgetBase.h"

void UDiscoCaptureWidgetBase::UpdateDiscoCaptureUI() {
}

void UDiscoCaptureWidgetBase::UpdateAllUI() {
}


void UDiscoCaptureWidgetBase::OnHandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget) {
}

AAthenaCapturePoint* UDiscoCaptureWidgetBase::GetClosestCapturePoint(AFortPlayerPawnAthena* ViewPawn) {
    return NULL;
}

UDiscoCaptureWidgetBase::UDiscoCaptureWidgetBase() {
    this->LastViewedTeam = 0;
}

