#include "AthenaMinigameActivityWidget.h"







UAthenaMinigameActivityWidget::UAthenaMinigameActivityWidget() {
    this->ScoreFormat = FText::FromString(TEXT("{CurrentScore}/{TotalScore}"));
    this->AddTimeFormat = FText::FromString(TEXT("{Seconds}s"));
    this->Text_ActivityName = NULL;
    this->Text_Stat = NULL;
    this->Text_AddTime = NULL;
    this->Text_Score = NULL;
    this->bMinigameActive = false;
}

