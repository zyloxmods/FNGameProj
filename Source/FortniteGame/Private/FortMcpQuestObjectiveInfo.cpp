#include "FortMcpQuestObjectiveInfo.h"

FFortMcpQuestObjectiveInfo::FFortMcpQuestObjectiveInfo() {
    this->ItemEvent = EFortQuestObjectiveItemEvent::Craft;
    this->bHidden = false;
    this->bRequirePrimaryMissionCompletion = false;
    this->bCanProgressInZone = false;
    this->bDisplayDynamicAnnouncementUpdate = false;
    this->DynamicStatusUpdateType = EObjectiveStatusUpdateType::Always;
    this->LinkVaultTab = EFortInventoryFilter::WeaponMelee;
    this->LinkToItemManagement = EFortFrontendInventoryFilter::Schematics;
    this->LinkSquadIndex = 0;
    this->Count = 0;
    this->Stage = 0;
    this->DynamicStatusUpdatePercentInterval = 0;
    this->DynamicUpdateCompletionDelay = 0.00f;
}

