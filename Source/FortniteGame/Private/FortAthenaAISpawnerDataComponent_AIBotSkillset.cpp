#include "FortAthenaAISpawnerDataComponent_AIBotSkillset.h"

UFortAthenaAISpawnerDataComponent_AIBotSkillset::UFortAthenaAISpawnerDataComponent_AIBotSkillset() {
    this->AimingSkillSet = NULL;
    this->AttackingSkillSet = NULL;
    this->BuildingSkillSet = NULL;
    this->DBNOSkillSet = NULL;
    this->EmoteSkillSet = NULL;
    this->EvasiveManeuversSkillSet = NULL;
    this->HarvestSkillSet = NULL;
    this->HealingSkillSet = NULL;
    this->InventorySkillSet = NULL;
    this->LootingSkillSet = NULL;
    this->MovementSkillSet = NULL;
    this->PerceptionSkillSet = NULL;
    this->PlayStyleSkillSet = NULL;
    this->PropagateAwarenessSkillSet = NULL;
    this->RangeAttackSkillSet = NULL;
    this->ReviveSkillSet = NULL;
    this->UnstuckSkillSet = NULL;
    this->bUseMatchMMRToOverrideSkillLevel = false;
    this->Skill = 1;
}

