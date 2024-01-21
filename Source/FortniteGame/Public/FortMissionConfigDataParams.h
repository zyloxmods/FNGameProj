#pragma once
#include "CoreMinimal.h"
#include "FortMissionConfigDataBucket.h"
#include "FortMissionConfigDataParams.generated.h"

USTRUCT(BlueprintType)
struct FFortMissionConfigDataParams {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMissionConfigDataBucket> ConfigParams;
    
public:
    FORTNITEGAME_API FFortMissionConfigDataParams();
};

