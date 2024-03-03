#include "FortAthenaAISpawnerDataComponent_SkillsetBase.h"
#include "Templates/SubclassOf.h"

bool UFortAthenaAISpawnerDataComponent_SkillsetBase::ShouldUseMatchMMRToOverrideSkillLevel_Implementation() {
    return false;
}

TArray<TSubclassOf<UFortAthenaAIBotSkillSet>> UFortAthenaAISpawnerDataComponent_SkillsetBase::GetSkillSets_Implementation() {
    return TArray<TSubclassOf<UFortAthenaAIBotSkillSet>>();
}

float UFortAthenaAISpawnerDataComponent_SkillsetBase::GetSkill_Implementation() {
    return 0.0f;
}

UFortAthenaAISpawnerDataComponent_SkillsetBase::UFortAthenaAISpawnerDataComponent_SkillsetBase() {
}

