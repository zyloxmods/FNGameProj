#pragma once
#include "CoreMinimal.h"
#include "TaggedParticleSubstitution.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTaggedParticleSubstitution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Substitute;
    
    FORTNITEGAME_API FTaggedParticleSubstitution();
};

