#include "AthenaLobbyBase.h"



void UAthenaLobbyBase::ShowHighlightSummary() {
}





void UAthenaLobbyBase::HandleSquadFormationClicked(bool& bPassThrough) {
}

void UAthenaLobbyBase::HandlePlaylistDataChanged(const FPlaylistData& NewPlaylistData) {
}

void UAthenaLobbyBase::HandleNewsClicked(bool& bPassThrough) {
}

void UAthenaLobbyBase::HandleGenericLinkButtonClicked() {
}

void UAthenaLobbyBase::HandleEmoteClicked(bool& bPassThrough) {
}

void UAthenaLobbyBase::HandleActiveWidgetChanged(UWidget* NewActiveWidget, int32 WidgetIndex) {
}



UAthenaLobbyBase::UAthenaLobbyBase() {
    this->ShownGlyphBundleUpdate = false;
    this->bIsSwitchingLevels = false;
    this->CurrentLobbyType = EFortLobbyType::Default;
    this->NewsModalClass = NULL;
    this->SquadFormationClass = NULL;
    this->Matchmaking_Athena = NULL;
    this->Notice_Emergency = NULL;
    this->LobbyDetails_Default = NULL;
    this->LobbyDetails_Tournament = NULL;
    this->LobbyDetails_ShowdownDivision = NULL;
    this->ChallengeInfo_Widget = NULL;
    this->Switcher_LobbyDetailsMode = NULL;
    this->Button_GenericLink = NULL;
    this->Button_ShadowPlayHighlights = NULL;
    this->Button_ShareFriendCode = NULL;
    this->CatalogMessaging = NULL;
}

