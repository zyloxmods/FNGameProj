#include "FortStoreFrontOfferInfo.h"

bool UFortStoreFrontOfferInfo::WasPrerollItemSeen() const {
    return false;
}

bool UFortStoreFrontOfferInfo::OfferHasDenyRequirements() const {
    return false;
}

void UFortStoreFrontOfferInfo::MarkPrerollAsSeen() const {
}

bool UFortStoreFrontOfferInfo::IsVotingOffer() const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsValidOffer() const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsUnique() const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsRefundable() const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsPurchasingAvailable() const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsPriceInRealMoney(const int32 PriceIndex) const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsPriceInMTX(const int32 PriceIndex) const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsPriceInGameItems(const int32 PriceIndex) const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsPrerollOffer() const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsOfferOwned() const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsNoPreviewOffer() const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsLockedByRequirement() const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsItemMissingFromInventory(const UFortItem* ItemToCheck) const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsItemMissingFromCollectionBook(const UFortItem* ItemToCheck) const {
    return false;
}

bool UFortStoreFrontOfferInfo::isItemGrantUnique(const FString& TemplateId) const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsItemDefOwned(const UFortItemDefinition* ItemDef) const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsGridLayout() const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsGiftOnly() const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsGiftLimitIgnored() const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsGiftingStorefrontOffer() const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsGiftable() const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsFriendTimeRequirementIgnored() const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsExclusive() const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsCurrencyVoucher() const {
    return false;
}

bool UFortStoreFrontOfferInfo::IsCardpack() const {
    return false;
}

bool UFortStoreFrontOfferInfo::HasRequirement(FText& RequirementText) const {
    return false;
}

bool UFortStoreFrontOfferInfo::HasMaxLevel(int32& MaxLevel) const {
    return false;
}

bool UFortStoreFrontOfferInfo::HasDisplayAsset() const {
    return false;
}

bool UFortStoreFrontOfferInfo::HasCatalogOfferName(FText& CatalogOfferName) const {
    return false;
}

int32 UFortStoreFrontOfferInfo::GetTotalQuantity() const {
    return 0;
}

FName UFortStoreFrontOfferInfo::GetStorefrontName() const {
    return NAME_None;
}

int32 UFortStoreFrontOfferInfo::GetSortPriority() const {
    return 0;
}

FText UFortStoreFrontOfferInfo::GetShortName() const {
    return FText::GetEmpty();
}

FText UFortStoreFrontOfferInfo::GetShortDescription() const {
    return FText::GetEmpty();
}

TEnumAsByte<ECatalogSaleType::Type> UFortStoreFrontOfferInfo::GetSaleType(const int32 PriceIndex) const {
    return ECatalogSaleType::NotOnSale;
}

FText UFortStoreFrontOfferInfo::GetSaleText(const int32 PriceIndex, const int32 ItemQuantity) const {
    return FText::GetEmpty();
}

bool UFortStoreFrontOfferInfo::GetSalePrice(const int32 PriceIndex, FText& SalePrice, const int32 ItemQuantity) const {
    return false;
}

ECatalogRequirementType UFortStoreFrontOfferInfo::GetRequirementTypeAtIndex(int32 RequirementIndex) const {
    return ECatalogRequirementType::RequireFulfillment;
}

int32 UFortStoreFrontOfferInfo::GetRequirementMinQuantityAtIndex(int32 RequirementIndex) const {
    return 0;
}

FString UFortStoreFrontOfferInfo::GetRequirementIdAtIndex(int32 RequirementIndex) const {
    return TEXT("");
}

int32 UFortStoreFrontOfferInfo::GetQuantityRemaining() const {
    return 0;
}

UFortAccountItemDefinition* UFortStoreFrontOfferInfo::GetPriceItem(const int32 PriceIndex, int32& RequiredItemCount) const {
    return NULL;
}

TEnumAsByte<EStoreCurrencyType::Type> UFortStoreFrontOfferInfo::GetPriceCurrencyType(const int32 PriceIndex) const {
    return EStoreCurrencyType::RealMoney;
}

int32 UFortStoreFrontOfferInfo::GetPrerollRarity() const {
    return 0;
}

bool UFortStoreFrontOfferInfo::GetPrerollOfferItem(FFortItemQuantityPair& ItemQuantityPair) const {
    return false;
}

ECatalogOfferType UFortStoreFrontOfferInfo::GetOfferType() const {
    return ECatalogOfferType::StaticPrice;
}

FString UFortStoreFrontOfferInfo::GetOfferId() const {
    return TEXT("");
}

EFortMtxOfferDisplaySize UFortStoreFrontOfferInfo::GetOfferDisplaySize() const {
    return EFortMtxOfferDisplaySize::Small;
}

UFortMtxOfferData* UFortStoreFrontOfferInfo::GetOfferDisplayAsset() const {
    return NULL;
}

FCatalogOffer UFortStoreFrontOfferInfo::GetOffer() const {
    return FCatalogOffer{};
}

int32 UFortStoreFrontOfferInfo::GetNumRequirements() const {
    return 0;
}

int32 UFortStoreFrontOfferInfo::GetNumGrantedItems() const {
    return 0;
}

FText UFortStoreFrontOfferInfo::GetNormalPrice(const int32 PriceIndex, const int32 ItemQuantity) const {
    return FText::GetEmpty();
}

FText UFortStoreFrontOfferInfo::GetName() const {
    return FText::GetEmpty();
}

FString UFortStoreFrontOfferInfo::GetMetaValue(const FString& MetaTag) const {
    return TEXT("");
}

bool UFortStoreFrontOfferInfo::GetMetaAsBool(const FString& MetaTag) const {
    return false;
}

int32 UFortStoreFrontOfferInfo::GetMaxConcurrentPurchases() const {
    return 0;
}

FText UFortStoreFrontOfferInfo::GetItemTypeText() const {
    return FText::GetEmpty();
}

int32 UFortStoreFrontOfferInfo::GetItemQuantity(const FString& TemplateId) const {
    return 0;
}

int32 UFortStoreFrontOfferInfo::GetItemOfferCount(const FString& TemplateId) const {
    return 0;
}

void UFortStoreFrontOfferInfo::GetGrantedItems(TArray<UFortItem*>& Items) const {
}

void UFortStoreFrontOfferInfo::GetGrantedItemQuantityPairs(bool bPrioritizeUnowned, bool bCombineCurrencyItems, TArray<FFortItemQuantityPair>& ItemQuantityPairs) const {
}

bool UFortStoreFrontOfferInfo::GetGrantedItemQuantityPair(int32 GrantedItemIndex, FFortItemQuantityPair& ItemQuantity) const {
    return false;
}

int32 UFortStoreFrontOfferInfo::GetGrantedItemQuantity(int32 GrantedItemIndex) const {
    return 0;
}

void UFortStoreFrontOfferInfo::GetGrantedItemDefinitions(TArray<UFortAccountItemDefinition*>& GrantedItems) const {
}

UFortAccountItemDefinition* UFortStoreFrontOfferInfo::GetGrantedItemDefinition(int32 GrantedItemIndex) const {
    return NULL;
}

EFortMtxStoreOfferType UFortStoreFrontOfferInfo::GetFortStoreOfferType() const {
    return EFortMtxStoreOfferType::FoundersPack;
}

int32 UFortStoreFrontOfferInfo::GetFortStoreOfferFinalPrice() const {
    return 0;
}

FString UFortStoreFrontOfferInfo::GetFortStoreOfferCategory() const {
    return TEXT("");
}

FString UFortStoreFrontOfferInfo::GetForcedGiftBoxTemplateId() const {
    return TEXT("");
}

int32 UFortStoreFrontOfferInfo::GetFirstGrantQuantity() const {
    return 0;
}

UFortAccountItemDefinition* UFortStoreFrontOfferInfo::GetFirstGrantItemDefinition() const {
    return NULL;
}

FText UFortStoreFrontOfferInfo::GetFinalPrice(const int32 PriceIndex, const int32 ItemQuantity) const {
    return FText::GetEmpty();
}

void UFortStoreFrontOfferInfo::GetDynamicBundleItems(TArray<FBundledItemInfo>& Items) const {
}

FString UFortStoreFrontOfferInfo::GetDisplayAssetPath() const {
    return TEXT("");
}

FText UFortStoreFrontOfferInfo::GetDescription() const {
    return FText::GetEmpty();
}

UFortAccountItemDefinition* UFortStoreFrontOfferInfo::GetCurrencyItemDefinition() const {
    return NULL;
}

FText UFortStoreFrontOfferInfo::GetCategoryText() const {
    return FText::GetEmpty();
}

int32 UFortStoreFrontOfferInfo::GetBonusQuantity() const {
    return 0;
}

int32 UFortStoreFrontOfferInfo::GetBaseQuantity() const {
    return 0;
}

FString UFortStoreFrontOfferInfo::GetBannerOverrideTag() const {
    return TEXT("");
}

EAppStore UFortStoreFrontOfferInfo::GetAppStoreByPrice(const int32 PriceIndex, const int32 ItemQuantity) const {
    return EAppStore::DebugStore;
}

UFortAccountItem* UFortStoreFrontOfferInfo::CreatePreviewItem() const {
    return NULL;
}

bool UFortStoreFrontOfferInfo::AreGrantedItemsOwned() const {
    return false;
}

UFortStoreFrontOfferInfo::UFortStoreFrontOfferInfo() {
    this->OfferDisplayAsset = NULL;
}

