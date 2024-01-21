#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionFloat.h"
#include "SoundParticleModuleBase.h"
#include "ScaleLifetimeBySoundModule.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UScaleLifetimeBySoundModule : public USoundParticleModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat ScaleLifetimeByMagnitude;
    
public:
    UScaleLifetimeBySoundModule();
};

