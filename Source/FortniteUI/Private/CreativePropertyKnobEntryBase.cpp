#include "CreativePropertyKnobEntryBase.h"

void UCreativePropertyKnobEntryBase::SetIsModified(bool bModified) {
}

void UCreativePropertyKnobEntryBase::InternalOnEditWidgetModified(bool bModified) {
}

bool UCreativePropertyKnobEntryBase::GetIsModified() {
    return false;
}

void UCreativePropertyKnobEntryBase::ForceFocusWidget() {
}

void UCreativePropertyKnobEntryBase::DeselectEditWidget() {
}

void UCreativePropertyKnobEntryBase::ClearModified() {
}



UCreativePropertyKnobEntryBase::UCreativePropertyKnobEntryBase() {
    this->EntryEditWidget = NULL;
    this->FallbackEditWidget = NULL;
    this->FallbackUserOptionEditWidget = NULL;
    this->FallbackStringUserOptionEditWidget = NULL;
    this->FallbackMusicUserOptionEditWidget = NULL;
    this->FallbackMessageComponentEditWidget = NULL;
    this->FallbackDeviceButtonComponentEditWidget = NULL;
    this->PanelWidget_SummaryBox = NULL;
    this->PanelWidget_ContentBox = NULL;
    this->TextBlock_EntryDisplayName = NULL;
    this->TextBlock_EntryDisplayedValue = NULL;
    this->Switcher_Content = NULL;
}

