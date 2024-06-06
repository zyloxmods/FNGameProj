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
    StatEvent = EFortQuestObjectiveStatEvent::Kill;
    ItemEvent = EFortQuestObjectiveItemEvent::Craft;
    HudIcon = NULL;
    AchievedCount = 0;
    RequiredCount = 0;
    LastNotifiedCount = 0;
    LastKnownMCPCount = 0;
    QuestOwner = NULL;
    AssistPlayerState = NULL;
    bIsHelper = false;
    bVisible = false;
    bActive = false;
}

