#include "BarrierObjectState.h"

FBarrierObjectState::FBarrierObjectState() {
    this->ObjectiveActor = NULL;
    this->TeamNum = 0;
    this->FoodTeam = EBarrierFoodTeam::Burger;
    this->DamageState = EBarrierObjectiveDamageState::Health_75;
}

