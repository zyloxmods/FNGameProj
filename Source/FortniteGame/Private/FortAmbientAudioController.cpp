#include "FortAmbientAudioController.h"

void UFortAmbientAudioController::SetAudioBankOverride(UFortPOIAmbientAudioBank* BankOverride) {
}

void UFortAmbientAudioController::SetAudioBank(UFortPOIAmbientAudioBank* NewBank) {
}

void UFortAmbientAudioController::OnLocationTagChanged(const FGameplayTag Tag, int32 Num) {
}

void UFortAmbientAudioController::OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation) {
}

void UFortAmbientAudioController::InitializePlayerState() {
}

void UFortAmbientAudioController::InitializeCurrentAudioBank() {
}

UFortPOIAmbientAudioBank* UFortAmbientAudioController::GetAudioBank() const {
    return NULL;
}

UFortAmbientAudioController* UFortAmbientAudioController::GetAmbientAudioControllerFromContext(UObject* WorldContextObject) {
    return NULL;
}

void UFortAmbientAudioController::Crossfade(FFortPOIAmbientAudioLoop& NewLoop) {
}

void UFortAmbientAudioController::ClearAudioBankOverride() {
}

UFortAmbientAudioController::UFortAmbientAudioController() {
    this->DefaultAudioBank = NULL;
    this->PlayerController = NULL;
    this->AudioComp = NULL;
    this->FadingAudioComp = NULL;
    this->CurrentAudioBank = NULL;
    this->OverriddenAudioBank = NULL;
    this->TimeOfDayManager = NULL;
}

