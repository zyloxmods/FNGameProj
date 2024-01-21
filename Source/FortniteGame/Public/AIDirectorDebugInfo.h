#pragma once
#include "CoreMinimal.h"
#include "AIDirectorDebugInfo.generated.h"

USTRUCT(BlueprintType)
struct FAIDirectorDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> DebugGraphData;
    
    FORTNITEGAME_API FAIDirectorDebugInfo();
};

