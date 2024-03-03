#include "FortSquadManagementScreenBase.h"

bool UFortSquadManagementScreenBase::TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData) const {
    return false;
}

bool UFortSquadManagementScreenBase::TryGetSquadTeamAttribute(FGameplayAttribute& OutGameplayAttribute) const {
    return false;
}

bool UFortSquadManagementScreenBase::TryGetSquadMainAttribute(FGameplayAttribute& OutGameplayAttribute) const {
    return false;
}

bool UFortSquadManagementScreenBase::TryGetAttributeValueFromSquad(float& OutValue, const FGameplayAttribute& Attribute) const {
    return false;
}


void UFortSquadManagementScreenBase::SetupInputHandlers() {
}

void UFortSquadManagementScreenBase::SetIdOfSquadToManageBP(const FName SquadId) {
}

void UFortSquadManagementScreenBase::SelectSquadWithOffset(int32 Offset) {
}

void UFortSquadManagementScreenBase::SelectPreviousSquad() {
}

void UFortSquadManagementScreenBase::SelectNextSquad() {
}

void UFortSquadManagementScreenBase::NavigateToSquadSlot(int32 SquadSlotIndex) {
}

bool UFortSquadManagementScreenBase::IsScreenWIFE() const {
    return false;
}

void UFortSquadManagementScreenBase::HandleViewInAll(const int32 SquadSlotIndex) {
}




void UFortSquadManagementScreenBase::HandleShouldAutoSlotSurvivorSquadsChanged() {
}

void UFortSquadManagementScreenBase::HandleSelectPickerSlotInputAction() {
}


void UFortSquadManagementScreenBase::HandlePickerSelectionCommitted(UFortItem* CommittedItem) {
}

void UFortSquadManagementScreenBase::HandlePickerSelectionChanged(UFortItem* SelectedItem) {
}

void UFortSquadManagementScreenBase::HandleOpenSquadSlot(const int32 SquadSlotIndex) {
}


void UFortSquadManagementScreenBase::HandleManageInputAction() {
}

void UFortSquadManagementScreenBase::HandleInventoryInputAction() {
}

void UFortSquadManagementScreenBase::HandleInspectInputAction() {
}

void UFortSquadManagementScreenBase::HandleDifferentSquadSlotSelected(const int32 SquadSlotIndex) {
}


void UFortSquadManagementScreenBase::HandleCyclePickerSortInputAction() {
}

void UFortSquadManagementScreenBase::HandleClosePickerInputAction() {
}

void UFortSquadManagementScreenBase::HandleBackInputAction() {
}

int32 UFortSquadManagementScreenBase::GetNumUnlockedSquads() const {
    return 0;
}

FName UFortSquadManagementScreenBase::GetIdOfSquadToManageBP() const {
    return NAME_None;
}

void UFortSquadManagementScreenBase::ClearSquad() {
}

UFortSquadManagementScreenBase::UFortSquadManagementScreenBase() {
    this->bReadOnlyModeWIFE = false;
    this->SquadStatsWidget = NULL;
    this->SquadSlotsView = NULL;
    this->SelectedSlotDetailsPanel = NULL;
    this->SelectedSlotItemPicker = NULL;
    this->DisableAutoSlottingToClearSquadPromptAction = NULL;
    this->ItemViewContext_SquadSlotsView = NULL;
    this->ItemViewContext_SquadSlotItemPicker = NULL;
}

