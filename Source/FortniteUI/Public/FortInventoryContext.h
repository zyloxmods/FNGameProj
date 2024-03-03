#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "EFortCraftFailCause.h"
#include "EFortFrontendInventoryFilter.h"
#include "EFortInventoryFilter.h"
#include "EFortItemTier.h"
#include "EFortItemType.h"
#include "EFortQuickBars.h"
#include "EFortResourceType.h"
#include "EInventoryContentSortType.h"
#include "EItemEvolutionRestrictionReason.h"
#include "FortItemQuantityPair.h"
#include "Recipe.h"
#include "TransmogSacrifice.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EConversionControlKeyRequest.h"
#include "EItemDisassembleRestrictionReason.h"
#include "EItemRecyclingRestrictionReason.h"
#include "EItemRecyclingWarning.h"
#include "EVaultItemLimitStatus.h"
#include "FortItemListFilter.h"
#include "FortUIPerk.h"
#include "ItemListChangedDelegateDelegate.h"
#include "ItemsChangedDelegate.h"
#include "OnCraftItemFailedDelegate.h"
#include "OnCraftItemStartedDelegate.h"
#include "OnItemPickedUpDelegate.h"
#include "OnQuickbarContentsChangedDelegate.h"
#include "OnQuickbarFullUpdateDelegate.h"
#include "OnQuickbarRecordsChangedDelegate.h"
#include "OnSchematicUnlockedDelegate.h"
#include "OnSchematicsLockedChangedDelegate.h"
#include "OnVaultItemLimitStateChangedDelegate.h"
#include "QuickbarFocusChangedDelegateDelegate.h"
#include "SetWorldResourceWidgetVisibilityDelegate.h"
#include "FortInventoryContext.generated.h"

class ABuildingSMActor;
class AFortWeapon;
class UFortAccountItem;
class UFortHero;
class UFortItem;
class UFortItemDefinition;
class UFortMcpProfile;
class UFortPersistentResourceItemDefinition;
class UFortResourceItemDefinition;
class UFortSchematicItem;
class UFortSchematicItemDefinition;
class UFortWorldItem;
class UFortWorldItemDefinition;
class UTexture2D;

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UFortInventoryContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemTypesWithUnseenItemsChanged, const TSet<EFortItemType>&, AffectedItemTypes);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInventoryFiltersWithUnseenItemsChanged, const TSet<EFortFrontendInventoryFilter>&, AffectedInventoryFilters);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemsChanged OnMcpWorldItemsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemsChanged OnMcpOutpostItemsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemListChangedDelegate OnWorldItemListChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemListChangedDelegate OnOutpostItemListChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemPickedUp OnItemPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuickbarContentsChanged OnQuickbarContentsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuickbarRecordsChanged OnQuickbarRecordsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickbarFocusChangedDelegate OnQuickbarSlotFocusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickbarFocusChangedDelegate OnQuickbarSecondarySlotFocusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuickbarFullUpdate OnQuickbarForceFullUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemsChanged OnWorldItemsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSchematicsLockedChanged OnSchematicsLockedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSchematicUnlocked OnSchematicUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCraftItemStarted OnCraftItemStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCraftItemFailed OnCraftItemFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetWorldResourceWidgetVisibility SetWorldResourceWidgetVisibility;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVaultItemLimitStateChanged OnVaultItemLimitStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryFiltersWithUnseenItemsChanged OnInventoryFiltersWithUnseenItemsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemTypesWithUnseenItemsChanged OnItemTypesWithUnseenItemsChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UFortSchematicItemDefinition*, bool> SchematicLockedStates;
    
public:
    UFortInventoryContext();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WouldExceedMaxStackSize(UFortItemDefinition* ItemDefinition, int32 QuantityToTest) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WillAllItemsSlotInCollectionBook(const TArray<UFortItem*>& Items);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLastSeenResearchPointCollectionNodes();
    
    UFUNCTION(BlueprintCallable)
    void UpdateLastSeenHomebasePoints();
    
    UFUNCTION(BlueprintCallable)
    void UnlockSchematic(UFortSchematicItemDefinition* SchematicDefinition);
    
    UFUNCTION(BlueprintCallable)
    void UnlockAllSchematics();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void SortAccountItemArrayForTransmog(UPARAM(Ref) TArray<UFortAccountItem*>& VaultItems, TArray<UFortAccountItem*>& SortedItems) const;
    
    UFUNCTION(BlueprintCallable)
    bool RemoveItemFromQuickBar(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable)
    static FFortItemQuantityPair MakeItemQuantityPair(const UFortItemDefinition* ItemDefinition, int32 ItemQuantity);
    
    UFUNCTION(BlueprintCallable)
    void LockAllSchematics();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrapAvailableForBuilding(ABuildingSMActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotOccupiedByAnotherSlot(EFortQuickBars InQuickBar, int32 Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotHidden(EFortQuickBars InQuickBar, int32 Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnseenResearchPointCollectionNodes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnseenHomebasePoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnavailableItemsInStorage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTrapReadyForBuilding(const ABuildingSMActor* BuildingToAttachTo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRecyclingWarnings(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGameplayTagContainerExact(FGameplayTagContainer GameplayTagContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGameplayTagContainer(FGameplayTagContainer GameplayTagContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEvolutions(const UFortItem* Item) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleMcpProfilesInitialized();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWorldItemListForDeployableBaseThePlayerIsIn(TArray<UFortWorldItem*>& Items, const FFortItemListFilter& FilterSettings) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWorldItemList(TArray<UFortWorldItem*>& Items, const FFortItemListFilter& FilterSettings) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPersistentResourceItemDefinition* GetVoucherResourceItemDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVaultItemLimitStatus GetVaultItemLimitStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVaultItemLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FText> GetUserFriendlyTags(const UFortItem* Item, bool bAddWeaponTier);
    
    UFUNCTION(BlueprintCallable)
    FRecipe GetUpgradeItemRarityRecipeFromItemDefintion(UFortItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    void GetUnseenTransformKeys(EConversionControlKeyRequest RequestType, const EInventoryContentSortType SortType, TArray<UFortAccountItem*>& TransformKeys);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTrapAttachTypeName(ABuildingSMActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTransmogSacrificeDataFromItemDefintion(const UFortItemDefinition* ItemDefinition, FTransmogSacrifice& OutTransmogData) const;
    
    UFUNCTION(BlueprintCallable)
    void GetTransformKeys(EConversionControlKeyRequest RequestType, const EInventoryContentSortType SortType, TArray<UFortAccountItem*>& TransformKeys);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalItemQuantityByDefinition(UFortItemDefinition* ItemDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetTierText(EFortItemTier Tier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStorageOverflowFromAddingItem(UFortWorldItem* Item, int32 Count) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStorageNumItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStorageCapacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetShorthandItemStackCount(const int32 Quantity, const int32 MiniumFractionalDigits, const int32 MaximumFractionalDigits);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPersistentResourceItemDefinition* GetSchematicResourceItemDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResourceItemMaxStackSize(EFortResourceType ResourceType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortResourceItemDefinition* GetResourceItemDefinition(EFortResourceType ResourceType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetResourceIcon(EFortResourceType ResourceType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResourceCount(EFortResourceType ResourceType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetRecyclingWarningText(EItemRecyclingWarning Warning, const bool WereAnyItemsAnimate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetRecyclingCatalystDisplayName(const UFortItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetRecycleRestrictionReasonText(const EItemRecyclingRestrictionReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetQuickBarSlottedItem(EFortQuickBars InQuickBar, int32 Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetQuickbarFocus(EFortQuickBars& OutQuickBar, int32& OutSlot, int32& OutSecondarySlot, int32& OutPreviousFocusedSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetProfileItemsByType(UFortMcpProfile* Profile, EFortItemType ItemType, TArray<UFortAccountItem*>& Items) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetProfileItemsByFilterType(UFortMcpProfile* Profile, const FString& SearchText, const EInventoryContentSortType SortType, const EFortInventoryFilter Subtype, TArray<UFortAccountItem*>& OutItemList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPersistentResourceItemDefinition* GetPersonnelResourceItemDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumOfItemToMulch(const UFortItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumItemsToMulch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumInInventory(UFortItemDefinition* ItemDefinition, bool bIncludeReserved) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevelsPerItemPromotion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFortItem*> GetItemsToMulchBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetItemInstancesByDefinition(UFortItemDefinition* ItemDefinition, TArray<UFortItem*>& Items) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInventoryCapacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHomebaseUnlockedTransmogKeys(TArray<UFortAccountItem*>& TransmogKeys) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPersistentResourceItemDefinition* GetHeroResourceItemDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHeroAbilityPerks(UFortHero* Hero, TArray<FFortUIPerk>& HeroAbilityPerks) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetGameplayTagByIndex(FGameplayTagContainer GameplayTagContainer, int32 Index, FGameplayTag& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetEvolveRestrictionReasonText(const EItemEvolutionRestrictionReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortWeapon* GetEquippedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetDisassembleRestrictionReasonText(const EItemDisassembleRestrictionReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDeployableBaseOverflowFromAddingItem(UFortWorldItem* Item, int32 Count) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDeployableBaseItemCounts(int32& ItemsCount, int32& MaxItemsCount, int32& OverflowItemsCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortResourceItemDefinition* GetCurrentResourceItemDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentResourceCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWorldItemDefinition* GetCurrentAmmoItemDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCountOfVaultLimitedItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCountOfHeroItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCoreItemsByType(EFortItemType ItemType, TArray<UFortAccountItem*>& Items) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCoreItemsByFilterType(const FString& SearchText, const EInventoryContentSortType SortType, const EFortInventoryFilter Subtype, TArray<UFortAccountItem*>& OutItemList) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FRecipe> GetConversionRecipesFromItemDefintion(UFortItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBackpackOverflowFromAddingItem(UFortWorldItem* Item, int32 Count) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBackpackItemCounts(int32& ItemsCount, int32& MaxItemsCount, int32& OverflowItemsCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAccountItemsByType(EFortItemType ItemType, TArray<UFortAccountItem*>& Items) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAccountItemsByFilterType(const FString& SearchText, const EInventoryContentSortType SortType, const EFortInventoryFilter Subtype, TArray<UFortAccountItem*>& OutItemList) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceItemsChanged(const TArray<EFortInventoryFilter>& InventoryFilters);
    
    UFUNCTION(BlueprintCallable)
    void EquipItem(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void EnumerateRecyclingWarningsForItems(const TArray<UFortItem*>& Items, TArray<EItemRecyclingWarning>& OutWarnings);
    
    UFUNCTION(BlueprintCallable)
    bool DropItemOnQuickBar(UFortItem* Item, EFortQuickBars TargetQuickbar, int32 TargetSlot);
    
    UFUNCTION(BlueprintCallable)
    void DropItem(const UFortWorldItem* ItemBeingDropped, int32 Quantity);
    
    UFUNCTION(BlueprintCallable)
    bool DropCreativeItemOnQuickBar(UFortItem* Item, EFortQuickBars TargetQuickbar, int32 TargetSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesRequireResourceUpdate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesItemMatchFilter(UFortItem* Item, const FFortItemListFilter& FilterSettings) const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyWorldItem(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable)
    bool CraftSchematic(UFortSchematicItem* SchematicItem, EFortCraftFailCause& FailCause, EFortItemTier RequestedTier, int32 CraftCount);
    
    UFUNCTION(BlueprintCallable)
    bool CraftAndSlotSchematic(UFortSchematicItem* SchematicItem, int32 PostCraftSlot, EFortCraftFailCause& FailCause, EFortItemTier RequestedTier, int32 CraftCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUpgradeItemRarity(const UFortItem* Item, TArray<EItemEvolutionRestrictionReason>& OutRestrictionReasons);
    
    UFUNCTION(BlueprintCallable)
    bool CanSwapItem(UFortItem* Item, EFortQuickBars TargetQuickbar, int32 TargetSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRecycle(const UFortItem* Item, TArray<EItemRecyclingRestrictionReason>& OutRestrictionReasons) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanItemBePromoted(const UFortItem* Item, TArray<FFortItemQuantityPair>& Costs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanItemBeMulched(const UFortItem* Item, FText& OutRestrictionReasons) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEvolve(const UFortItem* Item, TArray<EItemEvolutionRestrictionReason>& OutRestrictionReasons) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDisassembleItem(const UFortWorldItem* Item, TArray<EItemDisassembleRestrictionReason>& OutRestrictionReasons) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCraftSchematic(UFortSchematicItem* SchematicItem, EFortCraftFailCause& FailCause, EFortItemTier RequestedTier, int32 CraftCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBulkCraftSchematic(UFortSchematicItem* SchematicItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreRecipeRequirementsMet(const TArray<FFortItemQuantityPair>& RecipeCosts) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAnyItemsUnseenForItemType(const EFortItemType ItemType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAnyItemsUnseenForInventoryFilter(const EFortFrontendInventoryFilter InventoryFilter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreAnyItemsInanimate(const TArray<UFortItem*>& Items);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreAnyItemsAnimate(const TArray<UFortItem*>& Items);
    
    UFUNCTION(BlueprintCallable)
    bool ActivateItem(UFortItem* Item);
    
};

