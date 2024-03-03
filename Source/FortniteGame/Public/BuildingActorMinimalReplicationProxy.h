#pragma once
#include "CoreMinimal.h"
#include "BuildingActorMinimalReplicationProxy.generated.h"

USTRUCT(BlueprintType)
struct FBuildingActorMinimalReplicationProxy {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Health;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 MaxHealth;
    
    FORTNITEGAME_API FBuildingActorMinimalReplicationProxy();
};

