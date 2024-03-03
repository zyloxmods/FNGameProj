#pragma once
#include "CoreMinimal.h"
#include "CosmeticVariantCache.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FCosmeticVariantCache {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ItemDefFor;
    
public:
    FORTNITEGAME_API FCosmeticVariantCache();
};

