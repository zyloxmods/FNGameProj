#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CharacterFallbackPreloadBlock.generated.h"

USTRUCT(BlueprintType)
struct FCharacterFallbackPreloadBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldGoInNPCBudget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FallbackTag;
    
    FORTNITEGAME_API FCharacterFallbackPreloadBlock();
};

