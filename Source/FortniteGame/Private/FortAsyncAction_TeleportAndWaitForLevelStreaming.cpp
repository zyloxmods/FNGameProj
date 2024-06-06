#include "FortAsyncAction_TeleportAndWaitForLevelStreaming.h"

void UFortAsyncAction_TeleportAndWaitForLevelStreaming::OnLevelStreamingComplete() {
}

UFortAsyncAction_TeleportAndWaitForLevelStreaming* UFortAsyncAction_TeleportAndWaitForLevelStreaming::CreateTeleportAndWaitForLevelStreaming(AFortPlayerPawn* InPlayerPawn, const FVector& InTeleportLocation, const FRotator& InTeleportRotation) {
    return NULL;
}

UFortAsyncAction_TeleportAndWaitForLevelStreaming::UFortAsyncAction_TeleportAndWaitForLevelStreaming() {
    PlayerPawn = NULL;
}

