#include "FortBotStructureBuilder.h"

void AFortBotStructureBuilder::RunDeconstructor() {
}

void AFortBotStructureBuilder::OnBuildingDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortBotStructureBuilder::BuildAll() {
}

AFortBotStructureBuilder::AFortBotStructureBuilder() {
    this->BuildingInstructions = NULL;
    this->CachedGoal = NULL;
}

