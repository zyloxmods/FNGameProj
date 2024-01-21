#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialInstance.h"
#include "Materials/MaterialInstance.h"
#include "Materials/MaterialInstance.h"
#include "EditorOnlyBuildingInstanceMaterialParameters.generated.h"

USTRUCT(BlueprintType)
struct FEditorOnlyBuildingInstanceMaterialParameters {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScalarParameterValue> ScalarParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVectorParameterValue> VectorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextureParameterValue> TextureParams;
    
public:
    FORTNITEGAME_API FEditorOnlyBuildingInstanceMaterialParameters();
};

