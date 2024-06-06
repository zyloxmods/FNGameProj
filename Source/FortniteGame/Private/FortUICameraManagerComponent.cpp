#include "FortUICameraManagerComponent.h"

void UFortUICameraManagerComponent::SetZoomLevel(const float ZoomLevel) {
}

void UFortUICameraManagerComponent::SetFrameTarget(const TScriptInterface<IFortUICameraFrameTargetInterface>& FrameTarget) {
}

void UFortUICameraManagerComponent::SetCustomCameraRotationOffset(const FRotator Offset) {
}

void UFortUICameraManagerComponent::SetCameraFrame(const TScriptInterface<IFortUICameraFrameInterface> NewFrame) {
}

void UFortUICameraManagerComponent::SetCamera(EFrontEndCamera NewCamera) {
}

void UFortUICameraManagerComponent::HandleCameraFrameTargetSettingsChanged(TScriptInterface<IFortUICameraFrameTargetInterface> FrameTarget) {
}

float UFortUICameraManagerComponent::GetZoomLevel() const {
    return 0.0f;
}

AFortCameraBase* UFortUICameraManagerComponent::GetCameraActor() const {
    return NULL;
}

EFrontEndCamera UFortUICameraManagerComponent::GetCamera() const {
    return EFrontEndCamera::Invalid;
}

UFortUICameraManagerComponent::UFortUICameraManagerComponent() {
    ViewTarget = NULL;
    bUpdatingViewTarget = false;
    CurrentCamera = EFrontEndCamera::Invalid;
}

