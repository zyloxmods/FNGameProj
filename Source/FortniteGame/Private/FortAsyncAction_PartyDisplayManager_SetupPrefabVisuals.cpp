#include "FortAsyncAction_PartyDisplayManager_SetupPrefabVisuals.h"

UFortAsyncAction_PartyDisplayManager_SetupPrefabVisuals* UFortAsyncAction_PartyDisplayManager_SetupPrefabVisuals::SetupPrefabVisuals(const APartyDisplayManager* Target, const UFortItem* NewItem, const FGuid& RequestId) {
    return NULL;
}

void UFortAsyncAction_PartyDisplayManager_SetupPrefabVisuals::OnRequestedCustomizationComplete(AFortPlayerPawn* Pawn) {
}

void UFortAsyncAction_PartyDisplayManager_SetupPrefabVisuals::OnPreviousCustomizationComplete(AFortPlayerPawn* Pawn) {
}

UFortAsyncAction_PartyDisplayManager_SetupPrefabVisuals::UFortAsyncAction_PartyDisplayManager_SetupPrefabVisuals() {
    this->Item = NULL;
}

