#pragma once
#include "CoreMinimal.h"
#include "CatalogDynamicBundleItem.h"
#include "ECatalogSaleType.h"
#include "EStoreCurrencyType.h"
#include "CatalogDynamicBundle.generated.h"

USTRUCT(BlueprintType)
struct GAMESUBCATALOG_API FCatalogDynamicBundle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DiscountedBasePrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegularBasePrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FloorPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStoreCurrencyType::Type> CurrencyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrencySubType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECatalogSaleType::Type> DisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCatalogDynamicBundleItem> BundleItems;
    
    FCatalogDynamicBundle();
};

