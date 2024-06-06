#include "BuildingPropAtlas.h"

void ABuildingPropAtlas::StopRingSpinning() {
}

void ABuildingPropAtlas::SetupAnimationTransition(UMaterialInstanceDynamic* Mid, FName ParamName, float InTransitionTime) {
}

void ABuildingPropAtlas::SetupAnimationSpeed(float InActivationTime, float InTotalDefenseTime, float InAnimSpeedStart, float InAnimSpeedEnd) {
}

void ABuildingPropAtlas::RestoreRingsHierarchy() {
}

void ABuildingPropAtlas::PlayRingsReset(float AnimDuration) {
}

void ABuildingPropAtlas::PlayRingSpinning(const FRotator& Ring1RateMin, const FRotator& Ring1RateMax, const FRotator& Ring2Rate, const FRotator& Ring3Rate) {
}

void ABuildingPropAtlas::PlayRingsIdleLoop(float AnimDuration, float Ring1ZOffset) {
}

void ABuildingPropAtlas::PlayRingDamage(float DurationMin, float DurationMax, float MagnitudeMin, float MagnitudeMax) {
}


void ABuildingPropAtlas::InitializeRings(UPrimitiveComponent* InRing1Comp, UPrimitiveComponent* InRing2Comp, UPrimitiveComponent* InRing3Comp) {
}

void ABuildingPropAtlas::InitializeAudio(UAudioComponent* InPortalLoopingComp) {
}

float ABuildingPropAtlas::GetDefenseProgress() const {
    return 0.0f;
}

float ABuildingPropAtlas::GetDefenseAnimSpeed() const {
    return 0.0f;
}

ABuildingPropAtlas::ABuildingPropAtlas() {
    Ring1Comp = NULL;
    Ring2Comp = NULL;
    Ring3Comp = NULL;
    RingTransitionMID = NULL;
    PortalAudioComp = NULL;
}

