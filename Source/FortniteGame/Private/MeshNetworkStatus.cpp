#include "MeshNetworkStatus.h"

FMeshNetworkStatus::FMeshNetworkStatus() {
    bEnabled = false;
    bConnectedToRoot = false;
    GameServerNodeType = EMeshNetworkNodeType::Root;
}

