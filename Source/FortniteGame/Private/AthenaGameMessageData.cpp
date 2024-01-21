#include "AthenaGameMessageData.h"

FAthenaGameMessageData::FAthenaGameMessageData() {
    this->MsgType = EAthenaGameMsgType::None;
    this->MsgSound = NULL;
    this->MsgDelay = 0.00f;
    this->bIsTeamBased = false;
    this->TeamIndex = 0;
    this->DisplayTime = 0.00f;
}

