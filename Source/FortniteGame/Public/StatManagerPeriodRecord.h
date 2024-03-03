#pragma once
#include "CoreMinimal.h"
#include "StatRecord.h"
#include "StatManagerPeriodRecord.generated.h"

USTRUCT(BlueprintType)
struct FStatManagerPeriodRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatRecord> StatRecords;
    
    FORTNITEGAME_API FStatManagerPeriodRecord();
};

