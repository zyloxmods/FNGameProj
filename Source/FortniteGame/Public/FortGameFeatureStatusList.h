#pragma once
#include "CoreMinimal.h"
#include "FortGameFeatureStatus.h"
#include "FortGameFeatureStatusList.generated.h"

USTRUCT(BlueprintType)
struct FFortGameFeatureStatusList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameFeatureStatus> Features;
    
    FORTNITEGAME_API FFortGameFeatureStatusList();
};

