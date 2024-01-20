#pragma once
#include "CoreMinimal.h"
#include "GameSummaryInfo.generated.h"

USTRUCT(BlueprintType)
struct FGameSummaryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Completed;
    
    FORTNITEGAME_API FGameSummaryInfo();
};

