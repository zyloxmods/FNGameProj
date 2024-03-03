#include "SpatialMapScreen.h"





USpatialMapScreen::USpatialMapScreen() {
    this->Screen_Preview = NULL;
    this->Gradient_Background = NULL;
    this->Bar_Actions = NULL;
    this->Card_RewardPreview = NULL;
    this->ChallengeCountdownDisplay = NULL;
    this->Overlay_MapIconsOverlay = NULL;
    this->Rotator_ChallengePage = NULL;
    this->Rotator_ChallengeCategory = NULL;
    this->ListView_NonLocationIconsBelowMap = NULL;
    this->PageView_SelectedChallenges = NULL;
    this->VerticalBox_LeftContents = NULL;
    this->Button_Inspect = NULL;
    this->Button_RewardPreview = NULL;
    this->Button_PreviousPreview = NULL;
    this->Button_NextPreview = NULL;
    this->Item_UnlockInfo = NULL;
    this->Item_HeaderInfo = NULL;
    this->bDrawPOIs = true;
    this->AnimateIntroIconsMode = 0;
    this->ExcludedFromMapNameDisplayPOIs.AddDefaulted(1);
    this->NamedLocationQuestItemDefinition = NULL;
    this->POIQuestItemDefinition = NULL;
}

