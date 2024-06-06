#include "BarrierTeamState.h"

FBarrierTeamState::FBarrierTeamState() {
    TeamNum = 0;
    FoodTeam = EBarrierFoodTeam::Burger;
    ObjectiveFlag = NULL;
    ObjectiveObject = NULL;
    bRespawnEnabled = false;
}

