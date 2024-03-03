#include "BarrierTeamState.h"

FBarrierTeamState::FBarrierTeamState() {
    this->TeamNum = 0;
    this->FoodTeam = EBarrierFoodTeam::Burger;
    this->ObjectiveFlag = NULL;
    this->ObjectiveObject = NULL;
    this->bRespawnEnabled = false;
}

