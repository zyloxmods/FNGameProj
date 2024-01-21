#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "FortInstensityCurveSequenceProgression.generated.h"

class UFortIntensityCurveSequence;

USTRUCT(BlueprintType)
struct FFortInstensityCurveSequenceProgression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortIntensityCurveSequence* CurveSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle SelectionWeight;
    
    FORTNITEGAME_API FFortInstensityCurveSequenceProgression();
};

