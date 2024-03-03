#pragma once
#include "CoreMinimal.h"
#include "ProceduralDataMap.h"
#include "ProceduralRemapVectorCurve.h"
#include "ProceduralVectorDataMap.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UProceduralVectorDataMap : public UProceduralDataMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProceduralRemapVectorCurve RemapCurve;
    
    UProceduralVectorDataMap();
};

