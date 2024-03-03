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
    this->SaveVersion = 0;
    this->bCompressed = false;
    this->LastRecordID = 0;
    this->TaskQueue = NULL;
    this->CreativeAssetPathRedirects.AddDefaulted(227);
    this->bRequiresGridPlacement = false;
}

