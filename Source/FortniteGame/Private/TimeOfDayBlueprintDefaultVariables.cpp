#include "TimeOfDayBlueprintDefaultVariables.h"

FTimeOfDayBlueprintDefaultVariables::FTimeOfDayBlueprintDefaultVariables() {
    this->AlternateShadowStaticMesh = NULL;
    this->VolumetricLightScatteringIntensity = 0.00f;
    this->bDisableTODLightsAndMaterialEmissiveValues = false;
    this->bDisableStaticMeshShadowCastingWhenLightsAreActive = false;
    this->bUseAnAlternateShadowMeshWhenTheLightIsOff = false;
    this->bCastVolumetricShadows = false;
}

