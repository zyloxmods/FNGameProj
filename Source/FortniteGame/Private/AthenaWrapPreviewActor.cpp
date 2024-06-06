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
    ZoomedInWeaponCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInWeaponCameraComponent"));
    ZoomedOutVehicleCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutVehicleCameraComponent"));
    ZoomedInVehicleCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInVehicleCameraComponent"));
    ZoomedOutCampaignVehicleCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutCampaignVehicleCameraComponent"));
    ZoomedInCampaignVehicleCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInCampaignVehicleCameraComponent"));
    ZoomedOutLargeWeaponCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutLargeWeaponCameraComponent"));
    ZoomedInLargeWeaponCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInLargeWeaponCameraComponent"));
    PreviewSpawnPointComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PreviewSpawnPointComponent"));
}

