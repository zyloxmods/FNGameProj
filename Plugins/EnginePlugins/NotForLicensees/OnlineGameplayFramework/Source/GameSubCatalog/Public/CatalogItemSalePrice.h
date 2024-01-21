#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECatalogSaleType.h"
#include "CatalogItemSalePrice.generated.h"

USTRUCT(BlueprintType)
struct GAMESUBCATALOG_API FCatalogItemSalePrice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SalePrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECatalogSaleType::Type> SaleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime EndTime;
    
    FCatalogItemSalePrice();
};

