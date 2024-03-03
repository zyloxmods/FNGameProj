#pragma once
#include "CoreMinimal.h"
#include "FloatParticleParameter.generated.h"

USTRUCT(BlueprintType)
struct FFloatParticleParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    FORTNITEGAME_API FFloatParticleParameter();
};

