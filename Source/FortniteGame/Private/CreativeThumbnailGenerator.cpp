#include "CreativeThumbnailGenerator.h"

void UCreativeThumbnailGenerator::OnLevelSaveRecordFinishSpawning(const FAsyncTaskResult& AsyncTaskResult) {
}

UCreativeThumbnailGenerator::UCreativeThumbnailGenerator() {
    this->SceneCaptureComponent = NULL;
    this->CameraComponent = NULL;
    this->LevelSaveRecord = NULL;
}

