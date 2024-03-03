#include "GameDataCosmetics.h"

void UGameDataCosmetics::CreateBannerAssets() {
}

UGameDataCosmetics::UGameDataCosmetics() {
    this->STWHeroBackpackItemDefinition = NULL;
    this->STWHeroNoDefaultBackpackItemDefinition = NULL;
    this->DefaultBattleBusSkin = NULL;
    this->DefaultGliderSkin = NULL;
    this->DefaultContrailEffect = NULL;
    this->DefaultMusicPack = NULL;
    this->FilterTagTable = NULL;
    this->CosmeticMarkupTable = NULL;
    this->ItemPreviewLODStreamingTimeout = 1;
    this->CharmConfigAsset = NULL;
    this->PlaceholderItemToShowForDeniedCosmetics = NULL;
    this->CameraPositionTransitionCurve = NULL;
    this->CameraPositionTransitionDuration = 1;
    this->CameraPositionTargetMaxLerpDistance = 1;
    this->MinPanelSizeForFraming = 1;
}

