#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "ItemQuantity.generated.h"

USTRUCT(BlueprintType)
struct GAMESUBCATALOG_API FItemQuantity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper Attributes;
    
    FItemQuantity();
};

