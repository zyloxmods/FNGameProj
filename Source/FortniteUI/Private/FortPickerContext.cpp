#include "FortPickerContext.h"

bool UFortPickerContext::UseLeftThumbstick() const {
    return false;
}

void UFortPickerContext::ShowRadialPickerMenu(EFortPickerToDisplay PickerType, int32 WheelIndex, UObject* ContextObject) {
}

void UFortPickerContext::SetFortPickerData(UFortPickerData* Data) {
}

void UFortPickerContext::RestoreInputAxes() {
}

void UFortPickerContext::PickerOptionAccepted(int32 Option) {
}

void UFortPickerContext::PickerCanceled() {
}

void UFortPickerContext::LegacySwitchToAdjacentWheel(int32 SelectionDirection) {
}

void UFortPickerContext::GetRadialPickerOptionItem(int32 Index, UFortItem*& Item, bool& bOptionEnabled) const {
}

void UFortPickerContext::GetRadialPickerOptionImageAndLabel(int32 Index, FText& Label, FSlateBrush& Brush, TSoftObjectPtr<UTexture2D>& Icon, bool& bOptionEnabled, bool& bIsLocked) const {
}

void UFortPickerContext::GetPickerWheelAdjacency(bool& bCanPageLeft, bool& bCanPageRight) {
}

int32 UFortPickerContext::GetNumPickerOptions() const {
    return 0;
}

UFortItem* UFortPickerContext::GetListPickerOption(int32 Index) const {
    return NULL;
}

int32 UFortPickerContext::GetCurrentWheelIndex() const {
    return 0;
}

FText UFortPickerContext::GetCurrentPickerDisplayName() {
    return FText::GetEmpty();
}

void UFortPickerContext::GetAdjacentPickerWheelInformation(int32 Direction, FText& AdjacentTitle, bool& bCanPageThisDirection) {
}

bool UFortPickerContext::DoesRadialCloseOnRelease() const {
    return false;
}

UFortPickerContext::UFortPickerContext() {
    this->PickerData = NULL;
    this->CurrentWheelIndex = 0;
    this->CategoryTags.AddDefaulted(5);
}

