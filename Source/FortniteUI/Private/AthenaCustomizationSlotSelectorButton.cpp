#include "AthenaCustomizationSlotSelectorButton.h"

void UAthenaCustomizationSlotSelectorButton::SetCustomizationType(EAthenaCustomizationCategory NewType, int32 InSubslotIndex, const FGameplayTag& RequiredSlotTag) {
}

void UAthenaCustomizationSlotSelectorButton::SetCardDefaultImageAndWidth(const TSoftObjectPtr<UTexture2D>& InDefaultImage, float InWidth) {
}




bool UAthenaCustomizationSlotSelectorButton::IsSlotFilled() const {
    return false;
}

void UAthenaCustomizationSlotSelectorButton::HandleDifferentHeroLoadoutActivated(const UFortMcpProfileCampaign* Profile) {
}

void UAthenaCustomizationSlotSelectorButton::GetCustomizationSlotActiveState(bool& bOutAttachableCosmeticAvailable, bool& bOutActive) const {
}

UFortItem* UAthenaCustomizationSlotSelectorButton::GetCampaignHeroPartItem() const {
    return NULL;
}

UAthenaCustomizationSlotSelectorButton::UAthenaCustomizationSlotSelectorButton() {
    this->CustomizationType = EAthenaCustomizationCategory::None;
    this->SubslotIndex = 0;
    this->BangType = EFortBangType::Invalid;
    this->bAllowUnownedItems = false;
    this->bOneItemPerSlot = false;
    this->OverrideSlotImage = NULL;
    this->ItemWidget = NULL;
    this->CardWidth = 1;
    this->LocalCampaignHeroPartItem = NULL;
    this->Image_Favorite = NULL;
    this->Image_ClassIcon = NULL;
    this->Bang_Wrapper = NULL;
}

