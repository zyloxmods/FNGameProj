#include "FortAmbientAudioController.h"

void UFortAmbientAudioController::SetAudioBankOverride(UFortPOIAmbientAudioBank* BankOverride) {
}

void UFortAmbientAudioController::OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation) {
}

UFortAmbientAudioController* UFortAmbientAudioController::GetAmbientAudioControllerFromContext(UObject* WorldContextObject) {
    return NULL;
}

void UFortAmbientAudioController::ClearAudioBankOverride() {
}

UFortAmbientAudioController::UFortAmbientAudioController() {
    this->DefaultAudioBank = NULL;
    this->PlayerController = NULL;
    this->PauseFadeTime = 1;
}

