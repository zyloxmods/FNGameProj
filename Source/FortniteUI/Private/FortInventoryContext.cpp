#include "FortInventoryContext.h"

bool UFortInventoryContext::WouldExceedMaxStackSize(UFortItemDefinition* ItemDefinition, int32 QuantityToTest) const {
    return false;
}

bool UFortInventoryContext::WillAllItemsSlotInCollectionBook(const TArray<UFortItem*>& Items) {
    return false;
}

void UFortInventoryContext::UpdateLastSeenResearchPointCollectionNodes() {
}

void UFortInventoryContext::UpdateLastSeenHomebasePoints() {
}

void UFortInventoryContext::UnlockSchematic(UFortSchematicItemDefinition* SchematicDefinition) {
}

void UFortInventoryContext::UnlockAllSchematics() {
}

void UFortInventoryContext::SortAccountItemArrayForTransmog(TArray<UFortAccountItem*>& VaultItems, TArray<UFortAccountItem*>& SortedItems) const {
}

bool UFortInventoryContext::RemoveItemFromQuickBar(UFortItem* Item) {
    return false;
}

FFortItemQuantityPair UFortInventoryContext::MakeItemQuantityPair(const UFortItemDefinition* ItemDefinition, int32 ItemQuantity) {
    return FFortItemQuantityPair{};
}

void UFortInventoryContext::LockAllSchematics() {
}

bool UFortInventoryContext::IsTrapAvailableForBuilding(ABuildingSMActor* Actor) const {
    return false;
}

bool UFortInventoryContext::IsSlotOccupiedByAnotherSlot(EFortQuickBars InQuickBar, int32 Slot) const {
    return false;
}

bool UFortInventoryContext::IsSlotHidden(EFortQuickBars InQuickBar, int32 Slot) const {
    return false;
}

bool UFortInventoryContext::HasUnseenResearchPointCollectionNodes() const {
    return false;
}

bool UFortInventoryContext::HasUnseenHomebasePoints() const {
    return false;
}

bool UFortInventoryContext::HasUnavailableItemsInStorage() const {
    return false;
}

bool UFortInventoryContext::HasTrapReadyForBuilding(const ABuildingSMActor* BuildingToAttachTo) const {
    return false;
}

bool UFortInventoryContext::HasRecyclingWarnings(UFortItem* Item) {
    return false;
}

bool UFortInventoryContext::HasGameplayTagContainerExact(FGameplayTagContainer GameplayTagContainer) const {
    return false;
}

bool UFortInventoryContext::HasGameplayTagContainer(FGameplayTagContainer GameplayTagContainer) const {
    return false;
}

bool UFortInventoryContext::HasEvolutions(const UFortItem* Item) const {
    return false;
}

void UFortInventoryContext::HandleMcpProfilesInitialized() {
}

void UFortInventoryContext::GetWorldItemListForDeployableBaseThePlayerIsIn(TArray<UFortWorldItem*>& Items, const FFortItemListFilter& FilterSettings) const {
}

void UFortInventoryContext::GetWorldItemList(TArray<UFortWorldItem*>& Items, const FFortItemListFilter& FilterSettings) const {
}

UFortPersistentResourceItemDefinition* UFortInventoryContext::GetVoucherResourceItemDefinition() const {
    return NULL;
}

EVaultItemLimitStatus UFortInventoryContext::GetVaultItemLimitStatus() const {
    return EVaultItemLimitStatus::WellBelowCapacity;
}

int32 UFortInventoryContext::GetVaultItemLimit() const {
    return 0;
}

TArray<FText> UFortInventoryContext::GetUserFriendlyTags(const UFortItem* Item, bool bAddWeaponTier) {
    return TArray<FText>();
}

FRecipe UFortInventoryContext::GetUpgradeItemRarityRecipeFromItemDefintion(UFortItemDefinition* ItemDefinition) {
    return FRecipe{};
}

void UFortInventoryContext::GetUnseenTransformKeys(EConversionControlKeyRequest RequestType, const EInventoryContentSortType SortType, TArray<UFortAccountItem*>& TransformKeys) {
}

FText UFortInventoryContext::GetTrapAttachTypeName(ABuildingSMActor* Actor) const {
    return FText::GetEmpty();
}

bool UFortInventoryContext::GetTransmogSacrificeDataFromItemDefintion(const UFortItemDefinition* ItemDefinition, FTransmogSacrifice& OutTransmogData) const {
    return false;
}

void UFortInventoryContext::GetTransformKeys(EConversionControlKeyRequest RequestType, const EInventoryContentSortType SortType, TArray<UFortAccountItem*>& TransformKeys) {
}

int32 UFortInventoryContext::GetTotalItemQuantityByDefinition(UFortItemDefinition* ItemDefinition) const {
    return 0;
}

FText UFortInventoryContext::GetTierText(EFortItemTier Tier) {
    return FText::GetEmpty();
}

int32 UFortInventoryContext::GetStorageOverflowFromAddingItem(UFortWorldItem* Item, int32 Count) const {
    return 0;
}

int32 UFortInventoryContext::GetStorageNumItems() const {
    return 0;
}

int32 UFortInventoryContext::GetStorageCapacity() const {
    return 0;
}

FText UFortInventoryContext::GetShorthandItemStackCount(const int32 Quantity, const int32 MiniumFractionalDigits, const int32 MaximumFractionalDigits) {
    return FText::GetEmpty();
}

UFortPersistentResourceItemDefinition* UFortInventoryContext::GetSchematicResourceItemDefinition() const {
    return NULL;
}

int32 UFortInventoryContext::GetResourceItemMaxStackSize(EFortResourceType ResourceType) const {
    return 0;
}

UFortResourceItemDefinition* UFortInventoryContext::GetResourceItemDefinition(EFortResourceType ResourceType) const {
    return NULL;
}

UTexture2D* UFortInventoryContext::GetResourceIcon(EFortResourceType ResourceType) const {
    return NULL;
}

int32 UFortInventoryContext::GetResourceCount(EFortResourceType ResourceType) const {
    return 0;
}

FText UFortInventoryContext::GetRecyclingWarningText(EItemRecyclingWarning Warning, const bool WereAnyItemsAnimate) {
    return FText::GetEmpty();
}

FText UFortInventoryContext::GetRecyclingCatalystDisplayName(const UFortItem* Item) {
    return FText::GetEmpty();
}

FText UFortInventoryContext::GetRecycleRestrictionReasonText(const EItemRecyclingRestrictionReason Reason) {
    return FText::GetEmpty();
}

UFortItem* UFortInventoryContext::GetQuickBarSlottedItem(EFortQuickBars InQuickBar, int32 Slot) const {
    return NULL;
}

void UFortInventoryContext::GetQuickbarFocus(EFortQuickBars& OutQuickBar, int32& OutSlot, int32& OutSecondarySlot, int32& OutPreviousFocusedSlot) const {
}

void UFortInventoryContext::GetProfileItemsByType(UFortMcpProfile* Profile, EFortItemType ItemType, TArray<UFortAccountItem*>& Items) const {
}

void UFortInventoryContext::GetProfileItemsByFilterType(UFortMcpProfile* Profile, const FString& SearchText, const EInventoryContentSortType SortType, const EFortInventoryFilter Subtype, TArray<UFortAccountItem*>& OutItemList) const {
}

UFortPersistentResourceItemDefinition* UFortInventoryContext::GetPersonnelResourceItemDefinition() const {
    return NULL;
}

int32 UFortInventoryContext::GetNumOfItemToMulch(const UFortItem* Item) const {
    return 0;
}

int32 UFortInventoryContext::GetNumItemsToMulch() const {
    return 0;
}

int32 UFortInventoryContext::GetNumInInventory(UFortItemDefinition* ItemDefinition, bool bIncludeReserved) const {
    return 0;
}

int32 UFortInventoryContext::GetLevelsPerItemPromotion() const {
    return 0;
}

TArray<UFortItem*> UFortInventoryContext::GetItemsToMulchBP() const {
    return TArray<UFortItem*>();
}

void UFortInventoryContext::GetItemInstancesByDefinition(UFortItemDefinition* ItemDefinition, TArray<UFortItem*>& Items) const {
}

int32 UFortInventoryContext::GetInventoryCapacity() const {
    return 0;
}

void UFortInventoryContext::GetHomebaseUnlockedTransmogKeys(TArray<UFortAccountItem*>& TransmogKeys) const {
}

UFortPersistentResourceItemDefinition* UFortInventoryContext::GetHeroResourceItemDefinition() const {
    return NULL;
}

bool UFortInventoryContext::GetHeroAbilityPerks(UFortHero* Hero, TArray<FFortUIPerk>& HeroAbilityPerks) const {
    return false;
}

bool UFortInventoryContext::GetGameplayTagByIndex(FGameplayTagContainer GameplayTagContainer, int32 Index, FGameplayTag& Result) {
    return false;
}

FText UFortInventoryContext::GetEvolveRestrictionReasonText(const EItemEvolutionRestrictionReason Reason) {
    return FText::GetEmpty();
}

AFortWeapon* UFortInventoryContext::GetEquippedWeapon() const {
    return NULL;
}

FText UFortInventoryContext::GetDisassembleRestrictionReasonText(const EItemDisassembleRestrictionReason Reason) {
    return FText::GetEmpty();
}

int32 UFortInventoryContext::GetDeployableBaseOverflowFromAddingItem(UFortWorldItem* Item, int32 Count) const {
    return 0;
}

void UFortInventoryContext::GetDeployableBaseItemCounts(int32& ItemsCount, int32& MaxItemsCount, int32& OverflowItemsCount) const {
}

UFortResourceItemDefinition* UFortInventoryContext::GetCurrentResourceItemDefinition() const {
    return NULL;
}

int32 UFortInventoryContext::GetCurrentResourceCount() const {
    return 0;
}

UFortWorldItemDefinition* UFortInventoryContext::GetCurrentAmmoItemDefinition() const {
    return NULL;
}

int32 UFortInventoryContext::GetCountOfVaultLimitedItems() const {
    return 0;
}

int32 UFortInventoryContext::GetCountOfHeroItems() const {
    return 0;
}

void UFortInventoryContext::GetCoreItemsByType(EFortItemType ItemType, TArray<UFortAccountItem*>& Items) const {
}

void UFortInventoryContext::GetCoreItemsByFilterType(const FString& SearchText, const EInventoryContentSortType SortType, const EFortInventoryFilter Subtype, TArray<UFortAccountItem*>& OutItemList) const {
}

TArray<FRecipe> UFortInventoryContext::GetConversionRecipesFromItemDefintion(UFortItemDefinition* ItemDefinition) {
    return TArray<FRecipe>();
}

int32 UFortInventoryContext::GetBackpackOverflowFromAddingItem(UFortWorldItem* Item, int32 Count) const {
    return 0;
}

void UFortInventoryContext::GetBackpackItemCounts(int32& ItemsCount, int32& MaxItemsCount, int32& OverflowItemsCount) const {
}

void UFortInventoryContext::GetAccountItemsByType(EFortItemType ItemType, TArray<UFortAccountItem*>& Items) const {
}

void UFortInventoryContext::GetAccountItemsByFilterType(const FString& SearchText, const EInventoryContentSortType SortType, const EFortInventoryFilter Subtype, TArray<UFortAccountItem*>& OutItemList) const {
}

void UFortInventoryContext::ForceItemsChanged(const TArray<EFortInventoryFilter>& InventoryFilters) {
}

void UFortInventoryContext::EquipItem(UFortItem* Item) {
}

void UFortInventoryContext::EnumerateRecyclingWarningsForItems(const TArray<UFortItem*>& Items, TArray<EItemRecyclingWarning>& OutWarnings) {
}

bool UFortInventoryContext::DropItemOnQuickBar(UFortItem* Item, EFortQuickBars TargetQuickbar, int32 TargetSlot) {
    return false;
}

void UFortInventoryContext::DropItem(const UFortWorldItem* ItemBeingDropped, int32 Quantity) {
}

bool UFortInventoryContext::DropCreativeItemOnQuickBar(UFortItem* Item, EFortQuickBars TargetQuickbar, int32 TargetSlot) {
    return false;
}

bool UFortInventoryContext::DoesRequireResourceUpdate() const {
    return false;
}

bool UFortInventoryContext::DoesItemMatchFilter(UFortItem* Item, const FFortItemListFilter& FilterSettings) const {
    return false;
}

void UFortInventoryContext::DestroyWorldItem(UFortItem* Item) {
}

bool UFortInventoryContext::CraftSchematic(UFortSchematicItem* SchematicItem, EFortCraftFailCause& FailCause, EFortItemTier RequestedTier, int32 CraftCount) {
    return false;
}

bool UFortInventoryContext::CraftAndSlotSchematic(UFortSchematicItem* SchematicItem, int32 PostCraftSlot, EFortCraftFailCause& FailCause, EFortItemTier RequestedTier, int32 CraftCount) {
    return false;
}

bool UFortInventoryContext::CanUpgradeItemRarity(const UFortItem* Item, TArray<EItemEvolutionRestrictionReason>& OutRestrictionReasons) {
    return false;
}

bool UFortInventoryContext::CanSwapItem(UFortItem* Item, EFortQuickBars TargetQuickbar, int32 TargetSlot) {
    return false;
}

bool UFortInventoryContext::CanRecycle(const UFortItem* Item, TArray<EItemRecyclingRestrictionReason>& OutRestrictionReasons) const {
    return false;
}

bool UFortInventoryContext::CanItemBePromoted(const UFortItem* Item, TArray<FFortItemQuantityPair>& Costs) const {
    return false;
}

bool UFortInventoryContext::CanItemBeMulched(const UFortItem* Item, FText& OutRestrictionReasons) const {
    return false;
}

bool UFortInventoryContext::CanEvolve(const UFortItem* Item, TArray<EItemEvolutionRestrictionReason>& OutRestrictionReasons) const {
    return false;
}

bool UFortInventoryContext::CanDisassembleItem(const UFortWorldItem* Item, TArray<EItemDisassembleRestrictionReason>& OutRestrictionReasons) const {
    return false;
}

bool UFortInventoryContext::CanCraftSchematic(UFortSchematicItem* SchematicItem, EFortCraftFailCause& FailCause, EFortItemTier RequestedTier, int32 CraftCount) const {
    return false;
}

bool UFortInventoryContext::CanBulkCraftSchematic(UFortSchematicItem* SchematicItem) const {
    return false;
}

bool UFortInventoryContext::AreRecipeRequirementsMet(const TArray<FFortItemQuantityPair>& RecipeCosts) const {
    return false;
}

bool UFortInventoryContext::AreAnyItemsUnseenForItemType(const EFortItemType ItemType) const {
    return false;
}

bool UFortInventoryContext::AreAnyItemsUnseenForInventoryFilter(const EFortFrontendInventoryFilter InventoryFilter) const {
    return false;
}

bool UFortInventoryContext::AreAnyItemsInanimate(const TArray<UFortItem*>& Items) {
    return false;
}

bool UFortInventoryContext::AreAnyItemsAnimate(const TArray<UFortItem*>& Items) {
    return false;
}

bool UFortInventoryContext::ActivateItem(UFortItem* Item) {
    return false;
}

UFortInventoryContext::UFortInventoryContext() {
}

