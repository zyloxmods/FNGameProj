#include "FortQuestPlayButton.h"






bool UFortQuestPlayButton::CanPlayQuest() const {
    return false;
}

bool UFortQuestPlayButton::CanNavigateToQuestObjective() const {
    return false;
}

void UFortQuestPlayButton::AttemptToPlayQuest() {
}

UFortQuestPlayButton::UFortQuestPlayButton() {
    this->QuestItem = NULL;
}

