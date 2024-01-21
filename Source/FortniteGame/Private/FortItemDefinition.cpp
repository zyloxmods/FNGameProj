#include "FortItemDefinition.h"
#include "Templates/SubclassOf.h"

bool UFortItemDefinition::ShouldShowPreviewOnCurrentHero() const {
    return false;
}

bool UFortItemDefinition::IsStackable() const {
    return false;
}

bool UFortItemDefinition::IsInventorySizeLimited() const {
    return false;
}

TSubclassOf<UFortTooltip> UFortItemDefinition::GetTooltip(bool bSummaryTooltip) const {
    return NULL;
}

FSlateBrush UFortItemDefinition::GetSmallPreviewImageBrush() const {
    return FSlateBrush{};
}

TSoftObjectPtr<UTexture2D> UFortItemDefinition::GetSmallPreviewImage() const {
    return NULL;
}

FText UFortItemDefinition::GetSingleLineDescription() const {
    return FText::GetEmpty();
}

FText UFortItemDefinition::GetShortDescription() const {
    return FText::GetEmpty();
}

FText UFortItemDefinition::GetRichDescription() const {
    return FText::GetEmpty();
}

FFortColorPalette UFortItemDefinition::GetRarityOrSeriesColors() const {
    return FFortColorPalette{};
}

EFortRarity UFortItemDefinition::GetRarity() const {
    return EFortRarity::Common;
}

bool UFortItemDefinition::GetPreviewStaticMeshAsset(TSoftObjectPtr<UStaticMesh>& Asset) const {
    return false;
}

bool UFortItemDefinition::GetPreviewSkeletalMeshAsset(TSoftObjectPtr<USkeletalMesh>& Asset) const {
    return false;
}

bool UFortItemDefinition::GetPreviewPrefabAsset(TSoftClassPtr<AActor>& Asset) const {
    return false;
}

FTransform UFortItemDefinition::GetPreviewMeshOffset() const {
    return FTransform{};
}

void UFortItemDefinition::GetPreviewAssets(TArray<TSoftObjectPtr<UObject>>& Assets) const {
}

FString UFortItemDefinition::GetPersistentName() const {
    return TEXT("");
}

TSoftObjectPtr<UTexture2D> UFortItemDefinition::GetLargePreviewImage() const {
    return NULL;
}

FText UFortItemDefinition::GetItemTypeName(bool bUsePlural) const {
    return FText::GetEmpty();
}

EFortItemType UFortItemDefinition::GetItemType() const {
    return EFortItemType::WorldItem;
}

UFortTooltipDisplayStatsList* UFortItemDefinition::GetDisplayStats() const {
    return NULL;
}

FText UFortItemDefinition::GetDisplayName(bool bBaseName) const {
    return FText::GetEmpty();
}

FSoftObjectPath UFortItemDefinition::GetDisplayAssetPath() const {
    return FSoftObjectPath{};
}

TArray<FText> UFortItemDefinition::GetDescription() const {
    return TArray<FText>();
}

void UFortItemDefinition::CustomizePreviewPrefab(AActor* PrefabInstance) {
}

void UFortItemDefinition::CustomizePreviewMesh(UMeshComponent* Mesh) const {
}

UFortItem* UFortItemDefinition::CreateTemporaryItemInstanceBP(int32 Count, int32 Level) const {
    return NULL;
}

UFortItem* UFortItemDefinition::CreateTemporaryInstanceFromExistingItemBP(UFortItem* ExistingItem, int32 Count, int32 Level) const {
    return NULL;
}

UFortItemDefinition::UFortItemDefinition() {
    this->Rarity = EFortRarity::Uncommon;
    this->ItemType = EFortItemType::Max_None;
    this->PrimaryAssetIdItemTypeOverride = EFortItemType::Max_None;
    this->FilterOverride = EFortInventoryFilter::Max_None;
    this->Tier = EFortItemTier::No_Tier;
    this->MaxTier = EFortItemTier::No_Tier;
    this->Access = EFortTemplateAccess::Normal;
    this->bIsAccountItem = false;
    this->bNeverPersisted = false;
    this->bAllowMultipleStacks = true;
    this->bAutoBalanceStacks = true;
    this->bForceAutoPickup = false;
    this->bInventorySizeLimited = false;
    this->MaxStackSize = 1;
    this->FrontendPreviewScale = 1.00f;
    this->Series = NULL;
}

