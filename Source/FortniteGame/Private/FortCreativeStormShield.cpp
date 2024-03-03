#include "FortCreativeStormShield.h"
#include "Net/UnrealNetwork.h"

void AFortCreativeStormShield::SetGamePhaseStep(const EAthenaGamePhaseStep NewGamePhaseStep) {
}

void AFortCreativeStormShield::OnRep_GamePhaseStep() {
}

void AFortCreativeStormShield::OnGamePhaseStepChanged() {
}

float AFortCreativeStormShield::GetServerTime() const {
    return 0.0f;
}



void AFortCreativeStormShield::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortCreativeStormShield, GamePhaseStep);
    DOREPLIFETIME(AFortCreativeStormShield, NextTargetRadius);
    DOREPLIFETIME(AFortCreativeStormShield, NextTargetLocation);
    DOREPLIFETIME(AFortCreativeStormShield, NextNextTargetRadius);
    DOREPLIFETIME(AFortCreativeStormShield, NextNextTargetLocation);
    DOREPLIFETIME(AFortCreativeStormShield, InstancedServerTime);
}

AFortCreativeStormShield::AFortCreativeStormShield() {
    this->bIsViewTargetPawnOutside = false;
    this->GamePhaseStep = EAthenaGamePhaseStep::None;
    this->NextTargetRadius = 1;
    this->NextNextTargetRadius = 1;
    this->InstancedServerTime = 1;
    this->StartWaitTime = 1;
    this->StartShrinkTime = 1;
    this->FinishShrinkTime = 1;
    this->FinishDestroyTime = 1;
    this->AudioLowPassValue = 1;
    this->AudioPitchMod = 1;
    this->AudioCrossfade = 1;
    this->MovementAudioCrossfadeCurve = NULL;
    this->MovementAudioPitchModCurve = NULL;
    this->ClockTickingAudioVolumeCurve = NULL;
    this->ClockTickingAudioPitchCurve = NULL;
    this->ShieldBoundaryAudio = NULL;
    this->HoldingAudio = NULL;
    this->HoldingTickAudio = NULL;
    this->SpawnVolume = NULL;
}

