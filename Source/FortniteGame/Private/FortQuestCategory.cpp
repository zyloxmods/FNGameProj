#include "FortQuestCategory.h"

bool UFortQuestCategory::HasUnseenQuests() {
    return false;
}

int32 UFortQuestCategory::GetUnseenQuestCount() {
    return 0;
}

UFortQuestCategory::UFortQuestCategory() {
    Name = FText::FromString(TEXT("Misc"));
    bExpanded = true;
}

