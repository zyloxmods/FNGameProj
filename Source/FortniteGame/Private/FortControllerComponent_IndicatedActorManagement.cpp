#include "FortControllerComponent_IndicatedActorManagement.h"
#include "Net/UnrealNetwork.h"

void UFortControllerComponent_IndicatedActorManagement::RemoveGroupFromStenciledList(const FString& GroupIdentifier, const bool bIncludeSquad) {
}

void UFortControllerComponent_IndicatedActorManagement::RemoveGroupFromIndicatedList(const FString& GroupIdentifier, const bool bIncludeSquad) {
}

void UFortControllerComponent_IndicatedActorManagement::RemoveActorFromStenciledList(AActor* StenciledActor, const bool bIncludeSquad) {
}

void UFortControllerComponent_IndicatedActorManagement::RemoveActorFromIndicatedList(AActor* IndicatedActor, const bool bIncludeSquad) {
}

void UFortControllerComponent_IndicatedActorManagement::OnRep_StenciledActorList() {
}

void UFortControllerComponent_IndicatedActorManagement::OnRep_IndicatedActorList() {
}

void UFortControllerComponent_IndicatedActorManagement::OnHardCoreBeaconPlayerPawnPossessed(APawn* PossessedPawn) {
}

void UFortControllerComponent_IndicatedActorManagement::OnHardCoreBeaconPlayerPawnDied(const FFortPlayerDeathReport& DeathReport) {
}

void UFortControllerComponent_IndicatedActorManagement::AddActorsToStenciledList(TArray<AActor*>& StenciledActors, FStenciledActorData Data, const bool bAddAsUnique, const bool bReplaceExistingEntry) {
}

void UFortControllerComponent_IndicatedActorManagement::AddActorsToIndicatedList(TArray<AActor*>& IndicatedActors, FIndicatedActorData Data, const bool bAddAsUnique, const bool bAllowOwningPlayer, const bool bReplaceExistingEntry) {
}

void UFortControllerComponent_IndicatedActorManagement::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortControllerComponent_IndicatedActorManagement, IndicatedActorList);
    DOREPLIFETIME(UFortControllerComponent_IndicatedActorManagement, StenciledActorList);
}

UFortControllerComponent_IndicatedActorManagement::UFortControllerComponent_IndicatedActorManagement() {
}

