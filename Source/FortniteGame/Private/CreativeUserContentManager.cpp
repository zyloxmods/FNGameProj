#include "CreativeUserContentManager.h"
#include "LevelSaveRecordThumbnailGenerator.h"

UCreativeUserContentManager::UCreativeUserContentManager() {
    ThumbnailGenerator = CreateDefaultSubobject<ULevelSaveRecordThumbnailGenerator>(TEXT("ThumbnailGenerator"));
}

