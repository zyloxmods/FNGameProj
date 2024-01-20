#include "FortVoiceSpeakerContainerWidget.h"

UFortVoiceSpeakerContainerWidget::UFortVoiceSpeakerContainerWidget() {
    this->CustomSpeakerWidgetClass = NULL;
    this->MaxSimultaneousUsers = 3;
    this->bShowIndicatorsForSquadMembers = true;
    this->bCurrentChannelDisplayEnabled = true;
    this->DynamicEntry_Speakers = NULL;
    this->Panel_ChannelContainer = NULL;
    this->Text_ChannelDisplayName = NULL;
}

