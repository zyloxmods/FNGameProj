#include "AthenaBroadcastFollowedPlayerInfoBase.h"



void UAthenaBroadcastFollowedPlayerInfoBase::OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatingPC, AFortPlayerState* FollowedPlayerState) {
}


UAthenaBroadcastFollowedPlayerInfoBase::UAthenaBroadcastFollowedPlayerInfoBase() {
    this->PlayerWidget = NULL;
    this->HitPointBar_Health = NULL;
    this->HitPointBar_Shield = NULL;
    this->HitPointBar_Vehicle = NULL;
}

