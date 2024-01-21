#include "TimeOfDayController_BlueprintBase.h"



ATimeOfDayController_BlueprintBase::ATimeOfDayController_BlueprintBase() {
    this->bOverride_FogCutoffDistance = false;
    this->bOverride_FogDensity = false;
    this->bOverride_FogHeightFalloff = false;
    this->bOverride_FogInscatteringColor = false;
    this->bOverride_FogMaxOpacity = false;
    this->bOverride_FogStartDistance = false;
    this->bOverride_FogDirectionalInscatteringColor = false;
    this->bOverride_FogDirectionalInscatteringExponent = false;
    this->bOverride_FogDirectionalInscatteringStartDistance = false;
    this->bOverride_FogFullyDirectionalInscatteringColorDistance = false;
    this->bOverride_FogUseVolumetricFog = false;
    this->bOverride_FogVolumetricFogExtinctionScale = false;
    this->bOverride_FogVolumetricFogDistance = false;
    this->bOverride_FogVolumetricFogScatteringDistribution = false;
    this->bOverride_FogVolumetricFogAlbedo = false;
    this->bOverride_TimeOfDay = true;
    this->bOverride_PostProcessBlendWeight = false;
    this->bOverride_PostProcessFogOpacity = false;
    this->bOverride_PostProcessFogColor = false;
    this->bOverride_DirectionalLightColor = false;
    this->bOverride_DirectionalLightIntensity = false;
    this->bOverride_DirectionalLightAngle = false;
    this->bOverride_CloudHorizonColor = false;
    this->bOverride_SkyboxHorizonColor = false;
    this->bOverride_SkyboxZenithColor = false;
    this->bOverride_CloudAmountHorizon = false;
    this->bOverride_CloudAmountZenith = false;
    this->bOverride_CloudSpeedMaster = false;
    this->bOverride_CloudSpeedDetailTextureOne = false;
    this->bOverride_CloudSpeedDetailTextureTwo = false;
    this->bOverride_StormStrength = false;
    this->bOverride_SunScale = false;
    this->bOverride_SunDiscIntensity = false;
    this->bOverride_SkyLightColor = false;
    this->bOverride_SkyLightIntensity = false;
    this->bOverride_SkyLightCubemap = false;
    this->FogCutoffDistance = 0.00f;
    this->FogDensity = 0.00f;
    this->FogHeightFalloff = 0.00f;
    this->FogMaxOpacity = 0.00f;
    this->FogStartDistance = 0.00f;
    this->FogDirectionalInscatteringExponent = 0.00f;
    this->FogDirectionalInscatteringStartDistance = 0.00f;
    this->FogFullyDirectionalInscatteringColorDistance = 0.00f;
    this->FogUseVolumetricFog = true;
    this->FogVolumetricFogExtinctionScale = 0.00f;
    this->FogVolumetricFogDistance = 0.00f;
    this->FogVolumetricFogScatteringDistribution = 0.00f;
    this->TimeOfDay = 12.00f;
    this->PostProcessBlendWeight = 0.00f;
    this->PostProcessFogOpacity = 0.00f;
    this->DirectionalLightIntensity = 0.00f;
    this->bResetMaterialWhenUpdatingParams = false;
    this->CloudAmountHorizon = 0.00f;
    this->CloudAmountZenith = 0.00f;
    this->CloudSpeedMaster = 1.50f;
    this->CloudSpeedDetailTextureOne = 0.00f;
    this->CloudSpeedDetailTextureTwo = 0.00f;
    this->StormStrength = 0.00f;
    this->SunScale = 0.00f;
    this->SunDiscIntensity = 0.00f;
    this->SkyLightIntensity = 0.00f;
    this->SkyLightCubemap = NULL;
    this->TODM = NULL;
    this->ExponentialHeightFog = NULL;
    this->DirectionalLight = NULL;
    this->SkyLight = NULL;
}

