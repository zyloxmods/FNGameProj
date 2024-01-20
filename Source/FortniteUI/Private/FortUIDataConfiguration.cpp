#include "FortUIDataConfiguration.h"

UFortMultiSizeBrushAsset* UFortUIDataConfiguration::GetDefenderSubtypeIconMultiSizeBrushByTag(const FGameplayTag DefenderSubtypeTag) {
    return NULL;
}

UFortUIDataConfiguration::UFortUIDataConfiguration() {
    this->DefaultUIDataConfigurationPath = TEXT("/Game/UI/Foundation/Config/DefaultUIDataConfiguration.DefaultUIDataConfiguration_C");
    this->BROnlyUIDataConfigurationPath = TEXT("/Game/UI/Foundation/Config/BROnlyUIDataConfiguration.BROnlyUIDataConfiguration_C");
    this->ErebusUIDataConfigurationPath = TEXT("/Game/UI/Foundation/Config/Erebus/ErebusUIDataConfiguration.ErebusUIDataConfiguration_C");
    this->bEnableSocialFeatures = true;
    this->bEnableChat = true;
    this->bEnablePartyFeatures = true;
    this->SocialPanelClass = NULL;
    this->TeamMemberManageClass = NULL;
    this->ReturnToFrontendBehavior = EFortReturnToFrontendBehavior::NotSpecified;
    this->bLimitedToES2Features = false;
    this->bUseSpecificPinataWeapon = false;
    this->bQuestVOEnabled = false;
    this->ObjClassToTooltipStatsMap = NULL;
    this->GameOptionsMenuData = NULL;
    this->GameCreativeMenuData = NULL;
    this->GameOptionsMenuDefaults = NULL;
    this->AnalogRotateSpeed = 0.00f;
    this->DragRotateSpeed = 0.00f;
    this->TouchSwipeRotateRate = 0.00f;
    this->MouseWheelZoomSpeed = 0.00f;
    this->DragZoomSpeed = 0.00f;
    this->TriggerZoomSpeed = 0.00f;
    this->TouchZoomPinchRate = 0.00f;
    this->ItemViewCompetingAxisInputThreshold = 0.00f;
    this->FrontendItemViewSettingsManager = NULL;
    this->VideoDisplayData = NULL;
    this->SocialDisplayData = NULL;
    this->ChallengeDisplayData = NULL;
    this->SquadStyleData = NULL;
    this->PipTest = NULL;
}

