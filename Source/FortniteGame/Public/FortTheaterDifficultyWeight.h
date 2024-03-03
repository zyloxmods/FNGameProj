#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortTheaterDifficultyWeight.generated.h"

USTRUCT(BlueprintType)
struct FFortTheaterDifficultyWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DifficultyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LootTierGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FORTNITEGAME_API FFortTheaterDifficultyWeight();
};

