#include "AthenaWrapPreviewActor.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"

void AAthenaWrapPreviewActor::ShowNextPreviewMesh() {
}

bool AAthenaWrapPreviewActor::IsShowingVehicle() const {
    return false;
}

EWrapPreviewCamera AAthenaWrapPreviewActor::GetActiveCamera() const {
    return EWrapPreviewCamera::Weapon;
}

AAthenaWrapPreviewActor::AAthenaWrapPreviewActor() {
    this->ZoomedInWeaponCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInWeaponCameraComponent"));
    this->ZoomedOutVehicleCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutVehicleCameraComponent"));
    this->ZoomedInVehicleCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInVehicleCameraComponent"));
    this->ZoomedOutCampaignVehicleCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutCampaignVehicleCameraComponent"));
    this->ZoomedInCampaignVehicleCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInCampaignVehicleCameraComponent"));
    this->ZoomedOutLargeWeaponCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutLargeWeaponCameraComponent"));
    this->ZoomedInLargeWeaponCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInLargeWeaponCameraComponent"));
    this->PreviewSpawnPointComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PreviewSpawnPointComponent"));
}

