#include "FortQuestMapScreen.h"


void UFortQuestMapScreen::ToggleQuestMapState() {
}

void UFortQuestMapScreen::SetQuestMapViewer(UFortQuestMapViewer* Value) {
}

void UFortQuestMapScreen::SetIgnorePageNavigation(bool bIgnoreNavigation) {
}


void UFortQuestMapScreen::SetBeyondCutoffQuest(bool bBeyondCutoff) {
}

bool UFortQuestMapScreen::IsEventFlagActive(const FString& EventFlag) {
    return false;
}

bool UFortQuestMapScreen::IsBeyondCutoffQuest() {
    return false;
}

void UFortQuestMapScreen::InitializeQuestData() {
}

void UFortQuestMapScreen::HandleRequestCurrentQuestNavigation() {
}


void UFortQuestMapScreen::HandleQuestIndexSelectionModelChanged() {
}


void UFortQuestMapScreen::HandleMapViewerNavigationRequest(EViewerNavigationDirection Direction) {
}


void UFortQuestMapScreen::HandleEventQuestMapActivate() {
}


EFrontEndCamera UFortQuestMapScreen::GetCurrentPageCameraMode() const {
    return EFrontEndCamera::Invalid;
}

bool UFortQuestMapScreen::GetBeyondCutoffQuest() const {
    return false;
}

void UFortQuestMapScreen::CheckForNewMainQuest() {
}

UFortQuestMapScreen::UFortQuestMapScreen() {
    this->CampaignDetailsPanel = NULL;
    this->EventDetailsPanel = NULL;
    this->EventCalloutPanel = NULL;
    this->QuestMapViewer = NULL;
    this->CurrentMode = EQuestMapScreenMode::Invalid;
    this->CutoffQuest = NULL;
    this->QuestMapData = NULL;
}

