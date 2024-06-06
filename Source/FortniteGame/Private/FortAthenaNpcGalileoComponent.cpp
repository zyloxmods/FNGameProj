#include "FortAthenaNpcGalileoComponent.h"

void UFortAthenaNpcGalileoComponent::SetPatrolPath(const TArray<FVector>& NewPatrolPath) {
}

void UFortAthenaNpcGalileoComponent::SetCommunicationGroup(const TArray<AFortAthenaAIBotController*>& AIBotControllerList) {
}

void UFortAthenaNpcGalileoComponent::OnPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

TArray<FVector> UFortAthenaNpcGalileoComponent::GetPatrolPath() const {
    return TArray<FVector>();
}

TArray<AFortAthenaAIBotController*> UFortAthenaNpcGalileoComponent::GetCommunicationGroup() {
    return TArray<AFortAthenaAIBotController*>();
}

UFortAthenaNpcGalileoComponent::UFortAthenaNpcGalileoComponent() {
    CachedBotController = NULL;
    PossessedPawn = NULL;
}

