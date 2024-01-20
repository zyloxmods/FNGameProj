#include "MeshNetworkStatus.h"

FMeshNetworkStatus::FMeshNetworkStatus() {
    this->bEnabled = false;
    this->bConnectedToRoot = false;
    this->GameServerNodeType = EMeshNetworkNodeType::Root;
}

