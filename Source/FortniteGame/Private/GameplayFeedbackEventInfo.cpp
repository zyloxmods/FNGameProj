#include "GameplayFeedbackEventInfo.h"

FGameplayFeedbackEventInfo::FGameplayFeedbackEventInfo() {
    this->MsgType = EAthenaGameMsgType::None;
    this->bTeamBasedEvent = false;
}

