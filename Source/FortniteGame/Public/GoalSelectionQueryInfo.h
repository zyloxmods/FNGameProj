#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GoalSelectionQueryInfo.generated.h"

class UEnvQuery;

USTRUCT(BlueprintType)
struct FGoalSelectionQueryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* GoalSelectionQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredGameplayTags;
    
    FORTNITEGAME_API FGoalSelectionQueryInfo();
};

