#pragma once
#include "CoreMinimal.h"
#include "ProceduralContentVariationMap.generated.h"

class UProceduralFloatDataMap;

USTRUCT(BlueprintType)
struct FProceduralContentVariationMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VariationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralFloatDataMap* Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    PROCEDURAL_API FProceduralContentVariationMap();
};

