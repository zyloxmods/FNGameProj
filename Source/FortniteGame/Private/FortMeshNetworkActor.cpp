#include "FortMeshNetworkActor.h"
#include "MeshNetworkComponent.h"

AFortMeshNetworkActor::AFortMeshNetworkActor() {
    this->MeshNetworkComponent = CreateDefaultSubobject<UMeshNetworkComponent>(TEXT("MeshNetworkComp"));
}

