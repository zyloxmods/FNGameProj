#pragma once
#include "CoreMinimal.h"
#include "CatalogKeyValue.generated.h"

USTRUCT(BlueprintType)
struct GAMESUBCATALOG_API FCatalogKeyValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FCatalogKeyValue();
};

