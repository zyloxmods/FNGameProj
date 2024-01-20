#include "FortSpectatorSettings.h"

void UFortSpectatorSettings::SetThirdPersonDistanceToSubject(float NewDistance) {
}

void UFortSpectatorSettings::SetThirdPersonCameraCollision(bool bCollide) {
}

void UFortSpectatorSettings::SetThirdPersonAutoFollowMode(EThirdPersonAutoFollowMode NewMode) {
}

void UFortSpectatorSettings::SetStormEffectsEnabled(bool bEnable) {
}

void UFortSpectatorSettings::SetShareLensSettings(bool bShare) {
}

void UFortSpectatorSettings::SetSafeZoneOpacity(float NewOpacity) {
}

void UFortSpectatorSettings::SetRelevancyZoneVisible(bool bVisible) {
}

void UFortSpectatorSettings::SetPlayerOutlinesEnabled(bool bEnable) {
}

void UFortSpectatorSettings::SetNameplatesViewDistance(float NewDistance) {
}

void UFortSpectatorSettings::SetNameplatesScalingOptionsEnabled(bool bEnable) {
}

void UFortSpectatorSettings::SetNameplatesLowDetailScaleMin(float NewScale) {
}

void UFortSpectatorSettings::SetNameplatesLowDetailScaleMax(float NewScale) {
}

void UFortSpectatorSettings::SetNameplatesLowDetailDistance(float NewDistance) {
}

void UFortSpectatorSettings::SetNameplatesHighDetailScaleMin(float NewScale) {
}

void UFortSpectatorSettings::SetNameplatesHighDetailScaleMax(float NewScale) {
}

void UFortSpectatorSettings::SetNameplatesEnabled(bool bEnable) {
}

void UFortSpectatorSettings::SetNameplatesArrowScaleMin(float NewScale) {
}

void UFortSpectatorSettings::SetNameplatesArrowScaleMax(float NewScale) {
}

void UFortSpectatorSettings::SetNameplatesArrowDistance(float NewDistance) {
}

void UFortSpectatorSettings::SetManualFocusDistance(float NewFocusDistance) {
}

void UFortSpectatorSettings::SetManualExposureBias(float NewManualExposureBias) {
}

void UFortSpectatorSettings::SetIgnoreJump(bool bIgnore) {
}

void UFortSpectatorSettings::SetHighQualityFxEnabled(bool bEnable) {
}

void UFortSpectatorSettings::SetFocalLength(float NewFocalLength) {
}

void UFortSpectatorSettings::SetDamageFxEnabled(bool bEnable) {
}

void UFortSpectatorSettings::SetAutoFocusEnabled(bool bEnable) {
}

void UFortSpectatorSettings::SetAutoExposureEnabled(bool bEnable) {
}

void UFortSpectatorSettings::SetAperture(float NewAperture) {
}

void UFortSpectatorSettings::ResetNameplateSettingsToDefault() {
}

void UFortSpectatorSettings::ResetLensSettingsToDefault() {
}

void UFortSpectatorSettings::ResetCameraSettingsToDefault() {
}

void UFortSpectatorSettings::GetMinMaxNameplateScale(float& MinScale, float& MaxScale) const {
}

void UFortSpectatorSettings::GetMinMaxNameplateDistance(float& MinDistance, float& MaxDistance) const {
}

void UFortSpectatorSettings::GetLensMinMaxFocusDistance(float& MinFocusDistance, float& MaxFocusDistance) const {
}

void UFortSpectatorSettings::GetLensMinMaxFocalLength(float& MinFocalLength, float& MaxFocalLength) const {
}

void UFortSpectatorSettings::GetLensMinMaxExposure(float& MinExposure, float& MaxExposure) const {
}

void UFortSpectatorSettings::GetLensMinMaxAperture(float& MinAperture, float& MaxAperture) const {
}

UFortSpectatorSettings::UFortSpectatorSettings() {
    this->NameplatePresets.AddDefaulted(3);
}

