#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortConditionalIncludeTags.generated.h"

USTRUCT(BlueprintType)
struct FFortConditionalIncludeTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ConditionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IncludeTags;
    
    FORTNITEGAME_API FFortConditionalIncludeTags();
};

