#include "GameDataCosmetics.h"

void UGameDataCosmetics::CreateBannerAssets() {
}

UGameDataCosmetics::UGameDataCosmetics() {
    STWHeroBackpackItemDefinition = NULL;
    STWHeroNoDefaultBackpackItemDefinition = NULL;
    DefaultBattleBusSkin = NULL;
    DefaultGliderSkin = NULL;
    DefaultContrailEffect = NULL;
    DefaultMusicPack = NULL;
    FilterTagTable = NULL;
    CosmeticMarkupTable = NULL;
    ItemPreviewLODStreamingTimeout = 1;
    CharmConfigAsset = NULL;
    PlaceholderItemToShowForDeniedCosmetics = NULL;
    CameraPositionTransitionCurve = NULL;
    CameraPositionTransitionDuration = 1;
    CameraPositionTargetMaxLerpDistance = 1;
    MinPanelSizeForFraming = 1;
}

