#include "TimeOfDayBlueprintDefaultVariables.h"

FTimeOfDayBlueprintDefaultVariables::FTimeOfDayBlueprintDefaultVariables() {
    this->AlternateShadowStaticMesh = NULL;
    this->VolumetricLightScatteringIntensity = 1;
    this->bDisableTODLightsAndMaterialEmissiveValues = false;
    this->bDisableStaticMeshShadowCastingWhenLightsAreActive = false;
    this->bUseAnAlternateShadowMeshWhenTheLightIsOff = false;
    this->bCastVolumetricShadows = false;
}

