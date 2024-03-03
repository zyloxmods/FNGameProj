#include "FortAthenaMutator_Bismuth.h"

void AFortAthenaMutator_Bismuth::ReflectEliminatePlayer(AFortPlayerPawnAthena* PlayerPawn) {
}

void AFortAthenaMutator_Bismuth::AIBotPawnDeath(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

AFortAthenaMutator_Bismuth::AFortAthenaMutator_Bismuth() {
    this->BotData = NULL;
    this->BotTeamStartIndex = 0;
    this->ReflectGameplayEffect = NULL;
    this->InitiateGameplayEffect = NULL;
}

