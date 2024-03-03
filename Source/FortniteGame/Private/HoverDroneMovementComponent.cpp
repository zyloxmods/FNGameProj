#include "HoverDroneMovementComponent.h"

void UHoverDroneMovementComponent::OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorPC, AFortPlayerState* NewFollowedPlayer) {
}

UHoverDroneMovementComponent::UHoverDroneMovementComponent() {
    this->RotAcceleration = 1;
    this->RotDeceleration = 1;
    this->MaxPitchRotSpeed = 1;
    this->MaxYawRotSpeed = 1;
    this->TurboRotAcceleration = 1;
    this->TurboRotDeceleration = 1;
    this->TurboMaxPitchRotSpeed = 1;
    this->TurboMaxYawRotSpeed = 1;
    this->TurboDeceleration = 1;
    this->TurboHoverThrustScale = 1;
    this->FullAirFrictionVelocity = 1;
}

