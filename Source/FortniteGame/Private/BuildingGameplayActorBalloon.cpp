#include "BuildingGameplayActorBalloon.h"
#include "Net/UnrealNetwork.h"

void ABuildingGameplayActorBalloon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingGameplayActorBalloon, BalloonLocationSelection);
}

ABuildingGameplayActorBalloon::ABuildingGameplayActorBalloon() {
    this->BalloonLocationSelection = 0;
    this->BalloonNoAim = 1.00f;
}

