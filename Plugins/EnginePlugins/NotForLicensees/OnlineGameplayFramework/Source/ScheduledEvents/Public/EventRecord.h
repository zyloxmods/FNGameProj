#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventRecord.generated.h"

USTRUCT(BlueprintType)
struct FEventRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime ActiveUntil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime ActiveSince;
    
    SCHEDULEDEVENTS_API FEventRecord();
};

