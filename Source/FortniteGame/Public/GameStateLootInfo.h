#pragma once
#include "CoreMinimal.h"
#include "FortAmmoBoxSpawnInfo.h"
#include "FortTreasureChestSpawnInfo.h"
#include "GameStateLootInfo.generated.h"

USTRUCT(BlueprintType)
struct FGameStateLootInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTreasureChestSpawnInfo> TreasureChestSpawnInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAmmoBoxSpawnInfo> AmmoBoxSpawnInfos;
    
    FORTNITEGAME_API FGameStateLootInfo();
};

