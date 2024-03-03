#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "McpItemAware.h"
#include "Styling/SlateBrush.h"
#include "EFortBrushSize.h"
#include "EFortInventoryFilter.h"
#include "EFortItemCategoryOrdinal.h"
#include "EFortItemTier.h"
#include "EFortItemType.h"
#include "EFortRarity.h"
#include "EItemEvolutionRestrictionReason.h"
#include "EItemUpgradeRestrictionReason.h"
#include "FortAlterationSlotStatus.h"
#include "FortMultiSizeBrush.h"
#include "FortOnItemChangedDelegateDelegate.h"
#include "FortOnItemDestroyedDelegateDelegate.h"
#include "FortItem.generated.h"

class AFortPlayerController;
class UAbilitySystemComponent;
class UFortAlterationItemDefinition;
class UFortItemDefinition;
class UFortPersistentResourceItemDefinition;
class UFortWeaponItemDefinition;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortItem : public UObject, public IMcpItemAware {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortOnItemChangedDelegate OnItemChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortOnItemDestroyedDelegate OnItemDestroyed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bLoadedFromSave: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bTemporaryItemOwningController: 1;
    
public:
    UFortItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetCategory(EFortItemCategoryOrdinal Ordinal, FText& OutCategoryDisplayName, bool& OutHasIcon, FFortMultiSizeBrush& OutCategoryIconBrush) const;
    
    UFUNCTION(BlueprintCallable)
    void SetOwningControllerForTemporaryItem(AFortPlayerController* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTemporaryItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSchematicOrCraftedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSchematic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventoryOverflowItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInStorageVault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipable(const AFortPlayerController* EquippingPC, bool bGamepadSwitchingForHeroAbilities) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDroppedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivatable(const AFortPlayerController* FortPC, FGameplayTagContainer& FailureReason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRarityUpgrade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEvolutions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDurability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetWidePreviewImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetUpgradeRestrictionReasonText(const EItemUpgradeRestrictionReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPersistentResourceItemDefinition* GetUpgradeResourceItemDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpgradeCostToLevel(int32 TargetLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpgradeCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortItemType GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortItemTier GetTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTertiaryCategory(FText& ItemCategoryText, FSlateBrush& ItemCategoryBrush, TEnumAsByte<EFortBrushSize::Type> BrushSize) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetSmallPreviewImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSecondaryCategory(FText& ItemCategoryText, FSlateBrush& ItemCategoryBrush, TEnumAsByte<EFortBrushSize::Type> BrushSize) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSearchTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortItemType GetSchematicResultType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWeaponItemDefinition* GetSchematicCraftingResultOrCraftedWeaponBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItemDefinition* GetSchematicCraftingResultBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRecycleValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetRaritySecondaryColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetRarityColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortRarity GetRarity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPromotionTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPrimaryCategory(FText& ItemCategoryText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftObjectPtr<UObject>> GetPreviewAssets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPhantomReserveAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerController* GetOwningController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumInStack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetNumberOfSlotsTaken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNormalizedDurability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortItemTier GetMaxTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxStackSize(UAbilitySystemComponent* AbilityComp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLoadedAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevelRelativeCostForRarityUpgrade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetLargePreviewImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemTypeName(bool bUsePlural) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetItemGuid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItemDefinition* GetItemDefinitionBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetInactivePreviewImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortInventoryFilter GetFilterCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetEvolveRestrictionReasonText(const EItemEvolutionRestrictionReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayNameWithoutPrefix() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownTimeRemaining(AFortPlayerController* FortPC, float& CooldownDuration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortAlterationSlotStatus> GetAlterationSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFortAlterationItemDefinition*> GetActiveAlterations(int32 PretendLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesMatchSearchString(const FString& SearchString) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUpgradeItemRarity(TArray<EItemEvolutionRestrictionReason>& OutRestrictionReasons) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEvolve(TArray<EItemEvolutionRestrictionReason>& OutRestrictionReasons) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeUpgraded(TArray<EItemUpgradeRestrictionReason>& OutRestrictionReasons) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeUnslotted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeDropped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAffordPromotion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowedToBeLockedInInventory() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

