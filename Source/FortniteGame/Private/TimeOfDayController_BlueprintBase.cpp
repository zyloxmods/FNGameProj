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
    this->FogCutoffDistance = 1;
    this->FogDensity = 1;
    this->FogHeightFalloff = 1;
    this->FogMaxOpacity = 1;
    this->FogStartDistance = 1;
    this->FogDirectionalInscatteringExponent = 1;
    this->FogDirectionalInscatteringStartDistance = 1;
    this->FogFullyDirectionalInscatteringColorDistance = 1;
    this->FogUseVolumetricFog = true;
    this->FogVolumetricFogExtinctionScale = 1;
    this->FogVolumetricFogDistance = 1;
    this->FogVolumetricFogScatteringDistribution = 1;
    this->TimeOfDay = 1;
    this->PostProcessBlendWeight = 1;
    this->PostProcessFogOpacity = 1;
    this->DirectionalLightIntensity = 1;
    this->bResetMaterialWhenUpdatingParams = false;
    this->CloudAmountHorizon = 1;
    this->CloudAmountZenith = 1;
    this->CloudSpeedMaster = 1;
    this->CloudSpeedDetailTextureOne = 1;
    this->CloudSpeedDetailTextureTwo = 1;
    this->StormStrength = 1;
    this->SunScale = 1;
    this->SunDiscIntensity = 1;
    this->SkyLightIntensity = 1;
    this->SkyLightCubemap = NULL;
    this->TODM = NULL;
    this->ExponentialHeightFog = NULL;
    this->DirectionalLight = NULL;
    this->SkyLight = NULL;
}

