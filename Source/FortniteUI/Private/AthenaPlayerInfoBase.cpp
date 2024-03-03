#include "AthenaPlayerInfoBase.h"

void UAthenaPlayerInfoBase::SetPlayerState(AFortPlayerStateAthena* InPlayerState) {
}

void UAthenaPlayerInfoBase::HandlePlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

void UAthenaPlayerInfoBase::HandlePlayerMutatorDataChanged() {
}

void UAthenaPlayerInfoBase::HandleGamePhaseChanged(EAthenaGamePhase NewPhase) {
}












UAthenaPlayerInfoBase::UAthenaPlayerInfoBase() {
    this->bIsLocalPlayer = false;
    this->Image_HealthBar = NULL;
    this->Image_ShieldBar = NULL;
    this->Content_StormCN = NULL;
    this->Image_StormCN = NULL;
    this->Image_DBNOBar = NULL;
    this->Image_PlatformIcon = NULL;
    this->Text_PlayerName = NULL;
    this->Image_Marker = NULL;
    this->DBNOStateWidget = NULL;
    this->Image_DeadIndicator = NULL;
    this->Image_DisconnectedIndicator = NULL;
    this->Image_ResurrectChip = NULL;
    this->Image_ResurrectionChipExpirationBar = NULL;
    this->WidgetSwitcher_Avatar = NULL;
    this->Icon_AvatarSocial = NULL;
    this->Image_AvatarOverride = NULL;
    this->SpeakerWidgetAnim = NULL;
    this->LevelEffects = NULL;
}

