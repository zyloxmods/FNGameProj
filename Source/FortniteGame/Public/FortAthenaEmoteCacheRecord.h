#pragma once
#include "CoreMinimal.h"
#include "FortAthenaEmoteCacheRecord.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FFortAthenaEmoteCacheRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ItemDef;
    
    FORTNITEGAME_API FFortAthenaEmoteCacheRecord();
};

