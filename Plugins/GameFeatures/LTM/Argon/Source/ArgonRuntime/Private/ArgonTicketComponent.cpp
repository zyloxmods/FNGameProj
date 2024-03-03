#include "ArgonTicketComponent.h"

bool UArgonTicketComponent::IsNearToPlayer() const {
    return false;
}

UArgonTicketComponent::UArgonTicketComponent() {
    this->ArgonMutator = NULL;
}

