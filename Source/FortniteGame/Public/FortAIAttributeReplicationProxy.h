#pragma once
#include "CoreMinimal.h"
#include "FortAIAttributeReplicationProxy.generated.h"

USTRUCT(BlueprintType)
struct FFortAIAttributeReplicationProxy {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Health;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 MaxHealth;
    
    FORTNITEGAME_API FFortAIAttributeReplicationProxy();
};

