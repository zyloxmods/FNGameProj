#pragma once
#include "CoreMinimal.h"
#include "ParticleVariant.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FParticleVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> ParticleSystemToAlter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentToOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> OverrideParticleSystem;
    
    FORTNITEGAME_API FParticleVariant();
};

