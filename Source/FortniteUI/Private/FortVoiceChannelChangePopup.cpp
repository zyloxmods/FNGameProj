#include "FortVoiceChannelChangePopup.h"


void UFortVoiceChannelChangePopup::HandleOpenCloseAnimationFinished() {
}

UFortVoiceChannelChangePopup::UFortVoiceChannelChangePopup() {
    this->bEnableVoiceChatNotifyEverySession = true;
    this->bToastMode = false;
    this->VisiblityInSeconds = 1;
    this->GameChannelText = FText::FromString(TEXT("Channel : Game"));
    this->PartyChannelText = FText::FromString(TEXT("Channel : Party"));
    this->JustJoinedChannelText = FText::FromString(TEXT("Joined"));
    this->StayedInChannelText = FText::FromString(TEXT("Stayed In Channel"));
    this->Anim_SimplePopup = NULL;
    this->Text_TopLine = NULL;
    this->Text_MiddleLine = NULL;
    this->Text_BottomLine = NULL;
    this->ActionButton = NULL;
    this->Button_JoinGameChat = NULL;
    this->Switcher_InputButtons = NULL;
    this->HoldKeybindWidget_Keyboard = NULL;
    this->HoldKeybindWidget_GamePad = NULL;
}

