#include "ItemPreviewScene.h"
#include "Components/ChildActorComponent.h"

void AItemPreviewScene::HandleItemShown(const UFortAccountItemDefinition* ItemViewed, AFortCameraTargetPedestal* Pedestal) {
}

AItemPreviewScene::AItemPreviewScene() {
    this->FocusCameraTargetComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("FocusCameraTargetComponent"));
    this->FocusCameraTargetPedestal = NULL;
}

