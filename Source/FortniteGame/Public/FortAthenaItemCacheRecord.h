#pragma once
#include "CoreMinimal.h"
#include "FortAthenaItemCacheRecord.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FFortAthenaItemCacheRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ItemDef;
    
    FORTNITEGAME_API FFortAthenaItemCacheRecord();
};

