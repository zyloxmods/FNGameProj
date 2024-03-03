#include "QuestRequirement.h"

FQuestRequirement::FQuestRequirement() {
    this->QuestDef = NULL;
    this->DesiredState = EFortQuestState::Inactive;
}

