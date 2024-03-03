#pragma once
#include "CoreMinimal.h"
#include "FortMinigameGroupStats.h"
#include "FortMinigamePlayerBucketStats.h"
#include "FortMinigamePlayerStats.h"
#include "FortMinigameStatCollection.generated.h"

USTRUCT(BlueprintType)
struct FFortMinigameStatCollection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMinigameGroupStats GroupStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMinigamePlayerStats> PlayerStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMinigamePlayerBucketStats> PlayerBucketStats;
    
public:
    FORTNITEGAME_API FFortMinigameStatCollection();
};

