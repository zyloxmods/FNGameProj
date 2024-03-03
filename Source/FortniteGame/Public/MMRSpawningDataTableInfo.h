#pragma once
#include "CoreMinimal.h"
#include "MMRSpawningDataTableInfo.generated.h"

USTRUCT(BlueprintType)
struct FMMRSpawningDataTableInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawingItemIndex;
    
    FORTNITEGAME_API FMMRSpawningDataTableInfo();
};

