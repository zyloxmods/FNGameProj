#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortMeshNetworkActor.generated.h"

class UMeshNetworkComponent;

UCLASS(Blueprintable)
class AFortMeshNetworkActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshNetworkComponent* MeshNetworkComponent;
    
    AFortMeshNetworkActor();
};

