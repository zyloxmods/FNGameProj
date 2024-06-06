#include "FortCurieFXManager.h"

void UFortCurieFXManager::OnUserSettingsEffectQualityChanged() {
}

void UFortCurieFXManager::OnElectricityImpactFXComplete(UNiagaraComponent* InComponent) {
}

UFortCurieFXManager::UFortCurieFXManager() {
    FXSettings = NULL;
    ElectricityArcImpactSystem = NULL;
    ElectricityArcSound = NULL;
    ElectricityAmbientSound = NULL;
    FireSystem = NULL;
    PlayerWorldFireSystem = NULL;
    FireAmbientSound = NULL;
    LandscapeCharRenderTarget = NULL;
    LandscapeCharInterpSpeed = 1;
    NumActiveNativeFireStates = 0;
    ElectricityArcFXSignificanceRequirement = 1;
    ElectricityImpactFXSignificanceRequirement = 1;
    ElectricityArcSoundSignificanceRequirement = 1;
    AmbientAudioSignificanceRequirement = 1;
    AmbientAudioSurroundSignificanceRequirement = 1;
    GlowInterpolationSignificanceRequirement = 1;
    WorldSystemFireParticleSignificanceRequirement = 1;
    WorldSystemIgnitionParticleSignificanceRequirement = 1;
    CharredEffectInterpolationSignificanceRequirement = 1;
    MinLandscapeFireSphericalBounds = 1;
    MaxLandscapeFireSphericalBounds = 1;
    LandscapeFireRandomLocationRadius = 1;
    TimeSinceAudioUpdate = 1;
    bNiagaraImpactFXActive = false;
    bNiagaraPlayerWorldFireFXActive = false;
    bFireElementEnabled = false;
    bElectricityElementEnabled = false;
    bShutdown = false;
}

