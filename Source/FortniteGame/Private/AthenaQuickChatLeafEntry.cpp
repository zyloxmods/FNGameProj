#include "AthenaQuickChatLeafEntry.h"

FAthenaQuickChatLeafEntry::FAthenaQuickChatLeafEntry() {
    this->bPopulateBrushFromContextObject = false;
    this->FilterType = EAthenaQuickChatFilteringType::AlwaysVisible;
    this->EmojiItemDefinition = NULL;
    this->TeamCommType = ETeamMemberState::None;
}

