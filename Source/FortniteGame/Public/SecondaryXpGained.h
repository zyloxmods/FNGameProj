#pragma once
#include "CoreMinimal.h"
#include "SecondaryXpGained.generated.h"

USTRUCT(BlueprintType)
struct FSecondaryXpGained {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 secondaryXp;
    
    FORTNITEGAME_API FSecondaryXpGained();
};

