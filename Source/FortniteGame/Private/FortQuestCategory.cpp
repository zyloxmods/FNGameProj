#include "FortQuestCategory.h"

bool UFortQuestCategory::HasUnseenQuests() {
    return false;
}

int32 UFortQuestCategory::GetUnseenQuestCount() {
    return 0;
}

UFortQuestCategory::UFortQuestCategory() {
    this->Name = FText::FromString(TEXT("Misc"));
    this->bExpanded = true;
}

