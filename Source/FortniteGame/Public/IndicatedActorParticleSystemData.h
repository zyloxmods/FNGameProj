#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IndicatedActorParticleSystemData.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FIndicatedActorParticleSystemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParticleSystemActorParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ParticleSystemOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ParticleSystemDBNOOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParticleSystemVectorParamName;
    
    FORTNITEGAME_API FIndicatedActorParticleSystemData();
};

