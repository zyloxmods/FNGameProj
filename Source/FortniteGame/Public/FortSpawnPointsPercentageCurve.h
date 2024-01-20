#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortSpawnPointsPercentageCurve.generated.h"

class UCurveTable;

USTRUCT(BlueprintType)
struct FFortSpawnPointsPercentageCurve : public FTableRowBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveTable* SpawnPointsPercentageCurveTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnPointsPercentageCurveTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRampTime;
    
public:
    FORTNITEGAME_API FFortSpawnPointsPercentageCurve();
};

