#include "HoverDroneMovementComponent.h"

void UHoverDroneMovementComponent::OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorPC, AFortPlayerState* NewFollowedPlayer) {
}

UHoverDroneMovementComponent::UHoverDroneMovementComponent() {
    RotAcceleration = 1;
    RotDeceleration = 1;
    MaxPitchRotSpeed = 1;
    MaxYawRotSpeed = 1;
    TurboRotAcceleration = 1;
    TurboRotDeceleration = 1;
    TurboMaxPitchRotSpeed = 1;
    TurboMaxYawRotSpeed = 1;
    TurboDeceleration = 1;
    TurboHoverThrustScale = 1;
    FullAirFrictionVelocity = 1;
}

