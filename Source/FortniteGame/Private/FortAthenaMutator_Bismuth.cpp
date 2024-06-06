#include "FortAthenaMutator_Bismuth.h"

void AFortAthenaMutator_Bismuth::ReflectEliminatePlayer(AFortPlayerPawnAthena* PlayerPawn) {
}

void AFortAthenaMutator_Bismuth::AIBotPawnDeath(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

AFortAthenaMutator_Bismuth::AFortAthenaMutator_Bismuth() {
    BotData = NULL;
    BotTeamStartIndex = 0;
    ReflectGameplayEffect = NULL;
    InitiateGameplayEffect = NULL;
}

