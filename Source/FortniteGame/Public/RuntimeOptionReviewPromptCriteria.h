#pragma once
#include "CoreMinimal.h"
#include "RuntimeOptionReviewPromptCriteria.generated.h"

USTRUCT(BlueprintType)
struct FRuntimeOptionReviewPromptCriteria {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinutesPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GamesPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BestResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KillCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequireAll;
    
    FORTNITEGAME_API FRuntimeOptionReviewPromptCriteria();
};

