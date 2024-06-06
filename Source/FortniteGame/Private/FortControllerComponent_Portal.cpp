#include "FortControllerComponent_Portal.h"

void UFortControllerComponent_Portal::ServerSetPortalLinkCode_Implementation(UFortPortalComponent* PortalComponent, const FString& LinkCode) {
}
bool UFortControllerComponent_Portal::ServerSetPortalLinkCode_Validate(UFortPortalComponent* PortalComponent, const FString& LinkCode) {
    return true;
}

void UFortControllerComponent_Portal::OnPortalMatchmakingComplete(const bool bSuccess) {
}

void UFortControllerComponent_Portal::InitiateMatchmakingToPortalOrigin() {
}

void UFortControllerComponent_Portal::ClientInitiateMatchmakingToPortalOrigin_Implementation() {
}

bool UFortControllerComponent_Portal::CanInitiatePortalMatchmkaing(UFortPortalComponent* PortalComponent) const {
    return false;
}

bool UFortControllerComponent_Portal::CanCancelPortalMatchmaking() const {
    return false;
}

UFortControllerComponent_Portal::UFortControllerComponent_Portal() {
    bAllowRequeueToLinks = false;
}

