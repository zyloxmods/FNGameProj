#include "FortQuestObjectiveInfo.h"

bool UFortQuestObjectiveInfo::IsVisibleToUser() const {
    return false;
}

bool UFortQuestObjectiveInfo::IsInProgress() const {
    return false;
}

bool UFortQuestObjectiveInfo::IsActive() const {
    return false;
}

bool UFortQuestObjectiveInfo::HasCompleted() const {
    return false;
}

UFortQuestItem* UFortQuestObjectiveInfo::GetOwningQuest() const {
    return NULL;
}

void UFortQuestObjectiveInfo::DisplayDynamicQuestUpdate() {
}

UFortQuestObjectiveInfo::UFortQuestObjectiveInfo() {
    this->StatEvent = EFortQuestObjectiveStatEvent::Kill;
    this->ItemEvent = EFortQuestObjectiveItemEvent::Craft;
    this->HudIcon = NULL;
    this->AchievedCount = 0;
    this->RequiredCount = 0;
    this->LastNotifiedCount = 0;
    this->QuestOwner = NULL;
    this->AssistedPlayerState = NULL;
    this->bIsHelper = false;
    this->bVisible = false;
    this->bActive = false;
}

