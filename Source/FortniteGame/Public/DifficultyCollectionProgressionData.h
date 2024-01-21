#pragma once
#include "CoreMinimal.h"
#include "DifficultyRowProgression.h"
#include "TieredCollectionProgressionDataBase.h"
#include "DifficultyCollectionProgressionData.generated.h"

USTRUCT(BlueprintType)
struct FDifficultyCollectionProgressionData : public FTieredCollectionProgressionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDifficultyRowProgression> DifficultyCollections;
    
    FORTNITEGAME_API FDifficultyCollectionProgressionData();
};

