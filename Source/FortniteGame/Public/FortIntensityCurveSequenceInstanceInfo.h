#pragma once
#include "CoreMinimal.h"
#include "FortCurveSequenceInstanceInfo.h"
#include "FortIntensityCurveSequenceInstanceInfo.generated.h"

class UFortIntensityCurveSequence;

USTRUCT(BlueprintType)
struct FFortIntensityCurveSequenceInstanceInfo : public FFortCurveSequenceInstanceInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortIntensityCurveSequence* IntensityCurveSequence;
    
public:
    FORTNITEGAME_API FFortIntensityCurveSequenceInstanceInfo();
};

