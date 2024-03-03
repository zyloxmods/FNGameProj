#include "MeshNetworkEditorSettings.h"

FMeshNetworkEditorSettings::FMeshNetworkEditorSettings() {
    this->bEnableMeshNetwork = false;
    this->BaseMeshPort = 0;
    this->BaseMeshGamePort = 0;
    this->NumRootClients = 0;
    this->RootLoginStartIndex = 0;
}

