#include "FortUIDataConfiguration.h"

UFortMultiSizeBrushAsset* UFortUIDataConfiguration::GetDefenderSubtypeIconMultiSizeBrushByTag(const FGameplayTag DefenderSubtypeTag) {
    return NULL;
}

UFortUIDataConfiguration::UFortUIDataConfiguration() {
    this->DefaultUIDataConfigurationPath = TEXT("/Game/UI/Foundation/Config/DefaultUIDataConfiguration.DefaultUIDataConfiguration_C");
    this->DefaultBROnlyUIDataConfigurationPath = TEXT("/Game/UI/Foundation/Config/DefaultBROnlyUIDataConfiguration.DefaultBROnlyUIDataConfiguration_C");
    this->MobileBROnlyUIDataConfigurationPath = TEXT("/Game/UI/Foundation/Config/MobileBROnlyUIDataConfiguration.MobileBROnlyUIDataConfiguration_C");
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
    this->ItemShopConfiguration = NULL;
    this->AnalogRotateSpeed = 1;
    this->DragRotateSpeed = 1;
    this->TouchSwipeRotateRate = 1;
    this->MouseWheelZoomSpeed = 1;
    this->DragZoomSpeed = 1;
    this->TriggerZoomSpeed = 1;
    this->TouchZoomPinchRate = 1;
    this->ItemViewCompetingAxisInputThreshold = 1;
    this->FrontendItemViewSettingsManager = NULL;
    this->VideoDisplayData = NULL;
    this->SocialDisplayData = NULL;
    this->ChallengeDisplayData = NULL;
    this->SquadStyleData = NULL;
    this->StoreDisplayData = NULL;
    this->ItemPresentationDisplayData = NULL;
    this->PipTest = NULL;
}

