#include "BacchusActionButton.h"

void UBacchusActionButton::OnCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CustomWidget) {
}

void UBacchusActionButton::AddActionMappings(TArray<FBacchusActionIconMapping> NewActionMappings) {
}

UBacchusActionButton::UBacchusActionButton() {
    this->bCapturesInput = true;
}

