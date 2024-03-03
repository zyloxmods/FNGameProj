#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Templates/SubclassOf.h"
#include "FortTreasureChestSpawnInfo.generated.h"

class ABuildingContainer;

USTRUCT(BlueprintType)
struct FFortTreasureChestSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingContainer> TreasureChestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TreasureChestMinSpawnPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TreasureChestMaxSpawnPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GoldenPoiTreasureChestMinSpawnPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GoldenPoiTreasureChestMaxSpawnPercent;
    
    FORTNITEGAME_API FFortTreasureChestSpawnInfo();
};

