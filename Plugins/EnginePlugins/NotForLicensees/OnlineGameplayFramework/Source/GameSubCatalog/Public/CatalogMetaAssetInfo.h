#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "CatalogMetaAssetInfo.generated.h"

USTRUCT(BlueprintType)
struct GAMESUBCATALOG_API FCatalogMetaAssetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StructName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper Payload;
    
    FCatalogMetaAssetInfo();
};

