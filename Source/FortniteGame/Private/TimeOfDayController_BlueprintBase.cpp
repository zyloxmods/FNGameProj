#include "TimeOfDayController_BlueprintBase.h"



ATimeOfDayController_BlueprintBase::ATimeOfDayController_BlueprintBase() {
    bOverride_FogCutoffDistance = false;
    bOverride_FogDensity = false;
    bOverride_FogHeightFalloff = false;
    bOverride_FogInscatteringColor = false;
    bOverride_FogMaxOpacity = false;
    bOverride_FogStartDistance = false;
    bOverride_FogDirectionalInscatteringColor = false;
    bOverride_FogDirectionalInscatteringExponent = false;
    bOverride_FogDirectionalInscatteringStartDistance = false;
    bOverride_FogFullyDirectionalInscatteringColorDistance = false;
    bOverride_FogUseVolumetricFog = false;
    bOverride_FogVolumetricFogExtinctionScale = false;
    bOverride_FogVolumetricFogDistance = false;
    bOverride_FogVolumetricFogScatteringDistribution = false;
    bOverride_FogVolumetricFogAlbedo = false;
    bOverride_TimeOfDay = true;
    bOverride_PostProcessBlendWeight = false;
    bOverride_PostProcessFogOpacity = false;
    bOverride_PostProcessFogColor = false;
    bOverride_DirectionalLightColor = false;
    bOverride_DirectionalLightIntensity = false;
    bOverride_DirectionalLightAngle = false;
    bOverride_CloudHorizonColor = false;
    bOverride_SkyboxHorizonColor = false;
    bOverride_SkyboxZenithColor = false;
    bOverride_CloudAmountHorizon = false;
    bOverride_CloudAmountZenith = false;
    bOverride_CloudSpeedMaster = false;
    bOverride_CloudSpeedDetailTextureOne = false;
    bOverride_CloudSpeedDetailTextureTwo = false;
    bOverride_StormStrength = false;
    bOverride_SunScale = false;
    bOverride_SunDiscIntensity = false;
    bOverride_SkyLightColor = false;
    bOverride_SkyLightIntensity = false;
    bOverride_SkyLightCubemap = false;
    FogCutoffDistance = 1;
    FogDensity = 1;
    FogHeightFalloff = 1;
    FogMaxOpacity = 1;
    FogStartDistance = 1;
    FogDirectionalInscatteringExponent = 1;
    FogDirectionalInscatteringStartDistance = 1;
    FogFullyDirectionalInscatteringColorDistance = 1;
    FogUseVolumetricFog = true;
    FogVolumetricFogExtinctionScale = 1;
    FogVolumetricFogDistance = 1;
    FogVolumetricFogScatteringDistribution = 1;
    TimeOfDay = 1;
    PostProcessBlendWeight = 1;
    PostProcessFogOpacity = 1;
    DirectionalLightIntensity = 1;
    bResetMaterialWhenUpdatingParams = false;
    CloudAmountHorizon = 1;
    CloudAmountZenith = 1;
    CloudSpeedMaster = 1;
    CloudSpeedDetailTextureOne = 1;
    CloudSpeedDetailTextureTwo = 1;
    StormStrength = 1;
    SunScale = 1;
    SunDiscIntensity = 1;
    SkyLightIntensity = 1;
    SkyLightCubemap = NULL;
    TODM = NULL;
    ExponentialHeightFog = NULL;
    DirectionalLight = NULL;
    SkyLight = NULL;
}

