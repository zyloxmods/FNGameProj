#pragma once
#include "CoreMinimal.h"
#include "MeshBeaconClient.h"
#include "FortMeshBeaconClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class AFortMeshBeaconClient : public AMeshBeaconClient {
    GENERATED_BODY()
public:
    AFortMeshBeaconClient();
};

