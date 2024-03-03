#pragma once
#include "CoreMinimal.h"
#include "DistanceToTargetComparison.h"
#include "FortBTDecorator_QueryGameplayAbility.h"
#include "FortBTDecorator_GameplayAbility_CompareDistance.generated.h"

UCLASS(Blueprintable)
class UFortBTDecorator_GameplayAbility_CompareDistance : public UFortBTDecorator_QueryGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDistanceToTargetComparison> DistanceComparisons;
    
    UFortBTDecorator_GameplayAbility_CompareDistance();
};

