#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveLinearColor.h"
#include "ProceduralRemapVectorCurve.generated.h"

USTRUCT(BlueprintType)
struct FProceduralRemapVectorCurve {
    GENERATED_BODY()
public:
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor RemapCurve;
    
    PROCEDURAL_API FProceduralRemapVectorCurve();
};

