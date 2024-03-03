#include "ArgonWidgetBase.h"


void UArgonWidgetBase::SetPlayerPortrait(AFortPlayerStateAthena* Player, UFortLazyImage* PortraitImage) const {
}

TArray<AFortPlayerStateAthena*> UArgonWidgetBase::GetTeamPlayerStates(uint8 Team) const {
    return TArray<AFortPlayerStateAthena*>();
}


UArgonWidgetBase::UArgonWidgetBase() {
    this->ArgonMutator = NULL;
}

