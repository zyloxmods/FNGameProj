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
    MinimapComp = NULL;
    LastRadius = 1;
    NextRadius = 1;
    NextNextRadius = 1;
    bSafezoneEventDriven = false;
    bPaused = false;
    bPausedForPreview = false;
    bPausedForPreview_Previous = false;
    NextNextMegaStormGridCellThickness = 0;
    NextMegaStormGridCellThickness = 0;
    MegaStormDelayTimeBeforeDestruction = 1;
    NumActiveMegaStormCircles = 0;
    ActiveMegaStormCircleGridCellCountFromEdge = 0;
    SafeZoneHeight = 1;
    SafeZoneStartShrinkTime = 1;
    SafeZoneFinishShrinkTime = 1;
    Radius = 1;
    SafeZoneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SafeZoneMesh"));
    MovementAudioCrossfadeCurve = NULL;
    MovementAudioPitchModCurve = NULL;
    ClockTickingAudioVolumeCurve = NULL;
    ClockTickingAudioPitchCurve = NULL;
    MaterialCollection = NULL;
    SafeZoneWorldScale = 1;
    bIsViewTargetPawnOutside = false;
    MegaStormFXAlphaFactor = 1;
    MegaStormFXFadeInTime = 1;
    MegaStormFXFadeOutTime = 1;
    bMegaStormGameplayCueStarted = false;
    bMegaStormStopPending = false;
    bCleanupFXWithAlphaFactor = false;
    MegaStormOneOverFXFadeInTime = 1;
    MegaStormOneOverFXFadeOutTime = 1;
    ShieldBoundaryAudio = NULL;
    HoldingAudio = NULL;
    HoldingTickAudio = NULL;
    bMegastormAudioActive = false;
    AudioLowPassValue = 1;
    AudioPitchMod = 1;
    AudioCrossfade = 1;
    MegastormAudioIntensity = 1;
    HoldingStartTime = 1;
    TimeRemainingWhenPhasePaused = 1;
    ForceUpdateCount = 0;
    FutureReplicator = NULL;
}

