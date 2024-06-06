#include "FortPlayerControllerFrontEnd.h"

void AFortPlayerControllerFrontEnd::StopWriteToAudioFile() {
}

void AFortPlayerControllerFrontEnd::StopFacialAnimationTest() {
}

void AFortPlayerControllerFrontEnd::StartWriteToAudioFile() {
}

void AFortPlayerControllerFrontEnd::RunFacialAnimationTest(const FString& WaveFileName, int32 SampleRate) {
}

void AFortPlayerControllerFrontEnd::OpenEmotePicker() {
}

bool AFortPlayerControllerFrontEnd::IsVoiceChatPlayerMuted(const FUniqueNetIdRepl& UniqueNetId) {
    return false;
}

bool AFortPlayerControllerFrontEnd::IsInVoiceChat() {
    return false;
}

bool AFortPlayerControllerFrontEnd::HasPendingPhoenixLevelUpNotifications() const {
    return false;
}

void AFortPlayerControllerFrontEnd::EmotePickerSelect() {
}

void AFortPlayerControllerFrontEnd::EmotePickerPrevWheel() {
}

void AFortPlayerControllerFrontEnd::EmotePickerNextWheel() {
}

void AFortPlayerControllerFrontEnd::CloseEmotePicker() {
}

AFortPlayerControllerFrontEnd::AFortPlayerControllerFrontEnd() {
    bUnlockAllZones = false;
}

