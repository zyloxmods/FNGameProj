#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EStatCategory.h"
#include "FortBadgeScoringData.generated.h"

USTRUCT(BlueprintType)
struct FFortBadgeScoringData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreAwarded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatCategory ScoreCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreThreshold;
    
    FORTNITEGAME_API FFortBadgeScoringData();
};

