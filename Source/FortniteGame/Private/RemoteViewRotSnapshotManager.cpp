#include "RemoteViewRotSnapshotManager.h"

FRemoteViewRotSnapshotManager::FRemoteViewRotSnapshotManager() {
    this->BufferSize = 0;
    this->TimeDelay = 1;
    this->bUseVariableTimeDelay = false;
    this->VariableTimeDelayMultiplier = 1;
    this->TimeBeforeDormant = 1;
    this->InterpSpeedWhenNoSample = 1;
}

