#include "FortWindManager.h"

bool AFortWindManager::SetWindImpulseCylinderMagnitude(const FFortWindImpulseHandle& ImpulseHandle, float NewMagnitude, float BlendTime) {
    return false;
}

bool AFortWindManager::SetWindImpulse(const FFortWindImpulseHandle& ImpulseHandle, const FFortWindImpulseRadius& WindImpulse) {
    return false;
}


void AFortWindManager::RemoveWindImpulse(const FFortWindImpulseHandle& ImpulseHandle, float BlendTime) {
}







FFortWindImpulseRadius AFortWindManager::MakeWindImpulseRadius(const FVector& ImpulseLocation, float ImpulseRadius, float ImpulseMagnitude, float ImpulseBlendTime) {
    return FFortWindImpulseRadius{};
}

FFortWindImpulseCylinder AFortWindManager::MakeWindImpulseCylinder(const FVector& ImpulseLocation, float ImpulseInnerRadius, float ImpulseOuterRadius, float ImpulseMagnitude, const FVector& ImpulseDirection) {
    return FFortWindImpulseCylinder{};
}

bool AFortWindManager::HasWindImpulse(const FFortWindImpulseHandle& WindImpulseHandle) const {
    return false;
}

AFortWindManager* AFortWindManager::GetWindManager(const UObject* WorldContextObject) {
    return NULL;
}

void AFortWindManager::GetGlobalWindIntensityAndDirection(float& WindIntensity, FVector& WindDirection) const {
}

bool AFortWindManager::GetCurrentWindImpulseCylinderDelta(FFortWindImpulseCylinder& WindImpulseCylinder, FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta) const {
    return false;
}

void AFortWindManager::BreakWindImpulseRadius(const FFortWindImpulseRadius& InWindImpulseRadius, FVector& ImpulseLocation, float& ImpulseRadius, float& ImpulseMagnitude, float& ImpulseBlendTime) {
}

void AFortWindManager::BreakWindImpulseCylinderDelta(const FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta, FVector& WindDeltaCenter, bool& bWindImpulseInitialized, bool& bWindRipplesOutward, float& WindDeltaSectionWidth, float& WindDeltaInnerSectionRadius, float& WindDeltaOuterSectionRadius, float& WindDeltaMaximumRadius, float& WindDeltaDesiredOverallBlendTime, float& WindDeltaSectionBlendTime, float& WindDeltaSectionCurrentBlendTime, float& WindDeltaPreviousMagnitude, float& WindDeltaSectionCurrentMagnitude, float& WindDeltaDesiredMagnitude, FBox& WindDeltaOuterWorldBounds, FBox& WindDeltaInnerWorldBounds, FBox& WindImpulseBounds, FFortWindImpulseHandle& WindImpulseHandleToModify) {
}

void AFortWindManager::BreakWindImpulseCylinderAdvanced(const FFortWindImpulseCylinder& WindImpulseCylinder, FVector& WindLocation, float& WindInnerRadius, float& WindOuterRadius, FVector& WindWorldDirection, float& WindMagnitude, FBox& WindWorldBounds, bool& bIsWindChanging, bool& bIsWindChangePending) {
}

void AFortWindManager::BreakWindImpulseCylinder(const FFortWindImpulseCylinder& InWindImpulseCylinder, FVector& ImpulseLocation, float& ImpulseInnerRadius, float& ImpulseOuterRadius, float& ImpulseMagnitude, FVector& ImpulseDirection) {
}


FFortWindImpulseHandle AFortWindManager::AddWindImpulseCylinder(const FFortWindImpulseCylinder& WindImpulseCylinder, float BlendTime) {
    return FFortWindImpulseHandle{};
}

FFortWindImpulseHandle AFortWindManager::AddWindImpulse(const FFortWindImpulseRadius& WindImpulse) {
    return FFortWindImpulseHandle{};
}

AFortWindManager::AFortWindManager() {
    bAllowWindImpulses = true;
    bAllowResponderAudio = true;
    SectionWidth = 1;
    MinimumSectionBlendTime = 1;
    WindVectorParameterName = TEXT("WindVector_CodeControlled");
    NextNearbyIndexToUpdate = 0;
    AudioWindSpeedParameterName = TEXT("WindSpeed");
    AudioWindInterpSpeed = 1;
    AudioWindMaxResponderDistance = 1;
    UpdateWindMaxResponderDistance = 1;
    ViewerMovementDistanceForRefresh = 1;
}

