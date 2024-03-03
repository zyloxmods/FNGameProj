#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaterialParamName.h"
#include "VectorParamVariant.generated.h"

USTRUCT(BlueprintType)
struct FVectorParamVariant : public FMaterialParamName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
    FORTNITEGAME_API FVectorParamVariant();
};

