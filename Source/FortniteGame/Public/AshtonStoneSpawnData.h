#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortPieSliceSpawnData.h"
#include "AshtonStoneSpawnData.generated.h"

USTRUCT(BlueprintType)
struct FAshtonStoneSpawnData : public FFortPieSliceSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SpawnSafeZoneIndex;
    
    FORTNITEGAME_API FAshtonStoneSpawnData();
};

