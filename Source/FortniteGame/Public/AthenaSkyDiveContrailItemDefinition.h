#pragma once
#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinition.h"
#include "AthenaSkyDiveContrailItemDefinition.generated.h"

class UNiagaraSystem;
class UParticleSystem;

UCLASS(Blueprintable, MinimalAPI)
class UAthenaSkyDiveContrailItemDefinition : public UAthenaCosmeticItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> ContrailEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> NiagaraContrailEffect;
    
    UAthenaSkyDiveContrailItemDefinition();
};

