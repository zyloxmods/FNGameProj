#include "FortMusicManager.h"
#include "FortMusicVoice.h"

void AFortMusicManager::StopPrimaryMusic(bool bPlayOutro) {
}

void AFortMusicManager::StopMusicVoice(UFortMusicVoice* Voice) {
}

void AFortMusicManager::SetPrimaryMusicVolume(float InVolumeMultiplier) {
}

void AFortMusicManager::SetMusicBank(UFortMusicManagerBank* Bank) {
}

void AFortMusicManager::PlayStinger_Implementation(UFortMusicAsset* NewMusicAsset) {
}

UFortMusicVoice* AFortMusicManager::PlayMusicVoice(UFortMusicAsset* Asset) {
    return NULL;
}

void AFortMusicManager::OnVoiceFinished(UFortMusicVoice* Voice) {
}






float AFortMusicManager::GetPrimaryMusicVolume() const {
    return 0.0f;
}

UFortMusicManagerBank* AFortMusicManager::GetMusicBank() const {
    return NULL;
}

float AFortMusicManager::GetEventHeatPercentTotal(EFortCombatEvents CombatEvent) {
    return 0.0f;
}

float AFortMusicManager::GetEventHeatPercent(EFortCombatEvents CombatEvent) {
    return 0.0f;
}

UFortMusicVoice* AFortMusicManager::ChangePrimaryMusic(UFortMusicAsset* NewMusicAsset, bool bPlayStinger) {
    return NULL;
}

AFortMusicManager::AFortMusicManager() {
    ControllerOwner = NULL;
    Voices[0] = CreateDefaultSubobject<UFortMusicVoice>(TEXT("MusicVoiceA"));
    bWorldReadyCalled = false;
    MusicBank = NULL;
}

