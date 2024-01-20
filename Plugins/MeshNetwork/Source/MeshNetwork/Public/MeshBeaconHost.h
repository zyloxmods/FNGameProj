#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHost.h"
#include "MeshBeaconHost.generated.h"

UCLASS(Blueprintable, NonTransient)
class MESHNETWORK_API AMeshBeaconHost : public AOnlineBeaconHost {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxConnections;
    
public:
    AMeshBeaconHost();
};

