#include "CommonInputSubsystem.h"

bool UCommonInputSubsystem::ShouldShowInputKeys() const {
    return false;
}

void UCommonInputSubsystem::SetGamepadInputType(ECommonGamepadType InGamepadInputType) {
}

void UCommonInputSubsystem::SetCurrentInputType(ECommonInputType NewInputType) {
}

bool UCommonInputSubsystem::IsUsingPointerInput() const {
    return false;
}

bool UCommonInputSubsystem::IsInputMethodActive(ECommonInputType InputMethod) const {
    return false;
}

ECommonInputType UCommonInputSubsystem::GetDefaultInputType() const {
    return ECommonInputType::MouseAndKeyboard;
}

ECommonInputType UCommonInputSubsystem::GetCurrentInputType() const {
    return ECommonInputType::MouseAndKeyboard;
}

ECommonGamepadType UCommonInputSubsystem::GetCurrentGamepadType() const {
    return ECommonGamepadType::XboxOneController;
}

UCommonInputSubsystem::UCommonInputSubsystem() {
    this->NumberOfInputMethodChangesRecently = 0;
    this->LastInputMethodChangeTime = 4294967295;
    this->LastTimeInputMethodThrashingBegan = 4294967295;
    this->LastInputType = ECommonInputType::MouseAndKeyboard;
    this->CurrentInputType = ECommonInputType::MouseAndKeyboard;
    this->GamepadInputType = ECommonGamepadType::XboxOneController;
    this->bIsGamepadSimulatedClick = false;
}

