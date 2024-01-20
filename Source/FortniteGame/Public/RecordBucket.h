#pragma once
#include "CoreMinimal.h"
#include "RecordBucket.generated.h"

USTRUCT(BlueprintType)
struct FRecordBucket {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> RecordIndices;
    
public:
    FORTNITEGAME_API FRecordBucket();
};

