#include "FortAthenaMutator_Encounter.h"

void AFortAthenaMutator_Encounter::HandleRiftDying(UFortAIEncounterInfo* Encounter, ABuildingRift* Rift, AController* Controller, AActor* DamageActor) {
}

void AFortAthenaMutator_Encounter::HandleAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy) {
}

AFortAthenaMutator_Encounter::AFortAthenaMutator_Encounter() {
    this->EncounterSettings = NULL;
    this->CurrentEncounter = NULL;
    this->bUsesAnimationSharing = false;
}

