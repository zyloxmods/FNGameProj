#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CurveTable.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "McpItemDefinitionBase.h"
#include "Styling/SlateBrush.h"
#include "EFortInventoryFilter.h"
#include "EFortItemTier.h"
#include "EFortItemType.h"
#include "EFortRarity.h"
#include "EFortTemplateAccess.h"
#include "FortColorPalette.h"
#include "FortOnItemDefinitionCountChangedDelegateDelegate.h"
#include "FortTooltipInterface.h"
#include "Templates/SubclassOf.h"
#include "FortItemDefinition.generated.h"

class AActor;
class UFortItem;
class UFortItemSeriesDefinition;
class UFortTooltip;
class UFortTooltipDisplayStatsList;
class UMeshComponent;
class UObject;
class USkeletalMesh;
class UStaticMesh;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortItemDefinition : public UMcpItemDefinitionBase, public IGameplayTagAssetInterface, public IFortTooltipInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, meta=(AllowPrivateAccess=true))
    FFortOnItemDefinitionCountChangedDelegate OnItemCountChanged;
  friend class UFortItemDefinitionThumbnailRenderer;  
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    EFortRarity Rarity;
    
protected:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    EFortItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    EFortItemType PrimaryAssetIdItemTypeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    EFortInventoryFilter FilterOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    EFortItemTier Tier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    EFortItemTier MaxTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    EFortTemplateAccess Access;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsAccountItem: 1;

    /** Set to true if this item should never be saved, use for test items and items that should be added at runtime */
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Release Version")
    uint8 bNeverPersisted: 1;

    //Is this item allowed to have multiple stacks, or is it limited to only one?
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    uint8 bAllowMultipleStacks: 1;

    /** If true, multiple stacks of this item will automatically balance to fill larger stacks first  */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    uint8 bAutoBalanceStacks: 1;

    /** If this is true, the item will try and auto-pickup no matter what */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    uint8 bForceAutoPickup: 1;

    /** Does this item count towards the inventory limit? */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Inventory Limit")
    uint8 bInventorySizeLimited: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    FText ItemTypeNameOverride;

    /** Name of this item. */
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    FText DisplayName;

    /** Short description of this item. Seriously short! */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    FText ShortDescription;

    /** Description of this item. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    FText DisplayNamePrefix;

    /** Tags used for matching the player entered search string */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    FText SearchTags;

    /** Gameplay-related tags associated with this item definition */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Owned Tags")
    FGameplayTagContainer GameplayTags;

    /** Automation-only tags associated with this item definition */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Owned Tags")
    FGameplayTagContainer AutomationTags;

    /** If any of these tags are on the owning player, they will be used to override our secondary category */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    FGameplayTagContainer SecondaryCategoryOverrideTags;

    /** If any of these tags are on the owning player, they will be used to override our tertiary category */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    FGameplayTagContainer TertiaryCategoryOverrideTags;

    /** Max size of this item's stack, if it can stack. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    FScalableFloat MaxStackSize;

    /** Max number allowed to be owned via purchasing. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    FScalableFloat PurchaseItemLimit;

    // When previewing this item in the frontend, the actor/component will be scaled by this amount.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Frontend Preview")
    float FrontendPreviewScale;

    /** The tooltip class that can display information about this item definition */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Tooltips")
    TSoftClassPtr<UFortTooltip> TooltipClass;

    /** The stat list that contains relevant stats for this item definition */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Tooltips")
    TSoftObjectPtr<UFortTooltipDisplayStatsList> StatList;

    /** The lookup table for determining this item's rating given its level */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Rating")
    FCurveTableRowHandle RatingLookup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    TSoftObjectPtr<UTexture2D> WidePreviewImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    TSoftObjectPtr<UTexture2D> SmallPreviewImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    TSoftObjectPtr<UTexture2D> LargePreviewImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    FSoftObjectPath DisplayAssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    UFortItemSeriesDefinition* Series;
    
private:
    // When previewing this item in the frontend, the actor/component will be offset by this vector (added), before rotations are applied.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Frontend Preview")
    FVector FrontendPreviewPivotOffset;

    // When previewing this item in the frontend, the actor/component will be rotated by this amount initially.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Frontend Preview")
    FRotator FrontendPreviewInitialRotation;

    /** The optional static mesh override to use in the frontend */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Frontend Preview")
    TSoftObjectPtr<UStaticMesh> FrontendPreviewMeshOverride;

    /** The optional static mesh override to use in the frontend */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Frontend Preview")
    TSoftObjectPtr<USkeletalMesh> FrontendPreviewSkeletalMeshOverride;
    
public:
    UFortItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowPreviewOnCurrentHero(const int32 InSubSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStackable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventorySizeLimited() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetWidePreviewImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UFortTooltip> GetTooltip(bool bSummaryTooltip) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetSmallPreviewImageBrush() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetSmallPreviewImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSingleLineDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetShortDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRichDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortColorPalette GetRarityOrSeriesColors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortRarity GetRarity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPreviewStaticMeshAsset(TSoftObjectPtr<UStaticMesh>& Asset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPreviewSkeletalMeshAsset(TSoftObjectPtr<USkeletalMesh>& Asset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPreviewPrefabAssetAtSubSlot(TSoftClassPtr<AActor>& Asset, const int32 InSubSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPreviewPrefabAsset(TSoftClassPtr<AActor>& Asset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetPreviewMeshOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPreviewAssets(TArray<TSoftObjectPtr<UObject>>& Assets) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPersistentName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetLargePreviewImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemTypeName(bool bUsePlural) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortItemType GetItemType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetInactivePreviewImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetHiResDisplayAssetPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortTooltipDisplayStatsList* GetDisplayStats() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayName(bool bBaseName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetDisplayAssetPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetDescription() const;
    
    UFUNCTION(BlueprintCallable)
    void CustomizePreviewPrefab(AActor* PrefabInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CustomizePreviewMesh(UMeshComponent* Mesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* CreateTemporaryItemInstanceBP(int32 Count, int32 Level) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* CreateTemporaryInstanceFromExistingItemBP(UFortItem* ExistingItem, int32 Count, int32 Level) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void CopyTemplateIdToClipboard();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

