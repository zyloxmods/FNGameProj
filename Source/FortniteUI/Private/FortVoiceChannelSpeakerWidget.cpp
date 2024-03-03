#include "FortVoiceChannelSpeakerWidget.h"



void UFortVoiceChannelSpeakerWidget::HandleAnimationFinished() {
}

UFortVoiceChannelSpeakerWidget::UFortVoiceChannelSpeakerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ToleratedSilenceDelay = 1;
    this->PerfUpdateIntervalInSecs = 1;
    this->OpenCloseAnimProxyDuration = 1;
    this->bPerfCollapseHorizontal = true;
    this->TalkingAnimProxyDuration = 1;
    this->Anim_Close = NULL;
    this->Anim_Open = NULL;
    this->Text_DisplayName = NULL;
    this->Border_ScaleBound = NULL;
    this->AvatarIcon = NULL;
    this->Image_ActiveVoiceIcon = NULL;
}

