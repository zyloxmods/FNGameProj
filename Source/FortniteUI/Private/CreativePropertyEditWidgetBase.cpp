#include "CreativePropertyEditWidgetBase.h"

void UCreativePropertyEditWidgetBase::SetIsModified(bool bModified) {
}

FText UCreativePropertyEditWidgetBase::GetStepperLabelForIndex(const int32 Index) {
    return FText::GetEmpty();
}

bool UCreativePropertyEditWidgetBase::GetIsModified() {
    return false;
}

FText UCreativePropertyEditWidgetBase::GetEntryDisplayValue() {
    return FText::GetEmpty();
}

FText UCreativePropertyEditWidgetBase::GetEntryDisplayName() {
    return FText::GetEmpty();
}

FText UCreativePropertyEditWidgetBase::GetEntryDescriptionText() {
    return FText::GetEmpty();
}




UCreativePropertyEditWidgetBase::UCreativePropertyEditWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->CurrentIndexInStepperValue = 0;
    this->Button_Collapse = NULL;
}

