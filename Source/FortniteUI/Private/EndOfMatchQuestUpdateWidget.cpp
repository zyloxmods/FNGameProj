#include "EndOfMatchQuestUpdateWidget.h"

void UEndOfMatchQuestUpdateWidget::TryToShowNextQuestUpdate() {
}


void UEndOfMatchQuestUpdateWidget::QuestUpdated(UFortQuestItem* InUpdateData) {
}

void UEndOfMatchQuestUpdateWidget::QuestUpdateCompleted(UAthenaChallengeRecapEntry* EntryWidget) {
}

void UEndOfMatchQuestUpdateWidget::HandleTileFocused(UCommonUserWidget* QuestEntry) {
}


UEndOfMatchQuestUpdateWidget::UEndOfMatchQuestUpdateWidget() {
    this->MaxNumQuestWidgets = 0;
    this->EntryBox_QuestUpdates = NULL;
    this->ScrollBox_Quest = NULL;
}

