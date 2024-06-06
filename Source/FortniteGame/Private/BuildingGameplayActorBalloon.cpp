#include "BuildingGameplayActorBalloon.h"
#include "Net/UnrealNetwork.h"

void ABuildingGameplayActorBalloon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingGameplayActorBalloon, BalloonLocationSelection);
}

ABuildingGameplayActorBalloon::ABuildingGameplayActorBalloon() {
    BalloonLocationSelection = 0;
    BalloonNoAim = 1;
}

