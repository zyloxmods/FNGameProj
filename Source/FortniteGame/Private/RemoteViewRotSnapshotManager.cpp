#include "RemoteViewRotSnapshotManager.h"

FRemoteViewRotSnapshotManager::FRemoteViewRotSnapshotManager() {
    this->BufferSize = 0;
    this->TimeDelay = 0.00f;
    this->bUseVariableTimeDelay = false;
    this->VariableTimeDelayMultiplier = 0.00f;
    this->TimeBeforeDormant = 0.00f;
    this->InterpSpeedWhenNoSample = 0.00f;
}

