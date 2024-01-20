#pragma once
#include "CoreMinimal.h"
#include "FortCurveSequenceInstanceInfo.h"
#include "FortSpawnPointsPercentageCurveSequenceInstanceInfo.generated.h"

class UFortSpawnPointsPercentageCurveSequence;

USTRUCT(BlueprintType)
struct FFortSpawnPointsPercentageCurveSequenceInstanceInfo : public FFortCurveSequenceInstanceInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSpawnPointsPercentageCurveSequence* SpawnPointsPercentageCurveSequence;
    
public:
    FORTNITEGAME_API FFortSpawnPointsPercentageCurveSequenceInstanceInfo();
};

