#include "FortItemPreviewActor.h"
#include "Components/SceneComponent.h"





bool AFortItemPreviewActor::ArePreviewVisualsReady() const {
    return false;
}

AFortItemPreviewActor::AFortItemPreviewActor() {
    SpecialEventMaterial = NULL;
    ItemPreviewRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ItemPreviewRootComponent"));
    UserRotationComponent = CreateDefaultSubobject<USceneComponent>(TEXT("UserRotationComponent"));
    ZoomLevel = 1;
}

