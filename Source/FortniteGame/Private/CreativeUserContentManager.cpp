#include "CreativeUserContentManager.h"
#include "LevelSaveRecordThumbnailGenerator.h"

UCreativeUserContentManager::UCreativeUserContentManager() {
    this->ThumbnailGenerator = CreateDefaultSubobject<ULevelSaveRecordThumbnailGenerator>(TEXT("ThumbnailGenerator"));
}

