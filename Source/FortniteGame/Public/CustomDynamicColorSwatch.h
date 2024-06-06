#pragma once
#include "CoreMinimal.h"
#include "ColorSwatchPair.h"
#include "CustomColorSwatch.h"
#include "CustomPartTextureParameter.h"
#include "CustomDynamicColorSwatch.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UCustomDynamicColorSwatch : public UCustomColorSwatch {
    GENERATED_BODY()
public:
    //Name-color pairs of what named variables to set in the materials.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Color Swatch")
    TArray<FColorSwatchPair> ColorPairs;

    //Texture material parameters of what named variables to set in what materials for the character.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Color Swatch")
    TArray<FCustomPartTextureParameter> TextureParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Color Swatch")
    TMap<FName, TSoftObjectPtr<UTexture2D>> SpecificIconography;
    
    UCustomDynamicColorSwatch();
};

