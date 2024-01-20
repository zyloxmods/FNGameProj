#pragma once
#include "CoreMinimal.h"
#include "IpConnection.h"
#include "MeshConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class MESHNETWORK_API UMeshConnection : public UIpConnection {
    GENERATED_BODY()
public:
    UMeshConnection();
};

