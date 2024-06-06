#include "FortMcpQuestObjectiveInfo.h"

FFortMcpQuestObjectiveInfo::FFortMcpQuestObjectiveInfo() {
    ItemEvent = EFortQuestObjectiveItemEvent::Craft;
    bHidden = false;
    bRequirePrimaryMissionCompletion = false;
    bCanProgressInZone = false;
    bDisplayDynamicAnnouncementUpdate = false;
    DynamicStatusUpdateType = EObjectiveStatusUpdateType::Always;
    LinkVaultTab = EFortInventoryFilter::WeaponMelee;
    LinkToItemManagement = EFortFrontendInventoryFilter::Schematics;
    LinkSquadIndex = 0;
    Count = 0;
    Stage = 0;
    DynamicStatusUpdatePercentInterval = 0;
    DynamicUpdateCompletionDelay = 1;
}

