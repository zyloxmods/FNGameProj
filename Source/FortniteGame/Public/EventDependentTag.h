#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EventDependentTag.generated.h"

USTRUCT(BlueprintType)
struct FEventDependentTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequiredEventFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RelatedTag;
    
    FORTNITEGAME_API FEventDependentTag();
};

