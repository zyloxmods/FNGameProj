#include "FortFastLoadConfig.h"

UFortFastLoadConfig::UFortFastLoadConfig() {
    this->bDisableStreamInBuildings = true;
    this->bDisableStartupAIDirector = true;
    this->bDisableUpgradePlayerBuildingClasses = true;
    this->bUseMinimalPlayerBuildingClasses = true;
    this->bDisableStartingMissions = true;
    this->bUseFastLoadDefaultInventory = true;
    this->bDisableNavAgentCostData = true;
    this->bDisableThreatVisualsManager = true;
    this->bDisablePreLoadAssets = true;
}

