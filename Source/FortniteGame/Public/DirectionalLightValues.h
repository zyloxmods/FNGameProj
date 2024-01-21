#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DirectionalLightValues.generated.h"

USTRUCT(BlueprintType)
struct FDirectionalLightValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor LightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Brightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumetricScatteringIntensity;
    
    FORTNITEGAME_API FDirectionalLightValues();
};

