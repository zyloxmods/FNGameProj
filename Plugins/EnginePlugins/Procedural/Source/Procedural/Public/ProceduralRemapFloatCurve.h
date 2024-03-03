#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "ProceduralRemapFloatCurve.generated.h"

USTRUCT(BlueprintType)
struct FProceduralRemapFloatCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve RemapCurve;
    
    PROCEDURAL_API FProceduralRemapFloatCurve();
};

