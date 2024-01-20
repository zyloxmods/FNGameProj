#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleModule.h"
#include "Distributions/DistributionFloat.h"
#include "SoundParticleModuleBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USoundParticleModuleBase : public UParticleModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DataProviderParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAverageFrequency;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat FrequencyBandIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnTimeOnly;
    
    USoundParticleModuleBase();
};

