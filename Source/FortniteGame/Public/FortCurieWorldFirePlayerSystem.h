#pragma once
#include "CoreMinimal.h"
#include "FortCurieWorldFirePlayerSystem.generated.h"

class UFortCurieWorldNiagaraComponent;

USTRUCT(BlueprintType)
struct FFortCurieWorldFirePlayerSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortCurieWorldNiagaraComponent* ActiveWorldFireSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastFireParticleSampleTimestamp;
    
    FORTNITEGAME_API FFortCurieWorldFirePlayerSystem();
};

