#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HomebaseRatingDifficultyMappingData.generated.h"

USTRUCT(BlueprintType)
struct FHomebaseRatingDifficultyMappingData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Difficulty;
    
    FORTNITEGAME_API FHomebaseRatingDifficultyMappingData();
};

