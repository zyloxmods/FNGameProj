#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NitrogenFareValueMeshTransformInfo.generated.h"

USTRUCT(BlueprintType)
struct FNitrogenFareValueMeshTransformInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> MeshTransforms;
    
    NITROGENRUNTIME_API FNitrogenFareValueMeshTransformInfo();
};

