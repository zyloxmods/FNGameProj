#pragma once
#include "CoreMinimal.h"
#include "FortFloatAnimationInfo.h"
#include "FortLightAnimSet.generated.h"

class ULightComponent;

USTRUCT(BlueprintType)
struct FFortLightAnimSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULightComponent* LightComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortFloatAnimationInfo> IntensityAnims;
    
    FORTNITEGAME_API FFortLightAnimSet();
};

