#include "FortItemPreviewOnPawnActor.h"
#include "Camera/CameraComponent.h"
#include "Components/ChildActorComponent.h"

void AFortItemPreviewOnPawnActor::HandlePawnCustomizationComplete(AFortPlayerPawn* Pawn) {
}

FVector AFortItemPreviewOnPawnActor::GetPawnLocation() const {
    return FVector{};
}

AFortItemPreviewOnPawnActor::AFortItemPreviewOnPawnActor() {
    this->ZoomedInBodyCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInBodyCameraComponent"));
    this->ZoomedOutTallBodyCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutTallBodyCameraComponent"));
    this->ZoomedInTallBodyCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInTallBodyCameraComponent"));
    this->ZoomedOutBackpackCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutBackpackCameraComponent"));
    this->ZoomedInBackpackCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInBackpackCameraComponent"));
    this->ZoomedOutSkydiveCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutSkydiveCameraComponent"));
    this->ZoomedInSkydiveCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInSkydiveCameraComponent"));
    this->ZoomedOutEmoteCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutEmoteCameraComponent"));
    this->ZoomedInEmoteCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInEmoteCameraComponent"));
    this->ZoomedOutEmoteHighCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutEmoteHighCameraComponent"));
    this->ZoomedInEmoteHighCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInEmoteHighCameraComponent"));
    this->ZoomedOutEmoticonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutEmoticonCameraComponent"));
    this->ZoomedInEmoticonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInEmoticonCameraComponent"));
    this->ZoomedOutPickaxeCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutPickaxeCameraComponent"));
    this->ZoomedInPickaxeCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInPickaxeCameraComponent"));
    this->ZoomedOutDualPickaxeCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutDualPickaxeCameraComponent"));
    this->ZoomedInDualPickaxeCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInDualPickaxeCameraComponent"));
    this->ZoomedOutPersonalGliderCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutPersonalGliderCameraComponent"));
    this->ZoomedInPersonalGliderCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInPersonalGliderCameraComponent"));
    this->HeroPawnComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("HeroPawnComponent"));
    this->EquippedWeapon = NULL;
    this->EquippedParachute = NULL;
    this->ContrailGlideVerticalVelocity = 1;
    this->ContrailDiveVerticalVelocity = 1;
    this->EmotePlayDelay = 1;
    this->EmoteFXDuration = 1;
    this->FXSystemComponent = NULL;
}

