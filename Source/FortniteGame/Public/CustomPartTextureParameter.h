#pragma once
#include "CoreMinimal.h"
#include "CustomPartTextureParameter.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FCustomPartTextureParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndexForTextureParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextureParameterNameForMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> TextureOverride;
    
public:
    FORTNITEGAME_API FCustomPartTextureParameter();
};

