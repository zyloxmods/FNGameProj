#include "CommonPopupMenu.h"

void UCommonPopupMenu::SetOwningMenuAnchor(const UMenuAnchor* MenuAnchor) {
}

void UCommonPopupMenu::SetContextProvider(const UObject* NewContextProvidingObject) {
}

void UCommonPopupMenu::RequestClose() {
}

void UCommonPopupMenu::OnIsOpenChanged(bool IsOpen) {
}

void UCommonPopupMenu::HandlePreDifferentContextProviderSet_Implementation() {
}

void UCommonPopupMenu::HandlePostDifferentContextProviderSet_Implementation() {
}

UCommonPopupMenu::UCommonPopupMenu() {
    this->bUseInputStack = true;
}

