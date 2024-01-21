#include "ScreenCaptureContext.h"

void UScreenCaptureContext::ToggleMicrophoneRecording(bool bEnableMicrophone) {
}

void UScreenCaptureContext::TakeScreenshot() {
}

void UScreenCaptureContext::StopCapture(bool bIsCaptureInterrupted) {
}

void UScreenCaptureContext::StartCapture(bool bInRecordAppAudio, bool bGeneratePreviewImage) {
}

bool UScreenCaptureContext::SaveToAlbum(const FString& LocalFilePath) {
    return false;
}

bool UScreenCaptureContext::RemoveFile(const FString& LocalFilePath) {
    return false;
}

bool UScreenCaptureContext::IsRecording() const {
    return false;
}

UScreenCaptureContext* UScreenCaptureContext::CreateScreenCaptureContext(UObject* WorldContextObject) {
    return NULL;
}

UScreenCaptureContext::UScreenCaptureContext() {
    this->PreviewImage = NULL;
}

