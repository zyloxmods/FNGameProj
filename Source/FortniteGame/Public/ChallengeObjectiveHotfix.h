#pragma once
#include "CoreMinimal.h"
#include "ChallengeObjectiveHotfix.generated.h"

USTRUCT(BlueprintType)
struct FChallengeObjectiveHotfix {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewCount;
    
    FORTNITEGAME_API FChallengeObjectiveHotfix();
};

