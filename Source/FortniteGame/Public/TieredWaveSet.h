#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TieredWaveSetData.h"
#include "TieredWaveSet.generated.h"

USTRUCT(BlueprintType)
struct FTieredWaveSet : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTieredWaveSetData> WaveData;
    
    FORTNITEGAME_API FTieredWaveSet();
};

