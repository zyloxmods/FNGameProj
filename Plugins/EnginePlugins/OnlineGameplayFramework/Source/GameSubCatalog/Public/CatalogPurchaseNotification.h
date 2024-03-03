#pragma once
#include "CoreMinimal.h"
#include "McpLootResult.h"
#include "CatalogPurchaseNotification.generated.h"

USTRUCT(BlueprintType)
struct GAMESUBCATALOG_API FCatalogPurchaseNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMcpLootResult LootResult;
    
    FCatalogPurchaseNotification();
};

