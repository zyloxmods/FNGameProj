#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionFloat.h"
#include "Distributions/DistributionVector.h"
#include "SoundParticleModuleBase.h"
#include "ScaleColorBySoundModule.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UScaleColorBySoundModule : public USoundParticleModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector ScaleColorByMagnitude;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat ScaleAlphaByMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampAlpha;
    
public:
    UScaleColorBySoundModule();
};

