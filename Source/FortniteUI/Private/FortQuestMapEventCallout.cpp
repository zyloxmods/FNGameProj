#include "FortQuestMapEventCallout.h"

void UFortQuestMapEventCallout::UpdateGoButtonBangState(bool bClear) {
}

void UFortQuestMapEventCallout::UpdateCalloutData() {
}

void UFortQuestMapEventCallout::SetIsFaded(bool Faded) {
}

void UFortQuestMapEventCallout::SetIsExpanded(bool Expanded) {
}

void UFortQuestMapEventCallout::ResetCallout() {
}

void UFortQuestMapEventCallout::PlayFadeOut() {
}

void UFortQuestMapEventCallout::PlayFadeIn() {
}






bool UFortQuestMapEventCallout::IsCurrentEventUnlocked() const {
    return false;
}

UFortQuestItemDefinition* UFortQuestMapEventCallout::GetRequiredQuestForCurrentEvent() const {
    return NULL;
}

bool UFortQuestMapEventCallout::GetIsFaded() const {
    return false;
}

bool UFortQuestMapEventCallout::GetIsExpanded() const {
    return false;
}

int32 UFortQuestMapEventCallout::GetEventCount() const {
    return 0;
}

void UFortQuestMapEventCallout::DeactivateCallout() {
}

UFortQuestMapEventCallout::UFortQuestMapEventCallout() {
    this->BangWrapper_GoButton = NULL;
    this->Button_LeftNav = NULL;
    this->Button_RightNav = NULL;
    this->Button_SwitchMode = NULL;
    this->BangWrapper_Arrow = NULL;
    this->Sequence_EventProgress = NULL;
    this->HorizontalBox_NavButtons = NULL;
    this->Text_Header = NULL;
    this->Text_Body = NULL;
    this->Image_Callout = NULL;
    this->BangWrapper_UnHover = NULL;
    this->DefaultSound = NULL;
    this->DefaultRequiredCompletedQuest = NULL;
    this->OverrideSound = NULL;
    this->SoundLoop = NULL;
    this->QuestMapData = NULL;
}

