#include "FortFrontEndCameraManager.h"

void AFortFrontEndCameraManager::SetZoomLevel(const float ZoomLevel) {
}

void AFortFrontEndCameraManager::SetFrameTarget(const TScriptInterface<IFortUICameraFrameTargetInterface>& FrameTarget) {
}

void AFortFrontEndCameraManager::SetCustomCameraRotationOffset(const FRotator Offset) {
}

void AFortFrontEndCameraManager::SetCameraFrame(const TScriptInterface<IFortUICameraFrameInterface> NewFrame) {
}

void AFortFrontEndCameraManager::SetCamera(EFrontEndCamera NewCamera) {
}

void AFortFrontEndCameraManager::HandleCameraFrameTargetSettingsChanged(TScriptInterface<IFortUICameraFrameTargetInterface> FrameTarget) {
}

float AFortFrontEndCameraManager::GetZoomLevel() const {
    return 0.0f;
}

AFortCameraBase* AFortFrontEndCameraManager::GetCameraActor() const {
    return NULL;
}

EFrontEndCamera AFortFrontEndCameraManager::GetCamera() const {
    return EFrontEndCamera::Invalid;
}

AFortFrontEndCameraManager::AFortFrontEndCameraManager() {
    this->CurrentCamera = EFrontEndCamera::Invalid;
    this->FrontEndSettings = NULL;
}

