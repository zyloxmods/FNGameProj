#pragma once
#include "CoreMinimal.h"
#include "MaterialFloatVariant.h"
#include "MaterialTextureVariant.h"
#include "MaterialVectorVariant.h"
#include "MaterialParamterDef.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialParamterDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> MaterialToAlter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CascadeMaterialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialVectorVariant> ColorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialTextureVariant> TextureParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialFloatVariant> FloatParams;
    
    FORTNITEGAME_API FMaterialParamterDef();
};

