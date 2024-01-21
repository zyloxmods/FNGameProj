#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CurveTable.h"
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
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortOnItemDefinitionCountChangedDelegate OnItemCountChanged;
#if WITH_EDITOR
    friend class UFortItemDefinitionThumbnailRenderer;
#endif
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity Rarity;
    
protected:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemType PrimaryAssetIdItemTypeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortInventoryFilter FilterOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemTier Tier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemTier MaxTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortTemplateAccess Access;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsAccountItem: 1;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNeverPersisted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowMultipleStacks: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoBalanceStacks: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceAutoPickup: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInventorySizeLimited: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemTypeNameOverride;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShortDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayNamePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SearchTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SecondaryCategoryOverrideTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TertiaryCategoryOverrideTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxStackSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontendPreviewScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortTooltip> TooltipClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortTooltipDisplayStatsList> StatList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle RatingLookup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SmallPreviewImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> LargePreviewImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DisplayAssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemSeriesDefinition* Series;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FrontendPreviewPivotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator FrontendPreviewInitialRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform FrontendPreviewMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform AthenaFrontendPreviewMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> FrontendPreviewMeshOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> FrontendPreviewSkeletalMeshOverride;
    
public:
    UFortItemDefinition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowPreviewOnCurrentHero() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStackable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventorySizeLimited() const;
    
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

