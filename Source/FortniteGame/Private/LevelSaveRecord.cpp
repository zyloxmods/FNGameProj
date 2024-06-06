#include "LevelSaveRecord.h"

void ULevelSaveRecord::RemoveInvalidInstanceRecordsHelper(const int32 StartRecordIndex) {
}

void ULevelSaveRecord::RemoveInvalidDeleteRecordsHelper(const int32 StartRecordIndex) {
}

void ULevelSaveRecord::FindAndRemoveDuplicateRecordsUsingBucketMap(const int32 StartRecordIndex) {
}

void ULevelSaveRecord::FailsafeTimerExpired() {
}

ULevelSaveRecord::ULevelSaveRecord() {
    SaveVersion = 0;
    bCompressed = false;
    LastRecordID = 0;
    TaskQueue = NULL;
    CreativeAssetPathRedirects.AddDefaulted(227);
    bRequiresGridPlacement = false;
}

