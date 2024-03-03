#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetData.h"
#include "FortMantisTargetData.generated.h"

USTRUCT(BlueprintType)
struct FFortMantisTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TechniqueDataIndex;
    
    MANTISRUNTIME_API FFortMantisTargetData();
};

