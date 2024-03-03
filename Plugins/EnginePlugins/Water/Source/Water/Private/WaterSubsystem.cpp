#include "WaterSubsystem.h"

void UWaterSubsystem::SetOceanFloodHeight(float InFloodHeight) {
}

void UWaterSubsystem::PrintToWaterLog(const FString& Message, bool bWarning) {
}

bool UWaterSubsystem::IsWaterRenderingEnabled() const {
    return false;
}

bool UWaterSubsystem::IsUnderwaterPostProcessEnabled() const {
    return false;
}

bool UWaterSubsystem::IsShallowWaterSimulationEnabled() const {
    return false;
}

float UWaterSubsystem::GetSmoothedWorldTimeSeconds() const {
    return 0.0f;
}

int32 UWaterSubsystem::GetShallowWaterSimulationRenderTargetSize() {
    return 0;
}

int32 UWaterSubsystem::GetShallowWaterMaxImpulseForces() {
    return 0;
}

int32 UWaterSubsystem::GetShallowWaterMaxDynamicForces() {
    return 0;
}

float UWaterSubsystem::GetOceanTotalHeight() const {
    return 0.0f;
}

float UWaterSubsystem::GetOceanFloodHeight() const {
    return 0.0f;
}

float UWaterSubsystem::GetOceanBaseHeight() const {
    return 0.0f;
}

float UWaterSubsystem::GetCameraUnderwaterDepth() const {
    return 0.0f;
}

UWaterSubsystem::UWaterSubsystem() {
    this->WaterMeshActor = NULL;
}

