#include "FortAthenaAISpawnerDataComponent_AIBotSkillset.h"

UFortAthenaAISpawnerDataComponent_AIBotSkillset::UFortAthenaAISpawnerDataComponent_AIBotSkillset() {
    AimingSkillSet = NULL;
    AttackingSkillSet = NULL;
    BuildingSkillSet = NULL;
    DBNOSkillSet = NULL;
    EmoteSkillSet = NULL;
    EvasiveManeuversSkillSet = NULL;
    HarvestSkillSet = NULL;
    HealingSkillSet = NULL;
    InventorySkillSet = NULL;
    LootingSkillSet = NULL;
    MovementSkillSet = NULL;
    PerceptionSkillSet = NULL;
    PlayStyleSkillSet = NULL;
    PropagateAwarenessSkillSet = NULL;
    RangeAttackSkillSet = NULL;
    ReviveSkillSet = NULL;
    UnstuckSkillSet = NULL;
    bUseMatchMMRToOverrideSkillLevel = false;
    Skill = 1;
}

