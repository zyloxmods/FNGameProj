#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DamageDistanceTagEval.generated.h"

USTRUCT(BlueprintType)
struct FDamageDistanceTagEval {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DistanceTag;
    
    FORTNITEGAME_API FDamageDistanceTagEval();
};

