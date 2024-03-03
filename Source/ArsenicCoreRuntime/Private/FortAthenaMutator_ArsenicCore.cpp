#include "FortAthenaMutator_ArsenicCore.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_ArsenicCore::UpdateAnalyticsDataOnPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortAthenaMutator_ArsenicCore::OnRep_bTheGhostTeamHasWon() {
}

bool AFortAthenaMutator_ArsenicCore::IsGhostThatPermaDiedTeam(uint8 TeamId) const {
    return false;
}

bool AFortAthenaMutator_ArsenicCore::IsGhostTeam(uint8 TeamId) const {
    return false;
}

bool AFortAthenaMutator_ArsenicCore::IsALivingTeam(uint8 TeamId) const {
    return false;
}

bool AFortAthenaMutator_ArsenicCore::HasTheGhostTeamWon() const {
    return false;
}

float AFortAthenaMutator_ArsenicCore::GetPopulationInRadius(FVector CenterLocation, float Radius) {
    return 0.0f;
}

void AFortAthenaMutator_ArsenicCore::GetPopulationAndGhostHumanRatioInRadius(FVector CenterLocation, float Radius, float& OutPopulation, float& OutGhostHumanRatio) {
}

uint8 AFortAthenaMutator_ArsenicCore::GetGhostTeam(uint8 TeamId) const {
    return 0;
}

float AFortAthenaMutator_ArsenicCore::GetGhostHumanRatioInRadius(FVector CenterLocation, float Radius) {
    return 0.0f;
}

uint8 AFortAthenaMutator_ArsenicCore::GetEliminatedPlayersTeamId() const {
    return 0;
}

void AFortAthenaMutator_ArsenicCore::CreateGhostBotStimuliFromScream(AFortPlayerPawnAthena* ScreamerPawn, TArray<AFortPlayerPawnAthena*> RevealedHumans) {
}

void AFortAthenaMutator_ArsenicCore::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_ArsenicCore, bTheGhostTeamHasWon);
    DOREPLIFETIME(AFortAthenaMutator_ArsenicCore, GhostPlayerStates);
    DOREPLIFETIME(AFortAthenaMutator_ArsenicCore, HumanPlayerPawnDataList);
    DOREPLIFETIME(AFortAthenaMutator_ArsenicCore, PopulationTracker);
}

AFortAthenaMutator_ArsenicCore::AFortAthenaMutator_ArsenicCore() {
    this->ArsenicCorePlayerComponentClass = NULL;
    this->ConsumePickupsMutator = NULL;
    this->ArsenicCoreRespawnDroneClass = NULL;
    this->GhostContrails = NULL;
    this->GhostPortrait = NULL;
    this->GhostWeaponItemDefinition = NULL;
    this->AmbientAudioBank = NULL;
    this->AmbientAudioBankPriority = 0;
    this->bTheGhostTeamHasWon = false;
    this->PopulationTracker = NULL;
}

