#pragma once
#include "CoreMinimal.h"
#include "FortCurieFireParticleActorData.generated.h"

class UFortCurieComponent;

USTRUCT(BlueprintType)
struct FFortCurieFireParticleActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCurieComponent* AssociatedComponent;
    
    FORTNITEGAME_API FFortCurieFireParticleActorData();
};

