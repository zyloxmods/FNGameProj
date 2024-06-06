#include "FortEventResponderComponent.h"

void UFortEventResponderComponent::OnMeshNetworkReady(EMeshNetworkNodeType NodeType) {
}

UFortEventResponderComponent::UFortEventResponderComponent() {
    bServerRespondToEvents = true;
    bClientRespondToEvents = true;
}

