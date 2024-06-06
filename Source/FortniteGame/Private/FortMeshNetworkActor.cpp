#include "FortMeshNetworkActor.h"
#include "MeshNetworkComponent.h"

AFortMeshNetworkActor::AFortMeshNetworkActor() {
    MeshNetworkComponent = CreateDefaultSubobject<UMeshNetworkComponent>(TEXT("MeshNetworkComp"));
}

