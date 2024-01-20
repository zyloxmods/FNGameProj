#include "AthenaPlayerInfoBase.h"

void UAthenaPlayerInfoBase::UpdateResurrectionExpirationWidget() {
}


void UAthenaPlayerInfoBase::SetPlayerState(AFortPlayerStateAthena* InPlayerState) {
}

void UAthenaPlayerInfoBase::SendEpicFriendInvite() {
}


void UAthenaPlayerInfoBase::OnPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}





void UAthenaPlayerInfoBase::HandleSpectatingChanged(AFortPlayerStateZone* NewSpectatingTarget) {
}



UAthenaPlayerInfoBase::UAthenaPlayerInfoBase() {
    this->PlayerState = NULL;
    this->Image_HealthBar = NULL;
    this->Image_ShieldBar = NULL;
    this->Image_DBNOBar = NULL;
    this->Image_PlatformIcon = NULL;
    this->Text_PlayerName = NULL;
    this->Image_Marker = NULL;
    this->DBNOStateWidget = NULL;
    this->Image_DeadIndicator = NULL;
    this->Image_DisconnectedIndicator = NULL;
    this->Image_ResurrectChip = NULL;
    this->Image_ResurrectionChipExpirationBar = NULL;
    this->SpeakerWidget = NULL;
}

