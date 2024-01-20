#pragma once
#include "CoreMinimal.h"
#include "FortDelayRTMMData.generated.h"

USTRUCT(BlueprintType)
struct FFortDelayRTMMData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDelayRTTM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRTTMDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRTTMDelay;
    
    FORTNITEGAME_API FFortDelayRTMMData();
};

