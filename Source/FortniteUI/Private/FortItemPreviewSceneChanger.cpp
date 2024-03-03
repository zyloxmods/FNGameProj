#include "FortItemPreviewSceneChanger.h"
#include "Camera/CameraComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"

void AFortItemPreviewSceneChanger::TickZoomLevel() {
}



bool AFortItemPreviewSceneChanger::IsSoundEnabled() const {
    return false;
}

AItemPreviewScene* AFortItemPreviewSceneChanger::GetSceneTransitioningTo() {
    return NULL;
}

AItemPreviewScene* AFortItemPreviewSceneChanger::GetPrimaryScene() {
    return NULL;
}

AItemPreviewScene* AFortItemPreviewSceneChanger::GetActiveScene() {
    return NULL;
}

AFortItemPreviewSceneChanger::AFortItemPreviewSceneChanger() {
    this->TransitionCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TransitionCameraComponent"));
    this->PrimarySceneComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("PrimarySceneComponent"));
    this->SecondarySceneComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("SecondarySceneComponent"));
    this->bHasEtherealBackground = false;
    this->SceneChangeRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneChangeRootComponent"));
    this->PrimaryScene = NULL;
    this->SecondaryScene = NULL;
    this->SceneTransitioningTo = NULL;
    this->ActiveScene = NULL;
    this->ZoomLevel = 1;
}

