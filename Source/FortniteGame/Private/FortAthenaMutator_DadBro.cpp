#include "FortAthenaMutator_DadBro.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_DadBro::StartNextSafeZonePhase() {
}


void AFortAthenaMutator_DadBro::ResetBackToStartSafeZone() {
}

void AFortAthenaMutator_DadBro::OnRep_DadBroPawn() {
}

void AFortAthenaMutator_DadBro::OnRep_DadBroCodeState() {
}

void AFortAthenaMutator_DadBro::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortAthenaMutator_DadBro::ListenedPawnLanded(const FHitResult& Hit) {
}

void AFortAthenaMutator_DadBro::HandleNewTimeOfDayManager(AFortTimeOfDayManager* NewTodManager) {
}

void AFortAthenaMutator_DadBro::HandleAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy) {
}

void AFortAthenaMutator_DadBro::HandleAIDied(UFortAIEncounterInfo* Encounter, AFortAIPawn* DyingEnemy) {
}

float AFortAthenaMutator_DadBro::GetTimeSinceDadBroStart() const {
    return 0.0f;
}

FRotator AFortAthenaMutator_DadBro::GetDesiredDadBroRotation() const {
    return FRotator{};
}

void AFortAthenaMutator_DadBro::DoDebugSphereForImpulse_Implementation() {
}

void AFortAthenaMutator_DadBro::DespawnPickupsForAoE(float InstantDespawnRange, float MaxDespawnRange, float DespawnTravelSpeed) {
}


void AFortAthenaMutator_DadBro::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_DadBro, DadBroPawn);
    DOREPLIFETIME(AFortAthenaMutator_DadBro, DadBroCodeState);
    DOREPLIFETIME(AFortAthenaMutator_DadBro, ServerTimeDadBroStarted);
    DOREPLIFETIME(AFortAthenaMutator_DadBro, TimeTakenToDefeatDadBro);
}

AFortAthenaMutator_DadBro::AFortAthenaMutator_DadBro() {
    this->DadBroEncounter = NULL;
    this->DadBroEncounterInstance = NULL;
    this->DadBroPawn = NULL;
    this->MaxPickupsToDespawnAtOnce = 0;
    this->PickupTimeRangeToDespawnAtOnce = 1;
    this->DadBroCodeState = EDadBroState::NotYet;
    this->ServerTimeDadBroStarted = 1;
    this->TimeTakenToDefeatDadBro = 1;
    this->ListeningPawn = NULL;
}

