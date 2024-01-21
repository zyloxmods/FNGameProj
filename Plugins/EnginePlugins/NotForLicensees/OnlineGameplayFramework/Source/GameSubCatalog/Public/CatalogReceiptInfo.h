#pragma once
#include "CoreMinimal.h"
#include "EAppStore.h"
#include "CatalogReceiptInfo.generated.h"

USTRUCT(BlueprintType)
struct GAMESUBCATALOG_API FCatalogReceiptInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAppStore::Type> AppStore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AppStoreId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReceiptId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReceiptInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PurchaseCorrelationId;
    
    FCatalogReceiptInfo();
};

