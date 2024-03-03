#pragma once
#include "CoreMinimal.h"
#include "AthenaMatchXpReward.generated.h"

USTRUCT(BlueprintType)
struct FAthenaMatchXpReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    FORTNITEGAME_API FAthenaMatchXpReward();
};

