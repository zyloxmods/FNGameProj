#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Storefront.h"
#include "CatalogDownload.generated.h"

USTRUCT(BlueprintType)
struct GAMESUBCATALOG_API FCatalogDownload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefreshIntervalHrs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DailyPurchaseHrs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Expiration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStorefront> Storefronts;
    
    FCatalogDownload();
};

