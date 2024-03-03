#include "FortSubgameSelectScreen.h"

void UFortSubgameSelectScreen::HandleOnPartyLeft() {
}

void UFortSubgameSelectScreen::HandleOnMatchmakingComplete(EMatchmakingCompleteResult Result) {
}

UFortSubgameSelectScreen::UFortSubgameSelectScreen() {
    this->SelectedTile = NULL;
    this->LeavingPartyOrMatchmakingModalInstance = NULL;
    this->Sound_OnActivated = NULL;
    this->Sound_OnSelectedSubGame = NULL;
    this->BoundAnim_Intro = NULL;
    this->BoundAnim_Outro = NULL;
    this->SelectModeIdle = NULL;
    this->Image_SpinnerImage = NULL;
    this->XboxOneProfileWidget_ProfileDisplay = NULL;
    this->SubgameTile_BattleRoyale = NULL;
    this->SubgameTile_Creative = NULL;
    this->SubgameTile_Campaign = NULL;
    this->CampaignPurchaseScreenClass = NULL;
    this->LeavingPartyOrMatchmakingModal = NULL;
    this->LoadingContentModal = NULL;
}

