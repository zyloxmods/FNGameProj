#include "LevelRecordSpawner.h"

void ULevelRecordSpawner::NotifyFinishedSpawning(const FAsyncTaskResult& Result) {
}

void ULevelRecordSpawner::FailsafeTimerExpired() {
}

ULevelRecordSpawner::ULevelRecordSpawner() {
    this->VolumeCurrentlySpawningWithin = NULL;
    this->TaskQueue = NULL;
}

