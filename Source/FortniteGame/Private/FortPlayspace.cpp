#include "FortPlayspace.h"

void AFortPlayspace::OnMeshNetworkReady(EMeshNetworkNodeType NodeType) {
}

void AFortPlayspace::OnMeshNetworkEventStart(const FName EventName, const FDateTime& EventStartTime, const EMeshNetworkNodeType NodeType, const FString& EventParameters) {
}

void AFortPlayspace::OnMeshNetworkEventEnd(const FName EventName, const EMeshNetworkNodeType NodeType) {
}

void AFortPlayspace::OnMeshNetworkEventChange(const FName EventName, const FDateTime& EventStartTime, const EMeshNetworkNodeType NodeType, const FString& EventParameters) {
}

void AFortPlayspace::OnMeshNetworkEventBurst(const FName EventName, const EMeshNetworkNodeType NodeType, const FString& EventParameters) {
}

AFortPlayspace::AFortPlayspace() {
    bSubscribeToMeshNetwork = false;
    UserAcceptanceType = EFortPlayspaceUserAcceptanceType::CustomLogic;
}

