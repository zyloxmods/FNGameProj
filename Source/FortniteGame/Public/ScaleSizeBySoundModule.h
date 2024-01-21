#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionVector.h"
#include "SoundParticleModuleBase.h"
#include "ScaleSizeBySoundModule.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UScaleSizeBySoundModule : public USoundParticleModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector ScaleSizeByMagnitude;
    
public:
    UScaleSizeBySoundModule();
};

