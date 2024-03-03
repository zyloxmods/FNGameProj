#include "CreativePropertyEditWidgetDeviceButtonComponentBase.h"

UFortCreativeDeviceButtonComponent* UCreativePropertyEditWidgetDeviceButtonComponentBase::GetDeviceButtonComponent() const {
    return NULL;
}

FText UCreativePropertyEditWidgetDeviceButtonComponentBase::GetButtonLabel() const {
    return FText::GetEmpty();
}

UCreativePropertyEditWidgetDeviceButtonComponentBase::UCreativePropertyEditWidgetDeviceButtonComponentBase() {
    this->DeviceButtonComponent = NULL;
}

