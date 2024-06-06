#include "AthenaQuickChatLeafEntry.h"

FAthenaQuickChatLeafEntry::FAthenaQuickChatLeafEntry() {
    bPopulateBrushFromContextObject = false;
    FilterType = EAthenaQuickChatFilteringType::AlwaysVisible;
    EmojiItemDefinition = NULL;
    TeamCommType = ETeamMemberState::None;
}

