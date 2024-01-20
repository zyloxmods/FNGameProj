#pragma once
#include "CoreMinimal.h"
#include "FortTierProgressionInfo.h"
#include "FortTierProgression.generated.h"

USTRUCT(BlueprintType)
struct FFortTierProgression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTierProgressionInfo> ProgressionInfo;
    
    FORTNITEGAME_API FFortTierProgression();
};

