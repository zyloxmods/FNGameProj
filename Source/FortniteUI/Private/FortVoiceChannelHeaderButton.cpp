#include "FortVoiceChannelHeaderButton.h"


bool UFortVoiceChannelHeaderButton::IsActiveChannel() const {
    return false;
}

bool UFortVoiceChannelHeaderButton::CanJoinChannel() const {
    return false;
}

UFortVoiceChannelHeaderButton::UFortVoiceChannelHeaderButton() {
    this->Text_ChannelTitle = NULL;
    this->Text_ChannelInfo = NULL;
}

