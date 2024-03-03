#include "BattlePassRewardPagedTrack.h"


UBattlePassRewardPagedTrack::UBattlePassRewardPagedTrack() {
    this->UpdateItemCardsDelay = 1;
    this->LastPageIndex = 0;
    this->PageIndex = 0;
    this->PagesHidden = 0;
    this->LocalFocusedIndex = 0;
    this->FocusReward = NULL;
    this->DefaultFocusReward = NULL;
    this->EntryBox_Rewards = NULL;
    this->Button_NextPage = NULL;
    this->Button_PreviousPage = NULL;
    this->EntryBox_Pips = NULL;
    this->Text_PageNumbers = NULL;
    this->ButtonGroup_Pips = NULL;
    this->SwipePanel_ChangePage = NULL;
}

