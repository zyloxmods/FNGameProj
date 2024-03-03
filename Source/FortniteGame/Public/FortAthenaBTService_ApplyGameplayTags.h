#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "GameplayTagContainer.h"
#include "FortAthenaBTService_ApplyGameplayTags.generated.h"

UCLASS(Blueprintable)
class UFortAthenaBTService_ApplyGameplayTags : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTagsToApply;
    
public:
    UFortAthenaBTService_ApplyGameplayTags();
};

