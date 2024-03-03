#include "FortItemPreviewActor.h"
#include "Components/SceneComponent.h"





bool AFortItemPreviewActor::ArePreviewVisualsReady() const {
    return false;
}

AFortItemPreviewActor::AFortItemPreviewActor() {
    this->SpecialEventMaterial = NULL;
    this->ItemPreviewRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ItemPreviewRootComponent"));
    this->UserRotationComponent = CreateDefaultSubobject<USceneComponent>(TEXT("UserRotationComponent"));
    this->ZoomLevel = 1;
}

