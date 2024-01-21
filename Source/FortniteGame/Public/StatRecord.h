#pragma once
#include "CoreMinimal.h"
#include "StatRecord.generated.h"

USTRUCT(BlueprintType)
struct FStatRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StatValue;
    
    FORTNITEGAME_API FStatRecord();
};

