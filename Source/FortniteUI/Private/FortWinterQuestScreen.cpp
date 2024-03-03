#include "FortWinterQuestScreen.h"





void UFortWinterQuestScreen::HandleOnQuestsGranted(const TArray<UFortQuestItem*>& Quests) {
}

UFortWinterQuestScreen::UFortWinterQuestScreen() {
    this->PurchaseScreenInstance = NULL;
    this->ChallengeModalInstance = NULL;
    this->GiftingScreenInstance = NULL;
    this->Button_MoreInfo = NULL;
    this->Button_CloseScreen = NULL;
    this->Button_Back = NULL;
    this->Button_Spoilers = NULL;
    this->WinterQuestIntroScreen = NULL;
    this->WinterQuestLobbyHeader = NULL;
    this->WinterQuestPreviewScreen = NULL;
    this->WinterQuestUnlockedScreen = NULL;
    this->WinterQuestPresentScreen = NULL;
    this->WinterQuestStockingScreen = NULL;
    this->WinterQuestTreeScreen = NULL;
    this->WinterQuestPresentCounter = NULL;
    this->WinterQuestDayCounter = NULL;
}

