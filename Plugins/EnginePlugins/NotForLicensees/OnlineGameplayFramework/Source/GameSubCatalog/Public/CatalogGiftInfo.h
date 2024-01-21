#pragma once
#include "CoreMinimal.h"
#include "CatalogOfferRequirement.h"
#include "CatalogGiftInfo.generated.h"

USTRUCT(BlueprintType)
struct GAMESUBCATALOG_API FCatalogGiftInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ForcedGiftBoxTemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCatalogOfferRequirement> PurchaseRequirements;
    
    FCatalogGiftInfo();
};

