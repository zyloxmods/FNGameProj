#include "FortAthenaAIBotCustomizationData.h"

void UFortAthenaAIBotCustomizationData::SetCharacterCustomizationFromPlayerPawn(const AFortPlayerPawn* InFortPawn) {
}

UFortAthenaAIBotCustomizationData::UFortAthenaAIBotCustomizationData() {
    this->PawnClass = NULL;
    this->bRequiresUniqueNetId = false;
    this->bHasCustomSquadId = false;
    this->CustomSquadId = 0;
    this->bOverrideCanRespawnOnDeath = false;
    this->bCanRespawnOnDeath = false;
    this->bOverrideBehaviorTree = false;
    this->bOverrideCharacterCustomization = false;
    this->bOverrideDBNOPlayStyle = false;
    this->bOverrideSkillLevel = false;
    this->bUseMatchMMRToOverrideSkillLevel = false;
    this->bOverrideSkillSets = false;
    this->bOverrideStartupInventory = false;
    this->bOverrideBotNameSettings = false;
    this->bOverrideBotIDAnalyticsSuffix = false;
    this->bOverrideConstructionBuildingInfo = false;
    this->BehaviorTree = NULL;
    this->OverrideCosmeticMode = BotDataOverrideCosmeticMode::SpecificLoadout;
    this->CharacterCustomization = NULL;
    this->DBNOPlayStyle = EDBNOPlayStyle::Thirsty;
    this->SkillLevel = 1;
    this->StartupInventory = NULL;
    this->BotNameSettings = NULL;
    this->SpawnTracePadding = 1;
    this->AILODSettingsContainer = NULL;
    this->AILODSettingsContainerLoaded = NULL;
}

