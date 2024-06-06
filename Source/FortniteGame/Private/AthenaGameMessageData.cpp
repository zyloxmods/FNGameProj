#include "AthenaGameMessageData.h"

FAthenaGameMessageData::FAthenaGameMessageData() {
    MsgType = EAthenaGameMsgType::None;
    MsgSound = NULL;
    MsgDelay = 1;
    bIsTeamBased = false;
    TeamIndex = 0;
    DisplayTime = 1;
    TargetPlayerController = NULL;
}

