#include "LTMWidgetBase.h"



void ULTMWidgetBase::OnHandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget) {
}

void ULTMWidgetBase::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}




uint8 ULTMWidgetBase::GetViewingTeam() const {
    return 0;
}

AFortPlayerStateAthena* ULTMWidgetBase::GetViewingPlayerState() const {
    return NULL;
}

ULTMWidgetBase::ULTMWidgetBase() {
    this->MutatorClassToWaitFor = NULL;
}

