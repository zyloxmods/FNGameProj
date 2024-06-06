#include "FortHomebaseManager.h"

bool UFortHomebaseManager::IsSquadSlotUnlocked(FName SquadId, int32 SlotIdx, const UFortMcpProfileCampaign* McpProfile) const {
    return false;
}

UFortWorker* UFortHomebaseManager::GetWorkerInSquadSlot(FName SquadId, int32 SlotIdx, const UFortMcpProfileCampaign* McpProfile) const {
    return NULL;
}

void UFortHomebaseManager::GetSquadPopulation(FName SquadId, const UFortMcpProfileCampaign* McpProfile, TArray<UFortWorker*>& OutSquadMembers) const {
}

bool UFortHomebaseManager::GetSquadCopyById(FName SquadId, FHomebaseSquad& OutSquad) {
    return false;
}

int32 UFortHomebaseManager::GetNumWorldInventoryBonusTokens(UFortMcpProfileCampaign* McpProfile) {
    return 0;
}

int32 UFortHomebaseManager::GetNumAccountLimitedItems(UFortMcpProfileCampaign* McpProfile) {
    return 0;
}

int32 UFortHomebaseManager::GetNumAccountInventoryBonusTokens(UFortMcpProfileCampaign* McpProfile) {
    return 0;
}

FString UFortHomebaseManager::GetNodeInstanceIdByNodeId(const FString& NodeTemplateId, const UFortMcpProfileCampaign* McpProfile) const {
    return TEXT("");
}

FString UFortHomebaseManager::GetHomebaseName(const UFortMcpProfileCommonPublic* McpProfile) {
    return TEXT("");
}

bool UFortHomebaseManager::AreNodeCostsMet(const UFortHomebaseNodeItemDefinition* NodeItemDef, UFortMcpProfileCampaign* McpProfile, int32 Level) {
    return false;
}

UFortHomebaseManager::UFortHomebaseManager() {
    HomebaseNodeGameplayEffectDataTable = NULL;
    ResearchSystemUpgradesTable = NULL;
    StatsGamplayEffect = NULL;
    HomebaseSquadDataTable = NULL;
    ExpeditionSlotsDataTable = NULL;
    ManagerSquadSynergyBonusTable = NULL;
    SquadGE = NULL;
}

