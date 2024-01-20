#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionFloat.h"
#include "SoundParticleModuleBase.h"
#include "DragBySoundModule.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDragBySoundModule : public USoundParticleModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat DragByMagnitude;
    
public:
    UDragBySoundModule();
};

