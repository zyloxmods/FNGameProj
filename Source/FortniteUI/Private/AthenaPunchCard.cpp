#include "AthenaPunchCard.h"

void UAthenaPunchCard::UpdateTimers() {
}

void UAthenaPunchCard::UpdatePunchCardFromItem() {
}

void UAthenaPunchCard::UpdatePunchCard(UFortMcpProfileAthena* McpProfile) {
}


void UAthenaPunchCard::TryToShowNextMedal() {
}



void UAthenaPunchCard::OnXPEvent(const FXPUIEvent& XPEvent) {
}

void UAthenaPunchCard::OnProfileUpdated() {
}


void UAthenaPunchCard::MedalEarned(const UFortAccoladeItemDefinition* Medal) {
}

void UAthenaPunchCard::InternalMedalPlacementFinished(int32 SlotIndex, float XpValueForSlot) {
}


UAthenaPunchCard::UAthenaPunchCard() {
    this->PunchCardLayout = EPunchType::Horizontal;
    this->DefaultPunchCardNumForNoPunchCardOnMcp = 0;
    this->EntryWidgetClass = NULL;
    this->PunchCardLocation = EPunchCardLocation::NONE;
    this->GridPanel_Accolades = NULL;
    this->Timer_Countdown = NULL;
    this->Timer_FrontendCountdown = NULL;
}

