#include "FortOutpostContext.h"

void UFortOutpostContext::UpgradePOST() {
}

void UFortOutpostContext::UpgradeBuildingByDefinition(UFortOutpostItemDefinition* BuildingToUpgrade) {
}

void UFortOutpostContext::UpgradeBuilding(EOutpostBuildings OutpostBuilding) {
}

void UFortOutpostContext::LeaveOutpostAsParty() const {
}

float UFortOutpostContext::GetPOSTBuildingHealthMod(int32 POSTLevel) const {
    return 0.0f;
}

int32 UFortOutpostContext::GetOutpostCoreLevel() const {
    return 0;
}

TArray<UOutpostPOSTRequirementData*> UFortOutpostContext::GetNextPOSTLevelRequirements() const {
    return TArray<UOutpostPOSTRequirementData*>();
}

int32 UFortOutpostContext::GetHighestEnduranceWaveReached() const {
    return 0;
}

UFortWorldItemDefinition* UFortOutpostContext::GetHarvestingToolForLevel(int32 InHarvestingOptimizerLevel) const {
    return NULL;
}

void UFortOutpostContext::GetBuildingUpgradeCostFromDefinition(UFortOutpostItemDefinition* OutpostBuilding, TArray<FFortItemQuantityPair>& OutWorldItems, TArray<FFortItemQuantityPair>& OutAccountItems) const {
}

void UFortOutpostContext::GetBuildingUpgradeCost(EOutpostBuildings OutpostBuilding, TArray<FFortItemQuantityPair>& OutWorldItems, TArray<FFortItemQuantityPair>& OutAccountItems) const {
}

int32 UFortOutpostContext::GetBuildingMaxLevelFromDefinition(UFortOutpostItemDefinition* OutpostBuilding) const {
    return 0;
}

int32 UFortOutpostContext::GetBuildingMaxLevel(EOutpostBuildings OutpostBuilding) const {
    return 0;
}

int32 UFortOutpostContext::GetBuildingLevelFromDefinition(UFortOutpostItemDefinition* OutpostBuilding) const {
    return 0;
}

int32 UFortOutpostContext::GetBuildingLevel(EOutpostBuildings OutpostBuilding) const {
    return 0;
}

void UFortOutpostContext::DepositPOSTResource(const UFortItemDefinition* ResourceItem, int32 Count) {
}

void UFortOutpostContext::CleanUpOnExit() const {
}

bool UFortOutpostContext::CanUpgradePOST() const {
    return false;
}

bool UFortOutpostContext::CanUpgradeBuildingFromDefinition(UFortOutpostItemDefinition* OutpostBuilding, bool bLog) const {
    return false;
}

bool UFortOutpostContext::CanUpgradeBuilding(EOutpostBuildings OutpostBuilding, bool bLog) const {
    return false;
}

UFortOutpostContext::UFortOutpostContext() {
}

