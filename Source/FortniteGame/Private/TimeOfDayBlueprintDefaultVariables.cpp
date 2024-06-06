#include "TimeOfDayBlueprintDefaultVariables.h"

FTimeOfDayBlueprintDefaultVariables::FTimeOfDayBlueprintDefaultVariables() {
    AlternateShadowStaticMesh = NULL;
    VolumetricLightScatteringIntensity = 1;
    bDisableTODLightsAndMaterialEmissiveValues = false;
    bDisableStaticMeshShadowCastingWhenLightsAreActive = false;
    bUseAnAlternateShadowMeshWhenTheLightIsOff = false;
    bCastVolumetricShadows = false;
}

