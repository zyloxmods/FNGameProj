#include "AthenaGameMessageData.h"

FAthenaGameMessageData::FAthenaGameMessageData() {
    this->MsgType = EAthenaGameMsgType::None;
    this->MsgSound = NULL;
    this->MsgDelay = 1;
    this->bIsTeamBased = false;
    this->TeamIndex = 0;
    this->DisplayTime = 1;
    this->TargetPlayerController = NULL;
}

