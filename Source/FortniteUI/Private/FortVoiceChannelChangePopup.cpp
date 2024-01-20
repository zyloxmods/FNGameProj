#include "FortVoiceChannelChangePopup.h"

void UFortVoiceChannelChangePopup::SetToast(UFortUINotification* ToastNotification) {
}



void UFortVoiceChannelChangePopup::HandleOpenCloseAnimationFinished() {
}

UFortVoiceChannelChangePopup::UFortVoiceChannelChangePopup() : UUserWidget(FObjectInitializer::Get()) {
    this->bDisplayStayInPartyChannelNotification = false;
    this->VisiblityInSeconds = 12.00f;
    this->GameChannelText = FText::FromString(TEXT("Channel : Game"));
    this->PartyChannelText = FText::FromString(TEXT("Channel : Party"));
    this->JustJoinedChannelText = FText::FromString(TEXT("Joined"));
    this->StayedInChannelText = FText::FromString(TEXT("Stayed In Channel"));
    this->Anim_SimplePopup = NULL;
    this->Text_ChannelName = NULL;
    this->Text_AutomaticActionDescription = NULL;
    this->Text_DescriptionText = NULL;
}

