#include "HUDLayoutToolProxy.h"

void UHUDLayoutToolProxy::BP_SetPropertyValue_Implementation(int32 PropertyIndex, float NewValue) {
}

FText UHUDLayoutToolProxy::BP_GetWidgetName_Implementation() const {
    return FText::GetEmpty();
}

float UHUDLayoutToolProxy::BP_GetPropertyValue_Implementation(int32 PropertyIndex) const {
    return 0.0f;
}

ELayoutPropertyType UHUDLayoutToolProxy::BP_GetPropertyType_Implementation(int32 PropertyIndex) const {
    return ELayoutPropertyType::PropertyType_Float;
}

void UHUDLayoutToolProxy::BP_GetPropertyRange_Implementation(int32 PropertyIndex, float& OutMin, float& OutMax) const {
}

FText UHUDLayoutToolProxy::BP_GetPropertyName_Implementation(int32 PropertyIndex) const {
    return FText::GetEmpty();
}

int32 UHUDLayoutToolProxy::BP_GetNumOfProperties_Implementation() const {
    return 0;
}

TArray<FText> UHUDLayoutToolProxy::BP_GetMultiOptionLabels_Implementation(int32 PropertyIndex) const {
    return TArray<FText>();
}

UHUDLayoutToolProxy::UHUDLayoutToolProxy() {
}

