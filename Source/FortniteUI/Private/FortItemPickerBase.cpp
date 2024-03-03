#include "FortItemPickerBase.h"

bool UFortItemPickerBase::TryCommitSelectedItem() {
    return false;
}

void UFortItemPickerBase::SetSelectedItem(const UFortItem* ItemToSelect) {
}

bool UFortItemPickerBase::SetSelectedIndex(int32 Index) {
    return false;
}

bool UFortItemPickerBase::IsNullItemExplicitlySelected() const {
    return false;
}

UFortItem* UFortItemPickerBase::GetSelectedItem() const {
    return NULL;
}

TScriptInterface<IFortItemListViewInterface> UFortItemPickerBase::GetListViewInterface() {
    return NULL;
}

int32 UFortItemPickerBase::GetIndexForItem(UFortItem* Item) const {
    return 0;
}

void UFortItemPickerBase::ClearSelection() {
}

void UFortItemPickerBase::CenterSelectedItemTileWidget() {
}

bool UFortItemPickerBase::CanItemBeComitted(const UFortItem* ItemToCommit) {
    return false;
}

UFortItemPickerBase::UFortItemPickerBase() {
    this->PickerTileView = NULL;
    this->ItemListViewWidget = NULL;
    this->bConfirmSelectionIfAlreadySelectedAfterOneClick = false;
    this->NewlySelectedItem = NULL;
}

