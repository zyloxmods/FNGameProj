#include "FortItem.h"

bool UFortItem::TryGetCategory(EFortItemCategoryOrdinal Ordinal, FText& OutCategoryDisplayName, bool& OutHasIcon, FFortMultiSizeBrush& OutCategoryIconBrush) const {
    return false;
}

void UFortItem::SetOwningControllerForTemporaryItem(AFortPlayerController* InController) {
}

bool UFortItem::IsVisible() const {
    return false;
}

bool UFortItem::IsTemporaryItem() const {
    return false;
}

bool UFortItem::IsSlotted() const {
    return false;
}

bool UFortItem::IsSchematicOrCraftedWeapon() const {
    return false;
}

bool UFortItem::IsSchematic() const {
    return false;
}

bool UFortItem::IsInventoryOverflowItem() const {
    return false;
}

bool UFortItem::IsInStorageVault() const {
    return false;
}

bool UFortItem::IsEquipped() const {
    return false;
}

bool UFortItem::IsEquipable(const AFortPlayerController* EquippingPC, bool bGamepadSwitchingForHeroAbilities) const {
    return false;
}

bool UFortItem::IsDroppedItem() const {
    return false;
}

bool UFortItem::IsActivatable(const AFortPlayerController* FortPC, FGameplayTagContainer& FailureReason) const {
    return false;
}

bool UFortItem::HasRarityUpgrade() const {
    return false;
}

bool UFortItem::HasEvolutions() const {
    return false;
}

bool UFortItem::HasDurability() const {
    return false;
}

TSoftObjectPtr<UTexture2D> UFortItem::GetWidePreviewImage() const {
    return NULL;
}

FText UFortItem::GetUpgradeRestrictionReasonText(const EItemUpgradeRestrictionReason Reason) {
    return FText::GetEmpty();
}

UFortPersistentResourceItemDefinition* UFortItem::GetUpgradeResourceItemDefinition() const {
    return NULL;
}

int32 UFortItem::GetUpgradeCostToLevel(int32 TargetLevel) const {
    return 0;
}

int32 UFortItem::GetUpgradeCost() const {
    return 0;
}

EFortItemType UFortItem::GetType() const {
    return EFortItemType::WorldItem;
}

EFortItemTier UFortItem::GetTier() const {
    return EFortItemTier::No_Tier;
}

bool UFortItem::GetTertiaryCategory(FText& ItemCategoryText, FSlateBrush& ItemCategoryBrush, TEnumAsByte<EFortBrushSize::Type> BrushSize) const {
    return false;
}

TSoftObjectPtr<UTexture2D> UFortItem::GetSmallPreviewImage() const {
    return NULL;
}

bool UFortItem::GetSecondaryCategory(FText& ItemCategoryText, FSlateBrush& ItemCategoryBrush, TEnumAsByte<EFortBrushSize::Type> BrushSize) const {
    return false;
}

FText UFortItem::GetSearchTags() const {
    return FText::GetEmpty();
}

EFortItemType UFortItem::GetSchematicResultType() const {
    return EFortItemType::WorldItem;
}

UFortWeaponItemDefinition* UFortItem::GetSchematicCraftingResultOrCraftedWeaponBP() const {
    return NULL;
}

UFortItemDefinition* UFortItem::GetSchematicCraftingResultBP() const {
    return NULL;
}

int32 UFortItem::GetRemainingAmmo() const {
    return 0;
}

int32 UFortItem::GetRecycleValue() const {
    return 0;
}

int32 UFortItem::GetRating() const {
    return 0;
}

FLinearColor UFortItem::GetRaritySecondaryColor() const {
    return FLinearColor{};
}

FLinearColor UFortItem::GetRarityColor() const {
    return FLinearColor{};
}

EFortRarity UFortItem::GetRarity() const {
    return EFortRarity::Common;
}

int32 UFortItem::GetPromotionTier() const {
    return 0;
}

bool UFortItem::GetPrimaryCategory(FText& ItemCategoryText) const {
    return false;
}

TArray<TSoftObjectPtr<UObject>> UFortItem::GetPreviewAssets() const {
    return TArray<TSoftObjectPtr<UObject>>();
}

int32 UFortItem::GetPhantomReserveAmmo() const {
    return 0;
}

AFortPlayerController* UFortItem::GetOwningController() const {
    return NULL;
}

int32 UFortItem::GetNumInStack() const {
    return 0;
}

uint8 UFortItem::GetNumberOfSlotsTaken() const {
    return 0;
}

float UFortItem::GetNormalizedDurability() const {
    return 0.0f;
}

EFortItemTier UFortItem::GetMaxTier() const {
    return EFortItemTier::No_Tier;
}

int32 UFortItem::GetMaxStackSize(UAbilitySystemComponent* AbilityComp) const {
    return 0;
}

int32 UFortItem::GetMaxLevel() const {
    return 0;
}

int32 UFortItem::GetLoadedAmmo() const {
    return 0;
}

int32 UFortItem::GetLevelRelativeCostForRarityUpgrade() const {
    return 0;
}

int32 UFortItem::GetLevel() const {
    return 0;
}

TSoftObjectPtr<UTexture2D> UFortItem::GetLargePreviewImage() const {
    return NULL;
}

FText UFortItem::GetItemTypeName(bool bUsePlural) const {
    return FText::GetEmpty();
}

FGuid UFortItem::GetItemGuid() const {
    return FGuid{};
}

UFortItemDefinition* UFortItem::GetItemDefinitionBP() const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UFortItem::GetInactivePreviewImage() const {
    return NULL;
}

EFortInventoryFilter UFortItem::GetFilterCategory() const {
    return EFortInventoryFilter::WeaponMelee;
}

FText UFortItem::GetEvolveRestrictionReasonText(const EItemEvolutionRestrictionReason Reason) {
    return FText::GetEmpty();
}

float UFortItem::GetDurability() const {
    return 0.0f;
}

FText UFortItem::GetDisplayNameWithoutPrefix() const {
    return FText::GetEmpty();
}

FText UFortItem::GetDisplayName() const {
    return FText::GetEmpty();
}

FText UFortItem::GetDescription() const {
    return FText::GetEmpty();
}

float UFortItem::GetCooldownTimeRemaining(AFortPlayerController* FortPC, float& CooldownDuration) const {
    return 0.0f;
}

TArray<FFortAlterationSlotStatus> UFortItem::GetAlterationSlots() const {
    return TArray<FFortAlterationSlotStatus>();
}

TArray<UFortAlterationItemDefinition*> UFortItem::GetActiveAlterations(int32 PretendLevel) const {
    return TArray<UFortAlterationItemDefinition*>();
}

bool UFortItem::DoesMatchSearchString(const FString& SearchString) const {
    return false;
}

bool UFortItem::CanUpgradeItemRarity(TArray<EItemEvolutionRestrictionReason>& OutRestrictionReasons) const {
    return false;
}

bool UFortItem::CanEvolve(TArray<EItemEvolutionRestrictionReason>& OutRestrictionReasons) const {
    return false;
}

bool UFortItem::CanBeUpgraded(TArray<EItemUpgradeRestrictionReason>& OutRestrictionReasons) const {
    return false;
}

bool UFortItem::CanBeUnslotted() const {
    return false;
}

bool UFortItem::CanBeDropped() const {
    return false;
}

bool UFortItem::CanAffordPromotion() const {
    return false;
}

bool UFortItem::AllowedToBeLockedInInventory() const {
    return false;
}

UFortItem::UFortItem() {
    bLoadedFromSave = false;
    bTemporaryItemOwningController = false;
}

