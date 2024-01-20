#include "FortInputOptions.h"


UWidget* UFortInputOptions::GetListWidget(UObject* Item) {
    return NULL;
}

FText UFortInputOptions::GetInputDisplayTextBP(int32 RowIndex) const {
    return FText::GetEmpty();
}

int32 UFortInputOptions::GetInputDataIndexForActionName(const FName ActionName) const {
    return 0;
}

FText UFortInputOptions::GetBoundKeyNameBP(int32 RowIndex, bool IsPrimary) const {
    return FText::GetEmpty();
}

TArray<UFortOptionsMenuInputData*> UFortInputOptions::GetActionItemsInGroup(const EFortInputActionGroup InputActionGroup) const {
    return TArray<UFortOptionsMenuInputData*>();
}

FFortActionBeingUnbound UFortInputOptions::GetActionBeingUnbound(bool bIsPrimarySlot, int32 Input, FKey NewKey) const {
    return FFortActionBeingUnbound{};
}

void UFortInputOptions::ConstructKeyBindList() {
}

void UFortInputOptions::ChangeBinding(bool bIsPrimarySlot, int32 Input, FKey NewKey) {
}

UFortInputOptions::UFortInputOptions() {
    this->InputCommonListView = NULL;
    this->TooltipDisplay = NULL;
    this->InputCategoryWidgetClass = NULL;
}

