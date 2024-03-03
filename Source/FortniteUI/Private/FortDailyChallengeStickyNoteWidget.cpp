#include "FortDailyChallengeStickyNoteWidget.h"



void UFortDailyChallengeStickyNoteWidget::HandleDailyQuestRerolled(const UFortQuestItem* NewQuest) {
}

UFortDailyChallengeStickyNoteWidget::UFortDailyChallengeStickyNoteWidget() {
    this->MyDailyChallengeIndex = 0;
    this->Button_RerollChallenge = NULL;
    this->RichText_ChallengeDesc = NULL;
    this->RichText_Progress = NULL;
    this->SizeBox_ContentEnforcedSize = NULL;
    this->RichText_NextChallengeTime = NULL;
    this->ConfirmationWindowClass = NULL;
}

