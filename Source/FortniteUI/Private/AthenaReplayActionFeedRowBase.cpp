#include "AthenaReplayActionFeedRowBase.h"


void UAthenaReplayActionFeedRowBase::OnPlayerStateAdded(AFortPlayerStateAthena* FPSA) {
}


UAthenaReplayActionFeedRowBase::UAthenaReplayActionFeedRowBase() {
    this->Image_EventIcon = NULL;
    this->Text_EventTime = NULL;
    this->Button_InstigatorButton = NULL;
    this->Button_VictimButton = NULL;
    this->RowProxy = NULL;
}

