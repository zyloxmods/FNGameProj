#include "CommonUISubsystem.h"

UCommonInputManager* UCommonUISubsystem::GetInputManager() const {
    return NULL;
}

FSlateBrush UCommonUISubsystem::GetInputActionButtonIcon(const FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, ECommonGamepadType GamepadType) const {
    return FSlateBrush{};
}

UCommonUISubsystem::UCommonUISubsystem() {
    this->CommonInputManager = NULL;
}

