#pragma once
#include "CoreMinimal.h"
#include "MMRSpawningDataTableInfo.h"
#include "MMRPhaseSpawningDataTableInfo.generated.h"

USTRUCT(BlueprintType)
struct FMMRPhaseSpawningDataTableInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GamePhaseIndexToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMMRSpawningDataTableInfo> SpawningItems;
    
    FORTNITEGAME_API FMMRPhaseSpawningDataTableInfo();
};

