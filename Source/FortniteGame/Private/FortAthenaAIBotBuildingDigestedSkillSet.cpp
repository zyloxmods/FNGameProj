#include "FortAthenaAIBotBuildingDigestedSkillSet.h"

UFortAthenaAIBotBuildingDigestedSkillSet::UFortAthenaAIBotBuildingDigestedSkillSet() {
    this->DefensiveBuildingDelayBetweenBuilds = 1;
    this->DefensiveBuildingDelayDeviationBetweenBuilds = 1;
    this->ForceEquipBuildToolDuration = 1;
    this->DefensiveBuildingTemplateWeights[0] = 1;
    this->DefensiveBuildingTemplateWeights[1] = 1;
    this->DefensiveBuildingTemplateWeights[2] = 1;
    this->DefensiveBuildingTemplateWeights[3] = 1;
    this->DefensiveBuildingTemplateWeights[4] = 1;
    this->StealWallTurboBuildDetectionTime = 1;
    this->StealWallAfterNumberOfTurboBuiltWall = 0;
    this->StealWallEfficiency = 1;
    this->StealWallBuildingTemplateWeights[0] = 1;
    this->StealWallBuildingTemplateWeights[1] = 1;
    this->StealWallBuildingTemplateWeights[2] = 1;
    this->StealWallBuildingTemplateWeights[3] = 1;
    this->StealWallBuildingTemplateWeights[4] = 1;
}

