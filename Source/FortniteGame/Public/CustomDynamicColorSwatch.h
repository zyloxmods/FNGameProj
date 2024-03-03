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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColorSwatchPair> ColorPairs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomPartTextureParameter> TextureParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UTexture2D>> SpecificIconography;
    
    UCustomDynamicColorSwatch();
};

