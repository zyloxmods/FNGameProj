#pragma once
#include "CoreMinimal.h"
#include "QuantizedBuildingAttribute.h"
#include "BuildingActorMinimalReplicationProxy.generated.h"

USTRUCT(BlueprintType)
struct FBuildingActorMinimalReplicationProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuantizedBuildingAttribute BuildTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuantizedBuildingAttribute RepairTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Health;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 MaxHealth;
    
    FORTNITEGAME_API FBuildingActorMinimalReplicationProxy();
};

