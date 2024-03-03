#include "FortEventResponderComponent.h"

void UFortEventResponderComponent::OnMeshNetworkReady(EMeshNetworkNodeType NodeType) {
}

UFortEventResponderComponent::UFortEventResponderComponent() {
    this->bServerRespondToEvents = true;
    this->bClientRespondToEvents = true;
}

