#include "FortVoiceSpeakerContainerWidget.h"

UFortVoiceSpeakerContainerWidget::UFortVoiceSpeakerContainerWidget() {
    this->CustomSpeakerWidgetClass = NULL;
    this->MaxSimultaneousUsers = 0;
    this->bShowIndicatorsForSquadMembers = false;
    this->bCurrentChannelDisplayEnabled = true;
    this->DynamicEntry_Speakers = NULL;
    this->Panel_ChannelContainer = NULL;
    this->Text_ChannelDisplayName = NULL;
}

