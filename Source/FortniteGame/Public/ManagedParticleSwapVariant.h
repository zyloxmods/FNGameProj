#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortPortableSoftParticles.h"
#include "ManagedParticleSwapVariant.generated.h"

USTRUCT(BlueprintType)
struct FManagedParticleSwapVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ParamGroupTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPortableSoftParticles ParticleToOverride;
    
    FORTNITEGAME_API FManagedParticleSwapVariant();
};

