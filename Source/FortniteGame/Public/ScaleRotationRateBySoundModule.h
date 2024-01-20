#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionFloat.h"
#include "SoundParticleModuleBase.h"
#include "ScaleRotationRateBySoundModule.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UScaleRotationRateBySoundModule : public USoundParticleModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat ScaleRotationRateByMagnitude;
    
public:
    UScaleRotationRateBySoundModule();
};

