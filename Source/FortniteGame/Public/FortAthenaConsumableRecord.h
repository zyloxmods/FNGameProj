#pragma once
#include "CoreMinimal.h"
#include "FortAthenaConsumableRecord.generated.h"

class UFortAccountItemDefinition;

USTRUCT(BlueprintType)
struct FFortAthenaConsumableRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAccountItemDefinition* ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalQuantity;
    
    FORTNITEGAME_API FFortAthenaConsumableRecord();
};

