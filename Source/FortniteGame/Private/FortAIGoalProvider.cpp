#include "FortAIGoalProvider.h"

void UFortAIGoalProvider::UpdateGoals() {
}

bool UFortAIGoalProvider::InitializeGoalProvider(UWorld* ContextWorld, UFortAIAssignment* Assignment) {
    return false;
}

UFortAIEncounterInfo* UFortAIGoalProvider::GetEncounterInfo() const {
    return NULL;
}

UFortAIGoalProvider::UFortAIGoalProvider() {
    World = NULL;
    AssignmentOwner = NULL;
    EncounterInfo = NULL;
}

