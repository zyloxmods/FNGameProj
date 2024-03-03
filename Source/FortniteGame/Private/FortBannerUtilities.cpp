#include "FortBannerUtilities.h"

TSoftObjectPtr<UFortHomebaseBannerIconItemDefinition> UFortBannerUtilities::GetSoftBannerDefinitionFromLegacyName(const FName BannerIconRowName) {
    return NULL;
}

FLinearColor UFortBannerUtilities::GetSecondaryColor(const FHomebaseBannerColor& BannerColor) {
    return FLinearColor{};
}

FName UFortBannerUtilities::GetRowNameForBannerIconItem(UFortHomebaseBannerIconItem* BannerIcon) {
    return NAME_None;
}

FName UFortBannerUtilities::GetRowNameForBannerColorItem(UFortHomebaseBannerColorItem* BannerColor) {
    return NAME_None;
}

FLinearColor UFortBannerUtilities::GetPrimaryColor(const FHomebaseBannerColor& BannerColor) {
    return FLinearColor{};
}

TSoftObjectPtr<UTexture2D> UFortBannerUtilities::GetBannerSmallIconAssetFromRowName(const FName BannerIconRowName, EBannerUsageContext Usage) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UFortBannerUtilities::GetBannerSmallIconAsset(UFortHomebaseBannerIconItem* BannerIcon, EBannerUsageContext Usage) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UFortBannerUtilities::GetBannerLargeIconAssetFromRowName(const FName BannerIconRowName, EBannerUsageContext Usage) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UFortBannerUtilities::GetBannerLargeIconAsset(UFortHomebaseBannerIconItem* BannerIcon, EBannerUsageContext Usage) {
    return NULL;
}

void UFortBannerUtilities::GetBannerIconsForCategory(AFortPlayerController* FortPC, const FName CategoryRowName, TArray<UFortAccountItem*>& BannerIcons) {
}

UFortHomebaseBannerIconItem* UFortBannerUtilities::GetBannerIconItemFromRowName(AFortPlayerController* FortPC, const FName BannerIconRowName) {
    return NULL;
}

FName UFortBannerUtilities::GetBannerIconCategoryRowName(const FName BannerIconRowName) {
    return NAME_None;
}

FText UFortBannerUtilities::GetBannerIconCategoryName(const FName CategoryRowName) {
    return FText::GetEmpty();
}

bool UFortBannerUtilities::GetBannerFullUsageRightsFromRowName(const FName BannerIconRowName) {
    return false;
}

void UFortBannerUtilities::GetBannerColorsForCategory(AFortPlayerController* FortPC, const FName CategoryRowName, TArray<UFortAccountItem*>& BannerColors) {
}

FLinearColor UFortBannerUtilities::GetBannerColorSecondaryColorFromRowName(const FName BannerColorRowName) {
    return FLinearColor{};
}

FLinearColor UFortBannerUtilities::GetBannerColorSecondaryColor(const UFortHomebaseBannerColorItem* BannerColor) {
    return FLinearColor{};
}

FLinearColor UFortBannerUtilities::GetBannerColorPrimaryColorFromRowName(const FName BannerColorRowName) {
    return FLinearColor{};
}

FLinearColor UFortBannerUtilities::GetBannerColorPrimaryColor(const UFortHomebaseBannerColorItem* BannerColor) {
    return FLinearColor{};
}

UFortHomebaseBannerColorItem* UFortBannerUtilities::GetBannerColorItemFromRowName(AFortPlayerController* FortPC, const FName BannerColorRowName) {
    return NULL;
}

FHomebaseBannerColor UFortBannerUtilities::GetBannerColorFromRowName(const FName BannerColorRowName) {
    return FHomebaseBannerColor{};
}

FName UFortBannerUtilities::GetBannerColorCategoryRowName(const FName BannerColorRowName) {
    return NAME_None;
}

FText UFortBannerUtilities::GetBannerColorCategoryName(const FName CategoryRowName) {
    return FText::GetEmpty();
}

FHomebaseBannerColor UFortBannerUtilities::GetBannerColor(UFortHomebaseBannerColorItem* BannerColor) {
    return FHomebaseBannerColor{};
}

UFortBannerUtilities::UFortBannerUtilities() {
}

