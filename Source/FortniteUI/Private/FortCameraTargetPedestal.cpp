#include "FortCameraTargetPedestal.h"
#include "Components/ChildActorComponent.h"



AFortCameraTargetPedestal::AFortCameraTargetPedestal() {
    this->PedestalBaseComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("PedestalBase"));
    this->CurrentPrimaryItem = NULL;
    this->ItemPreviewActor = NULL;
}

