#pragma once
#include "CoreMinimal.h"
#include "ParticleVariant.generated.h"

class UFXSystemAsset;

USTRUCT(BlueprintType)
struct FParticleVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFXSystemAsset> ParticleSystemToAlter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentToOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFXSystemAsset> OverrideParticleSystem;
    
    FORTNITEGAME_API FParticleVariant();
};

