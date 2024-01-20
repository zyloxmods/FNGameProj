#pragma once
#include "CoreMinimal.h"
#include "CatalogOffer.h"
#include "Storefront.generated.h"

USTRUCT(BlueprintType)
struct GAMESUBCATALOG_API FStorefront {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCatalogOffer> CatalogEntries;
    
    FStorefront();
};

