#include "MeshNetworkComponent.h"

EMeshNetworkNodeType UMeshNetworkComponent::GetMeshNetworkNodeType() const {
    return EMeshNetworkNodeType::Root;
}

UMeshNetworkComponent::UMeshNetworkComponent() {
    this->MeshRelevancy = EMeshNetworkRelevancy::NotRelevant;
}

