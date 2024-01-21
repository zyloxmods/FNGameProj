#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "JsonObjectWrapper.h"
#include "EventRecord.h"
#include "EventChannelState.generated.h"

USTRUCT(BlueprintType)
struct FEventChannelState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime ValidFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventRecord> ActiveEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper State;
    
    SCHEDULEDEVENTS_API FEventChannelState();
};

