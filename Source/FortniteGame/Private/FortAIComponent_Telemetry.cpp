#include "FortAIComponent_Telemetry.h"

void UFortAIComponent_Telemetry::OnTetheredFollowerChanged(AFortPawn* NewFollower, AFortPawn* OldFollower) {
}

void UFortAIComponent_Telemetry::OnPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void UFortAIComponent_Telemetry::OnDidDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

UFortAIComponent_Telemetry::UFortAIComponent_Telemetry() {
    PossessedPawn = NULL;
    CachedAIController = NULL;
    DeathInstigator = NULL;
}

