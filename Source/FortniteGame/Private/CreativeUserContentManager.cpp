#include "CreativeUserContentManager.h"
#include "CreativeThumbnailGenerator.h"

UCreativeUserContentManager::UCreativeUserContentManager() {
    this->CreativeThumbnailGenerator = CreateDefaultSubobject<UCreativeThumbnailGenerator>(TEXT("CreativeThumbnailGenerator"));
}

