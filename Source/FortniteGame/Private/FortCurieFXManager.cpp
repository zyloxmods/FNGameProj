#include "FortCurieFXManager.h"

void UFortCurieFXManager::OnUserSettingsEffectQualityChanged() {
}

void UFortCurieFXManager::OnElectricityImpactFXComplete(UNiagaraComponent* InComponent) {
}

UFortCurieFXManager::UFortCurieFXManager() {
    this->FXSettings = NULL;
    this->ElectricityArcImpactSystem = NULL;
    this->ElectricityArcSound = NULL;
    this->ElectricityAmbientSound = NULL;
    this->FireSystem = NULL;
    this->PlayerWorldFireSystem = NULL;
    this->FireAmbientSound = NULL;
    this->LandscapeCharRenderTarget = NULL;
    this->LandscapeCharInterpSpeed = 1;
    this->NumActiveNativeFireStates = 0;
    this->ElectricityArcFXSignificanceRequirement = 1;
    this->ElectricityImpactFXSignificanceRequirement = 1;
    this->ElectricityArcSoundSignificanceRequirement = 1;
    this->AmbientAudioSignificanceRequirement = 1;
    this->AmbientAudioSurroundSignificanceRequirement = 1;
    this->GlowInterpolationSignificanceRequirement = 1;
    this->WorldSystemFireParticleSignificanceRequirement = 1;
    this->WorldSystemIgnitionParticleSignificanceRequirement = 1;
    this->CharredEffectInterpolationSignificanceRequirement = 1;
    this->MinLandscapeFireSphericalBounds = 1;
    this->MaxLandscapeFireSphericalBounds = 1;
    this->LandscapeFireRandomLocationRadius = 1;
    this->TimeSinceAudioUpdate = 1;
    this->bNiagaraImpactFXActive = false;
    this->bNiagaraPlayerWorldFireFXActive = false;
    this->bFireElementEnabled = false;
    this->bElectricityElementEnabled = false;
    this->bShutdown = false;
}

