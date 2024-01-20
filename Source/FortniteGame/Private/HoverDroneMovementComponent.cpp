#include "HoverDroneMovementComponent.h"

void UHoverDroneMovementComponent::OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorPC, AFortPlayerState* NewFollowedPlayer) {
}

UHoverDroneMovementComponent::UHoverDroneMovementComponent() {
    this->RotAcceleration = 150.00f;
    this->RotDeceleration = 150.00f;
    this->MaxPitchRotSpeed = 70.00f;
    this->MaxYawRotSpeed = 110.00f;
    this->TurboRotAcceleration = 150.00f;
    this->TurboRotDeceleration = 150.00f;
    this->TurboMaxPitchRotSpeed = 70.00f;
    this->TurboMaxYawRotSpeed = 110.00f;
    this->TurboDeceleration = 10000.00f;
    this->TurboHoverThrustScale = 2.00f;
    this->FullAirFrictionVelocity = 3000.00f;
}

