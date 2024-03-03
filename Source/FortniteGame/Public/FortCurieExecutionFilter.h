#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortCurieExecutionFilter.generated.h"

USTRUCT(BlueprintType)
struct FFortCurieExecutionFilter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequiredState;
    
public:
    FORTNITEGAME_API FFortCurieExecutionFilter();
};

