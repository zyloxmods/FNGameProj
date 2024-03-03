#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionFloat.h"
#include "Distributions/DistributionVector.h"
#include "SoundParticleModuleBase.h"
#include "ColorBySoundModule.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UColorBySoundModule : public USoundParticleModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector ColorByMagnitude;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat AlphaByMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampAlpha;
    
public:
    UColorBySoundModule();
};

