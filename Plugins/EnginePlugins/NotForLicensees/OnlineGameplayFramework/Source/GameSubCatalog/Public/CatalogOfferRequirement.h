#pragma once
#include "CoreMinimal.h"
#include "ECatalogRequirementType.h"
#include "CatalogOfferRequirement.generated.h"

USTRUCT(BlueprintType)
struct GAMESUBCATALOG_API FCatalogOfferRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECatalogRequirementType RequirementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequiredId;
    
    FCatalogOfferRequirement();
};

