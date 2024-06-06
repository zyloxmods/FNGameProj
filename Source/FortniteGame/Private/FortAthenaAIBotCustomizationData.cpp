#include "FortAthenaAIBotCustomizationData.h"

void UFortAthenaAIBotCustomizationData::SetCharacterCustomizationFromPlayerPawn(const AFortPlayerPawn* InFortPawn) {
}

UFortAthenaAIBotCustomizationData::UFortAthenaAIBotCustomizationData() {
    PawnClass = NULL;
    bRequiresUniqueNetId = false;
    bHasCustomSquadId = false;
    CustomSquadId = 0;
    bOverrideCanRespawnOnDeath = false;
    bCanRespawnOnDeath = false;
    bOverrideBehaviorTree = false;
    bOverrideCharacterCustomization = false;
    bOverrideDBNOPlayStyle = false;
    bOverrideSkillLevel = false;
    bUseMatchMMRToOverrideSkillLevel = false;
    bOverrideSkillSets = false;
    bOverrideStartupInventory = false;
    bOverrideBotNameSettings = false;
    bOverrideBotIDAnalyticsSuffix = false;
    bOverrideConstructionBuildingInfo = false;
    BehaviorTree = NULL;
    OverrideCosmeticMode = BotDataOverrideCosmeticMode::SpecificLoadout;
    CharacterCustomization = NULL;
    DBNOPlayStyle = EDBNOPlayStyle::Thirsty;
    SkillLevel = 1;
    StartupInventory = NULL;
    BotNameSettings = NULL;
    SpawnTracePadding = 1;
    AILODSettingsContainer = NULL;
    AILODSettingsContainerLoaded = NULL;
}

