#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RecordBucket.h"
#include "RecordBucketMap.generated.h"

USTRUCT(BlueprintType)
struct FRecordBucketMap {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FIntPoint, FRecordBucket> PositionToRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> DuplicateRecords;
    
public:
    FORTNITEGAME_API FRecordBucketMap();
};

