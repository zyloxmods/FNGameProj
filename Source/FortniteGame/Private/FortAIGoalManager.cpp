#include "FortAIGoalManager.h"
#include "Templates/SubclassOf.h"

void AFortAIGoalManager::SetCurrentGoalDiscouragement(UObject* WorldContext, AFortAIController* AI) {
}

void AFortAIGoalManager::RemoveWorldAssignment(const UObject* WorldContextObject, FFortAIAssignmentIdentifier AssignmentIdentifier) {
}

void AFortAIGoalManager::RemoveGoalsFromWorldAssignment(UObject* WorldContextObject, const FFortAIAssignmentIdentifier& AssignmentIdentifier, const TArray<FFortAIGoalInfo> GoalInfos) {
}

void AFortAIGoalManager::RemoveGoalFromWorldAssignment(UObject* WorldContextObject, const FFortAIAssignmentIdentifier& AssignmentIdentifier, const FFortAIGoalInfo GoalInfo) {
}

void AFortAIGoalManager::MakeGoalsFromLocationsAndActor(TArray<FFortAIGoalInfo> Goals, const UObject* WorldContextObject, const TArray<FVector>& GoalLocations, const AActor* GoalActor) {
}

void AFortAIGoalManager::MakeGoalsFromLocations(TArray<FFortAIGoalInfo> Goals, const UObject* WorldContextObject, const TArray<FVector>& GoalLocations) {
}

void AFortAIGoalManager::MakeGoalsFromActors(TArray<FFortAIGoalInfo> Goals, const UObject* WorldContextObject, const TArray<AActor*>& GoalActors, bool bActorsAlwaysPerceived, bool bGoalActorsAllowUndermining) {
}

void AFortAIGoalManager::MakeGoalFromLocation(FFortAIGoalInfo Goal, const UObject* WorldContextObject, const FVector& GoalLocation) {
}

void AFortAIGoalManager::MakeGoalFromActor(FFortAIGoalInfo Goal, const UObject* WorldContextObject, AActor* GoalActor, bool bActorAlwaysPerceived, bool bGoalActorAllowsUndermining) {
}

void AFortAIGoalManager::CreateWorldAssignment(UObject* WorldContextObject, FFortAIAssignmentIdentifier WorldAssignmentIdentifier, UFortAIAssignmentSettings* AssignmentSettings, TSubclassOf<UFortAIGoalProvider> GoalProvider, FFortAIAssignmentIdentifier& AssignmentIdentifier, EAssignmentCreationResult& CreationResult) {
}

UFortAIAssignment* AFortAIGoalManager::AddWorldAssignment(UFortAIAssignmentSettings* AssignmentSettings, AActor* GoalActor) {
    return NULL;
}

void AFortAIGoalManager::AddGoalToWorldAssignment(UObject* WorldContextObject, const FFortAIAssignmentIdentifier& AssignmentIdentifier, const FFortAIGoalInfo GoalInfo) {
}

void AFortAIGoalManager::AddGoalsToWorldAssignment(UObject* WorldContextObject, const FFortAIAssignmentIdentifier& AssignmentIdentifier, const TArray<FFortAIGoalInfo> GoalInfos) {
}

void AFortAIGoalManager::AddGoalActorToAssignment(UFortAIAssignment* Assignment, AActor* GoalActor) {
}

void AFortAIGoalManager::AddGoal(AActor* GoalActor, UFortAIAssignmentSettings* GoalSettings) {
}

AFortAIGoalManager::AFortAIGoalManager() {
    DefaultAttackPlayersAssignment = NULL;
    DefaultEncounterAssignmentSettings = NULL;
    DefaultEnemyAssignmentSettings = NULL;
}

