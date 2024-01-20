#include "LevelSaveRecord.h"

void ULevelSaveRecord::RemoveInvalidInstanceRecordsHelper(const int32 StartRecordIndex) {
}

void ULevelSaveRecord::RemoveInvalidDeleteRecordsHelper(const int32 StartRecordIndex) {
}

void ULevelSaveRecord::PostUpdateSpawnedActorsHelper(const int32 StartActorIndex) {
}

void ULevelSaveRecord::NotifyFinishedSpawning() {
}

void ULevelSaveRecord::FindAndRemoveDuplicateRecordsUsingBucketMap(const int32 StartRecordIndex) {
}

void ULevelSaveRecord::FailsafeTimerExpired() {
}

void ULevelSaveRecord::BroadcastPostUpdateSpawnedCompleted() {
}

ULevelSaveRecord::ULevelSaveRecord() {
    this->SaveVersion = 10;
    this->bCompressed = false;
    this->OverrideWorld = NULL;
    this->LastRecordID = 0;
    this->VolumeCurrentlySpawningWithin = NULL;
    this->TaskQueue = NULL;
}

