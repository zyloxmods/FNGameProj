#include "AthenaLobbyBase.h"


void UAthenaLobbyBase::ShowHighlightSummary() {
}




void UAthenaLobbyBase::HandleWatchLiveStreamClicked(bool& bPassThrough) {
}

void UAthenaLobbyBase::HandlePlaylistDataChanged(const FPlaylistData& NewPlaylistData) {
}

void UAthenaLobbyBase::HandlePickerOpenRequest(EFortPickerMode Mode, int32 InitialOption, bool bIgnoreFirstAccept) {
}

void UAthenaLobbyBase::HandleGenericLinkButtonClicked() {
}

void UAthenaLobbyBase::HandleActiveWidgetChanged(UWidget* NewActiveWidget, int32 WidgetIndex) {
}



UAthenaLobbyBase::UAthenaLobbyBase() {
    this->ShownGlyphBundleUpdate = false;
    this->CurrentLobbyType = EFortLobbyType::Default;
    this->SquadFormationClass = NULL;
    this->LiveStreamVideoClass = NULL;
    this->Switcher_Matchmaking = NULL;
    this->Matchmaking_AthenaLegacy = NULL;
    this->Notice_Emergency = NULL;
    this->FortAthenaMOTDTeaserWidget_Main = NULL;
    this->LobbyDetails_Default = NULL;
    this->LobbyDetails_Tournament = NULL;
    this->LobbyDetails_ShowdownDivision = NULL;
    this->ChallengeInfo_Widget = NULL;
    this->MissionInfo_Widget = NULL;
    this->Switcher_LobbyDetailsMode = NULL;
    this->Button_GenericLink = NULL;
    this->Button_ShadowPlayHighlights = NULL;
    this->CatalogMessaging = NULL;
}

