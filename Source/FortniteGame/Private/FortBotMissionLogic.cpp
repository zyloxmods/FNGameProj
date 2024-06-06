#include "FortBotMissionLogic.h"

AFortBotStructureBuilder* UFortBotMissionLogic::SpawnStructureBuilder(AActor* MissionGoal, UFortBuildingInstructions* BuildingInstructions) {
    return NULL;
}

void UFortBotMissionLogic::SetGoalsInvulnerable(bool bGodMode) {
}

void UFortBotMissionLogic::SetCurrentBehavior(UBehaviorTree* Behavior) {
}

void UFortBotMissionLogic::ResetBehavior() {
}







void UFortBotMissionLogic::MarkSingleLocator(const AActor* LocatorActor) {
}

void UFortBotMissionLogic::MarkAllLocated() {
}

void UFortBotMissionLogic::ClearAllLocated() {
}

UFortBotMissionLogic::UFortBotMissionLogic() {
    Mission = NULL;
    CurrentBehaviorAsset = NULL;
}

