#pragma once
#include "CoreMinimal.h"
#include "AccountIdAndScore.generated.h"

USTRUCT(BlueprintType)
struct FAccountIdAndScore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccountId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCriticalMatchBonus;
    
    FORTNITEGAME_API FAccountIdAndScore();
};

