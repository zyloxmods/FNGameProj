#include "FortAsyncAction_CheckForUpdate.h"

UFortAsyncAction_CheckForUpdate* UFortAsyncAction_CheckForUpdate::CheckForUpdate(UObject* InWorldContextObject, bool InShowDialogOnFailure) {
    return NULL;
}

UFortAsyncAction_CheckForUpdate::UFortAsyncAction_CheckForUpdate() {
    WorldContextObject = NULL;
    bShowDialogOnFailure = true;
}

