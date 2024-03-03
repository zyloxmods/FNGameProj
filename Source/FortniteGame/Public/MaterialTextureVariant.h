#pragma once
#include "CoreMinimal.h"
#include "MaterialParamName.h"
#include "MaterialTextureVariant.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FMaterialTextureVariant : public FMaterialParamName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> Value;
    
    FORTNITEGAME_API FMaterialTextureVariant();
};

