#pragma once
#include "CoreMinimal.h"
#include "VerseIntRange.generated.h"

USTRUCT(BlueprintType)
struct FVerseIntRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Right;
    
    SOLARISINTEROP_API FVerseIntRange();
};

