#include "FortItemPreviewOnPawnActor.h"
#include "Camera/CameraComponent.h"
#include "Components/ChildActorComponent.h"

void AFortItemPreviewOnPawnActor::HandlePawnCustomizationComplete(AFortPlayerPawn* Pawn) {
}

FVector AFortItemPreviewOnPawnActor::GetPawnLocation() const {
    return FVector{};
}

AFortItemPreviewOnPawnActor::AFortItemPreviewOnPawnActor() {
    ZoomedInBodyCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInBodyCameraComponent"));
    ZoomedOutTallBodyCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutTallBodyCameraComponent"));
    ZoomedInTallBodyCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInTallBodyCameraComponent"));
    ZoomedOutBackpackCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutBackpackCameraComponent"));
    ZoomedInBackpackCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInBackpackCameraComponent"));
    ZoomedOutSkydiveCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutSkydiveCameraComponent"));
    ZoomedInSkydiveCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInSkydiveCameraComponent"));
    ZoomedOutEmoteCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutEmoteCameraComponent"));
    ZoomedInEmoteCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInEmoteCameraComponent"));
    ZoomedOutEmoteHighCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutEmoteHighCameraComponent"));
    ZoomedInEmoteHighCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInEmoteHighCameraComponent"));
    ZoomedOutEmoticonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutEmoticonCameraComponent"));
    ZoomedInEmoticonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInEmoticonCameraComponent"));
    ZoomedOutPickaxeCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutPickaxeCameraComponent"));
    ZoomedInPickaxeCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInPickaxeCameraComponent"));
    ZoomedOutDualPickaxeCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutDualPickaxeCameraComponent"));
    ZoomedInDualPickaxeCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInDualPickaxeCameraComponent"));
    ZoomedOutPersonalGliderCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutPersonalGliderCameraComponent"));
    ZoomedInPersonalGliderCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInPersonalGliderCameraComponent"));
    HeroPawnComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("HeroPawnComponent"));
    EquippedWeapon = NULL;
    EquippedParachute = NULL;
    ContrailGlideVerticalVelocity = 1;
    ContrailDiveVerticalVelocity = 1;
    EmotePlayDelay = 1;
    EmoteFXDuration = 1;
    FXSystemComponent = NULL;
}

