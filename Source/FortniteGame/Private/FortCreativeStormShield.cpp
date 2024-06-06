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
    bIsViewTargetPawnOutside = false;
    GamePhaseStep = EAthenaGamePhaseStep::None;
    NextTargetRadius = 1;
    NextNextTargetRadius = 1;
    InstancedServerTime = 1;
    StartWaitTime = 1;
    StartShrinkTime = 1;
    FinishShrinkTime = 1;
    FinishDestroyTime = 1;
    AudioLowPassValue = 1;
    AudioPitchMod = 1;
    AudioCrossfade = 1;
    MovementAudioCrossfadeCurve = NULL;
    MovementAudioPitchModCurve = NULL;
    ClockTickingAudioVolumeCurve = NULL;
    ClockTickingAudioPitchCurve = NULL;
    ShieldBoundaryAudio = NULL;
    HoldingAudio = NULL;
    HoldingTickAudio = NULL;
    SpawnVolume = NULL;
}

