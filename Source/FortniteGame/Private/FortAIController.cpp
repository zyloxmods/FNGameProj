#include "FortAIController.h"
#include "FortPathFollowingComponent.h"
#include "Templates/SubclassOf.h"

void AFortAIController::WakeUp() {
}

void AFortAIController::UnlockMovementResource() {
}

void AFortAIController::UnlockBehaviorResource() {
}

void AFortAIController::SetupCustomVIM(UClass* VIM) {
}

void AFortAIController::SetTeamInt(uint8 InTeam) {
}

void AFortAIController::SetTeam(TEnumAsByte<EFortTeam::Type> InTeam) {
}

void AFortAIController::SetPawnAIType(EFortressAIType NewAIType, AActor* SpawnSpot) {
}

void AFortAIController::SetIsSleeping(bool bNewSleepStatus) {
}

void AFortAIController::SetGoalActor(AActor* InActor, bool bLocationAlwaysKnown) {
}

void AFortAIController::SetFullPeripheralVision(bool bNewFullPeripheralVision) {
}

void AFortAIController::SetAlwaysGameplayRelevant(bool bInAlwaysGameplayRelevant) {
}

void AFortAIController::OnBuildingActorGoalDestroyed() {
}

void AFortAIController::LockMovementResource() {
}

void AFortAIController::LockBehaviorResource() {
}

bool AFortAIController::IsIgnoringProximity(AFortAIController* FortAIController) {
    return false;
}

bool AFortAIController::IsAllowedToSleep() {
    return false;
}

void AFortAIController::IgnoreProximityForDuration(float DurationToIgnore) {
}

AActor* AFortAIController::GetGoalActor() const {
    return NULL;
}

UFortAIEncounterInfo* AFortAIController::GetEncounterInfo() const {
    return NULL;
}

bool AFortAIController::CreateBuildingActor(TSubclassOf<ABuildingSMActor> BuildingClass, FVector BuildLoc, FRotator BuildRot, bool bMirrored) {
    return false;
}

void AFortAIController::ClearAllFocalPoints() {
}

AFortAIController::AFortAIController() {
    bUsingNavMesh = false;
    bAlwaysNotifyBumpWall = false;
    bInstantRotation = false;
    bTurnTransitionsEnabled = true;
    bAllowHotspotAbilityLooping = true;
    GoalInfoUpdateRate = 1;
    GoalActor = NULL;
    GoalVisibilityPersistanceTime = 1;
    MyFortPawn = NULL;
    AIGoalComponent = NULL;
}

