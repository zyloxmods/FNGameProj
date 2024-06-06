#include "LevelRecordSpawner.h"

void ULevelRecordSpawner::NotifyFinishedSpawning(const FAsyncTaskResult& Result) {
}

void ULevelRecordSpawner::FailsafeTimerExpired() {
}

ULevelRecordSpawner::ULevelRecordSpawner() {
    VolumeCurrentlySpawningWithin = NULL;
    TaskQueue = NULL;
}

