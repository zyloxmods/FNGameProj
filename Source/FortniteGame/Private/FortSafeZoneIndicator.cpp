#include "FortSafeZoneIndicator.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

void AFortSafeZoneIndicator::SetSafeZoneRadiusAndCenter(float InRadius, FVector InLocation) {
}

void AFortSafeZoneIndicator::SetSafeZoneHeight(float NewWaterHeight) {
}


void AFortSafeZoneIndicator::OnRep_NumActiveMegaStormCircles(int32 PrevNumActiveMegaStormCircles) {
}


void AFortSafeZoneIndicator::OnBeginStartingStateEffects() {
}

void AFortSafeZoneIndicator::MegaStormMinTimerExpired() {
}

float AFortSafeZoneIndicator::GetTimeSinceSafeZonesStart() const {
    return 0.0f;
}

float AFortSafeZoneIndicator::GetSafeZoneStartShrinkTime() const {
    return 0.0f;
}

float AFortSafeZoneIndicator::GetSafeZoneShrinkSpeed() {
    return 0.0f;
}

float AFortSafeZoneIndicator::GetSafeZoneRadius() const {
    return 0.0f;
}

float AFortSafeZoneIndicator::GetSafeZoneFinishShrinkTime() const {
    return 0.0f;
}

FVector AFortSafeZoneIndicator::GetSafeZoneCenter() const {
    return FVector{};
}

void AFortSafeZoneIndicator::GetMovementAudioCurveValues(float Time, float& CrossfadeValue, float& PitchModValue) const {
}

void AFortSafeZoneIndicator::GetClockTickingAudioCurveValues(float Time, float& VolumeModValue, float& PitchModValue) const {
}

void AFortSafeZoneIndicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortSafeZoneIndicator, LastRadius);
    DOREPLIFETIME(AFortSafeZoneIndicator, NextRadius);
    DOREPLIFETIME(AFortSafeZoneIndicator, LastCenter);
    DOREPLIFETIME(AFortSafeZoneIndicator, NextCenter);
    DOREPLIFETIME(AFortSafeZoneIndicator, bSafezoneEventDriven);
    DOREPLIFETIME(AFortSafeZoneIndicator, bPaused);
    DOREPLIFETIME(AFortSafeZoneIndicator, bPausedForPreview);
    DOREPLIFETIME(AFortSafeZoneIndicator, NextNextMegaStormGridCellThickness);
    DOREPLIFETIME(AFortSafeZoneIndicator, NextMegaStormGridCellThickness);
    DOREPLIFETIME(AFortSafeZoneIndicator, MegaStormDelayTimeBeforeDestruction);
    DOREPLIFETIME(AFortSafeZoneIndicator, NumActiveMegaStormCircles);
    DOREPLIFETIME(AFortSafeZoneIndicator, ActiveMegaStormCircleGridCellCountFromEdge);
    DOREPLIFETIME(AFortSafeZoneIndicator, SafeZoneStartShrinkTime);
    DOREPLIFETIME(AFortSafeZoneIndicator, SafeZoneFinishShrinkTime);
    DOREPLIFETIME(AFortSafeZoneIndicator, Radius);
    DOREPLIFETIME(AFortSafeZoneIndicator, TimeRemainingWhenPhasePaused);
    DOREPLIFETIME(AFortSafeZoneIndicator, ForceUpdateCount);
}

AFortSafeZoneIndicator::AFortSafeZoneIndicator() {
    this->MinimapComp = NULL;
    this->LastRadius = 1;
    this->NextRadius = 1;
    this->NextNextRadius = 1;
    this->bSafezoneEventDriven = false;
    this->bPaused = false;
    this->bPausedForPreview = false;
    this->bPausedForPreview_Previous = false;
    this->NextNextMegaStormGridCellThickness = 0;
    this->NextMegaStormGridCellThickness = 0;
    this->MegaStormDelayTimeBeforeDestruction = 1;
    this->NumActiveMegaStormCircles = 0;
    this->ActiveMegaStormCircleGridCellCountFromEdge = 0;
    this->SafeZoneHeight = 1;
    this->SafeZoneStartShrinkTime = 1;
    this->SafeZoneFinishShrinkTime = 1;
    this->Radius = 1;
    this->SafeZoneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SafeZoneMesh"));
    this->MovementAudioCrossfadeCurve = NULL;
    this->MovementAudioPitchModCurve = NULL;
    this->ClockTickingAudioVolumeCurve = NULL;
    this->ClockTickingAudioPitchCurve = NULL;
    this->MaterialCollection = NULL;
    this->SafeZoneWorldScale = 1;
    this->bIsViewTargetPawnOutside = false;
    this->MegaStormFXAlphaFactor = 1;
    this->MegaStormFXFadeInTime = 1;
    this->MegaStormFXFadeOutTime = 1;
    this->bMegaStormGameplayCueStarted = false;
    this->bMegaStormStopPending = false;
    this->bCleanupFXWithAlphaFactor = false;
    this->MegaStormOneOverFXFadeInTime = 1;
    this->MegaStormOneOverFXFadeOutTime = 1;
    this->ShieldBoundaryAudio = NULL;
    this->HoldingAudio = NULL;
    this->HoldingTickAudio = NULL;
    this->bMegastormAudioActive = false;
    this->AudioLowPassValue = 1;
    this->AudioPitchMod = 1;
    this->AudioCrossfade = 1;
    this->MegastormAudioIntensity = 1;
    this->HoldingStartTime = 1;
    this->TimeRemainingWhenPhasePaused = 1;
    this->ForceUpdateCount = 0;
    this->FutureReplicator = NULL;
}

