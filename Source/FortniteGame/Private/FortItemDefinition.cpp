#include "FortItemDefinition.h"

#include "EFortCustomBodyType.h"
#include "Templates/SubclassOf.h"

bool UFortItemDefinition::ShouldShowPreviewOnCurrentHero(const int32 InSubSlot) const {
    return false;
}

bool UFortItemDefinition::IsStackable() const {
    return false;
}

bool UFortItemDefinition::IsInventorySizeLimited() const {
    return false;
}

TSoftObjectPtr<UTexture2D> UFortItemDefinition::GetWidePreviewImage() const {
    return NULL;
}

TSubclassOf<UFortTooltip> UFortItemDefinition::GetTooltip(bool bSummaryTooltip) const {
    return NULL;
}

FSlateBrush UFortItemDefinition::GetSmallPreviewImageBrush() const {
    return FSlateBrush{};
}

TSoftObjectPtr<UTexture2D> UFortItemDefinition::GetSmallPreviewImage() const {
    return SmallPreviewImage.LoadSynchronous();
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

bool UFortItemDefinition::GetPreviewPrefabAssetAtSubSlot(TSoftClassPtr<AActor>& Asset, const int32 InSubSlot) const {
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

TSoftObjectPtr<UTexture2D> UFortItemDefinition::GetLargePreviewImage() const
{
    return LargePreviewImage.LoadSynchronous();
}

FText UFortItemDefinition::GetItemTypeName(bool bUsePlural) const {
    FString EnumString = UEnum::GetValueAsString<EFortItemType>(ItemType);
    return FText::FromString(EnumString);
}

EFortItemType UFortItemDefinition::GetItemType() const {
    return EFortItemType::WorldItem;
}

TSoftObjectPtr<UTexture2D> UFortItemDefinition::GetInactivePreviewImage() const {
    return NULL;
}

FSoftObjectPath UFortItemDefinition::GetHiResDisplayAssetPath() const {
    return FSoftObjectPath{};
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

void UFortItemDefinition::CopyTemplateIdToClipboard() {
}

UFortItemDefinition::UFortItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    Rarity = EFortRarity::Common;
    ItemType = EFortItemType::WorldItem;
    PrimaryAssetIdItemTypeOverride = EFortItemType::WorldItem;
    FilterOverride = EFortInventoryFilter::WeaponMelee;
    Tier = EFortItemTier::No_Tier;
    MaxTier = EFortItemTier::No_Tier;
    Access = EFortTemplateAccess::Normal;
    bIsAccountItem = false;
    bNeverPersisted = false;
    bAllowMultipleStacks = true;
    bAutoBalanceStacks = true;
    bForceAutoPickup = false;
    bInventorySizeLimited = false;
    FrontendPreviewScale = 1;
    Series = NULL;
    
    FText ItemTypeText = GetItemTypeName(false);
    FString AssetName = GetFName().ToString().ToLower();
    FString ItemType = ItemTypeText.ToString();
    int32 Index;
    if (ItemType.FindLastChar(':', Index))
        {
        ItemType = ItemType.RightChop(Index + 1);
        }
    EditorTemplateId = FString(TEXT("" + ItemType + ":" + AssetName));
}

