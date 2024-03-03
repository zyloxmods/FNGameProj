#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionVector.h"
#include "SoundParticleModuleBase.h"
#include "ScaleVelocityBySoundModule.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UScaleVelocityBySoundModule : public USoundParticleModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector ScaleVelocityByMagnitude;
    
public:
    UScaleVelocityBySoundModule();
};

