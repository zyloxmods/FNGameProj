#include "RemoteViewRotSnapshotManager.h"

FRemoteViewRotSnapshotManager::FRemoteViewRotSnapshotManager() {
    BufferSize = 0;
    TimeDelay = 1;
    bUseVariableTimeDelay = false;
    VariableTimeDelayMultiplier = 1;
    TimeBeforeDormant = 1;
    InterpSpeedWhenNoSample = 1;
}

