#pragma once
#include "CoreMinimal.h"
#include "ColorSwatchPair.h"
#include "CustomColorSwatch.h"
#include "CustomPartTextureParameter.h"
#include "CustomDynamicColorSwatch.generated.h"

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UCustomDynamicColorSwatch : public UCustomColorSwatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColorSwatchPair> ColorPairs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomPartTextureParameter> TextureParameters;
    
    UCustomDynamicColorSwatch();
};

