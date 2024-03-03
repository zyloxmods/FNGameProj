#include "HISMBuilderSettings.h"

void UHISMBuilderSettings::SetOverriddenLightMapRes(int32 Value) {
}

int32 UHISMBuilderSettings::GetOverriddenLightMapRes() const {
    return 0;
}

UHISMBuilderSettings::UHISMBuilderSettings() {
    this->Mobility = EComponentMobility::Static;
    this->bCastShadow = true;
    this->bAffectDynamicIndirectLighting = false;
    this->bAffectDistanceFieldLighting = false;
    this->bCastDynamicShadow = true;
    this->bCastStaticShadow = true;
    this->bCastShadowAsTwoSided = false;
    this->bReceivesDecals = false;
    this->bOverrideLightMapRes = false;
    this->OverriddenLightMapRes = 0;
    this->LightmapType = ELightmapType::Default;
    this->bUseAsOccluder = false;
    this->CustomNavigableGeometry = EHasCustomNavigableGeometry::Yes;
    this->bRenderCustomDepth = false;
    this->CustomDepthStencilValue = 0;
    this->TranslucencySortPriority = 0;
    this->bEnableDensityScaling = false;
    this->VirtualTextureCullMips = 0;
    this->VirtualTextureRenderPassType = ERuntimeVirtualTextureMainPassType::Never;
}

