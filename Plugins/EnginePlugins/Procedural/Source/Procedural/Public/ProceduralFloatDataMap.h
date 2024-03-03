#pragma once
#include "CoreMinimal.h"
#include "ProceduralDataMap.h"
#include "ProceduralRemapFloatCurve.h"
#include "ProceduralFloatDataMap.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UProceduralFloatDataMap : public UProceduralDataMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProceduralRemapFloatCurve RemapCurve;
    
    UProceduralFloatDataMap();
};

