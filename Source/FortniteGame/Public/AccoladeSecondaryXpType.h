#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "AccoladeSecondaryXpType.generated.h"

USTRUCT(BlueprintType)
struct FAccoladeSecondaryXpType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat XpAmount;
    
    FORTNITEGAME_API FAccoladeSecondaryXpType();
};

