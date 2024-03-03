#include "FortShowdownScreen.h"




void UFortShowdownScreen::NavigateTournamentRight() {
}

void UFortShowdownScreen::NavigateTournamentLeft() {
}

void UFortShowdownScreen::HandleSelectedTileChanged(UCommonButton* Button, int32 ButtonIndex) {
}

UFortShowdownScreen::UFortShowdownScreen() {
    this->HypeLeaderboardScreenClass = NULL;
    this->TileItemClass = NULL;
    this->TournamentModalClass = NULL;
    this->TournamentTileGroup = NULL;
    this->ScrollBox_TournamentList = NULL;
    this->Button_Details = NULL;
    this->CommonTextBlock_RegionText = NULL;
}

