#pragma once
#include "CoreMinimal.h"
#include "EStreamingRadioSourceState.h"
#include "StreamingRadioSourceData.generated.h"

class URadioContentSourceItemDefinition;

USTRUCT(BlueprintType)
struct FStreamingRadioSourceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStreamingRadioSourceState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeoutSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URadioContentSourceItemDefinition* SourceOverride;
    
    SRIRACHARANCH_API FStreamingRadioSourceData();
};

