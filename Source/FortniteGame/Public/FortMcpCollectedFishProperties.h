#pragma once
#include "CoreMinimal.h"
#include "FortMcpCollectedFishProperties.generated.h"

USTRUCT(BlueprintType)
struct FFortMcpCollectedFishProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    FORTNITEGAME_API FFortMcpCollectedFishProperties();
};

