#pragma once
#include "CoreMinimal.h"
#include "MingiameScoreboardRow.h"
#include "MinigameScoreboardPlayerRow.h"
#include "MinigameScoreboardBucketRow.generated.h"

USTRUCT(BlueprintType)
struct FMinigameScoreboardBucketRow : public FMingiameScoreboardRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Standing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BucketIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMinigameScoreboardPlayerRow> PlayerRows;
    
    FORTNITEGAME_API FMinigameScoreboardBucketRow();
};

