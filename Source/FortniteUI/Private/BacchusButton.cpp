#include "BacchusButton.h"

void UBacchusButton::SetButtonSprite_Implementation(UPaperSprite* NewSprite) {
}

void UBacchusButton::SetButtonSize_Implementation(float NewButtonSize) {
}

void UBacchusButton::SetButtonDisplayScale_Implementation(float NewDisplayScale) {
}

void UBacchusButton::OnClicked_Implementation() {
}

UBacchusButton::UBacchusButton() {
    this->ClickMethod = EButtonClickMethod::DownAndUp;
    this->TouchMethod = EButtonTouchMethod::DownAndUp;
    this->ButtonSize = 200.00f;
    this->ButtonDisplayScale = 1.00f;
    this->ShowRadialProgress = false;
    this->InternalButton = NULL;
}

