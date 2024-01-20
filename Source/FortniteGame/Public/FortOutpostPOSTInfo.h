#pragma once
#include "CoreMinimal.h"
#include "FortDepositedResources.h"
#include "FortOutpostPOSTInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortOutpostPOSTInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortDepositedResources> DepositedPostItems;
    
    FORTNITEGAME_API FFortOutpostPOSTInfo();
};

