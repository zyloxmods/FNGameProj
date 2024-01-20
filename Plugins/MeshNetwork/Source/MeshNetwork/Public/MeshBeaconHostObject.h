#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "MeshBeaconHostObject.generated.h"

UCLASS(Blueprintable, NonTransient)
class MESHNETWORK_API AMeshBeaconHostObject : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
    AMeshBeaconHostObject();
};

