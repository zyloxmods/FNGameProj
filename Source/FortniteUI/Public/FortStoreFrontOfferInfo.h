#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "FortItemQuantityPair.h"
#include "CatalogOffer.h"
#include "ECatalogOfferType.h"
#include "ECatalogRequirementType.h"
#include "ECatalogSaleType.h"
#include "Styling/SlateBrush.h"
#include "BundledItemInfo.h"
#include "EFortMtxStoreOfferType.h"
#include "FortMtxDetailsAttribute.h"
#include "FortMtxGradient.h"
#include "FortStoreFrontOfferInfo.generated.h"

class UFortAccountItem;
class UFortAccountItemDefinition;
class UFortItem;
class UFortItemDefinition;
class UFortMtxOfferData;

UCLASS(Blueprintable)
class UFortStoreFrontOfferInfo : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMtxOfferData* OfferDisplayAsset;
    
public:
    UFortStoreFrontOfferInfo();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasPrerollItemSeen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OfferHasDenyRequirements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void MarkPrerollAsSeen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidOffer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnique() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRefundable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPriceInRealMoney(const int32 PriceIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPriceInMTX(const int32 PriceIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrerollOffer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockedByRequirement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemMissingFromInventory(const UFortItem* ItemToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemMissingFromCollectionBook(const UFortItem* ItemToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isItemGrantUnique(const FString& TemplateId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemDefOwned(const UFortItemDefinition* ItemDef) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGiftOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGiftable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExclusive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrencyVoucher() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCardpack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRequirement(FText& RequirementText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMaxLevel(int32& MaxLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDisplayAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCatalogOfferName(FText& CatalogOfferName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalQuantity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetTileImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetStorefrontName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSortPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetShortName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetShortDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ECatalogSaleType::Type> GetSaleType(const int32 PriceIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSaleText(const int32 PriceIndex, const int32 ItemQuantity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSalePrice(const int32 PriceIndex, FText& SalePrice, const int32 ItemQuantity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECatalogRequirementType GetRequirementTypeAtIndex(int32 RequirementIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequirementMinQuantityAtIndex(int32 RequirementIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRequirementIdAtIndex(int32 RequirementIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQuantityRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAccountItemDefinition* GetPriceItem(const int32 PriceIndex, int32& RequiredItemCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrerollRarity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPrerollOfferItem(FFortItemQuantityPair& ItemQuantityPair) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECatalogOfferType GetOfferType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOfferId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortMtxOfferData* GetOfferDisplayAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCatalogOffer GetOffer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumRequirements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumGrantedItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNormalPrice(const int32 PriceIndex, const int32 ItemQuantity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMetaAsBool(const FString& MetaTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxConcurrentPurchases() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemTypeText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemQuantity(const FString& TemplateId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemOfferCount(const FString& TemplateId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGrantedItems(TArray<UFortItem*>& Items) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGrantedItemQuantityPairs(bool bPrioritizeUnowned, TArray<FFortItemQuantityPair>& ItemQuantityPairs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGrantedItemQuantityPair(int32 GrantedItemIndex, FFortItemQuantityPair& ItemQuantity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGrantedItemQuantity(int32 GrantedItemIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGrantedItemDefinitions(TArray<UFortAccountItemDefinition*>& GrantedItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAccountItemDefinition* GetGrantedItemDefinition(int32 GrantedItemIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortMtxGradient GetGradient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortMtxStoreOfferType GetFortStoreOfferType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFortStoreOfferCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetForcedGiftBoxTemplateId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFirstGrantQuantity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAccountItemDefinition* GetFirstGrantItemDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDynamicBundleItems(TArray<FBundledItemInfo>& Items) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDisplayAssetPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetDetailsImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortMtxDetailsAttribute> GetDetailsAttributes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAccountItemDefinition* GetCurrencyItemDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCategoryText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBonusQuantity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseQuantity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBannerOverrideTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetBackground() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAccountItem* CreatePreviewItem() const;
    
};

