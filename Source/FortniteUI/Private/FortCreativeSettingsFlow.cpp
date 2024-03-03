#include "FortCreativeSettingsFlow.h"

void UFortCreativeSettingsFlow::SetupIslandDisplayInformation() {
}

void UFortCreativeSettingsFlow::SetIslandDescriptionTags(const TArray<FCreativeIslandDescriptionTag>& CreativeIslandDescriptionTags) {
}

void UFortCreativeSettingsFlow::OnClose() {
}

bool UFortCreativeSettingsFlow::IsOwnerOfCurrentVolume() {
    return false;
}


FText UFortCreativeSettingsFlow::GetLinkedIslandTagline() {
    return FText::GetEmpty();
}

FString UFortCreativeSettingsFlow::GetLinkedIslandMnemonic() {
    return TEXT("");
}

TArray<FCreativeIslandDescriptionTag> UFortCreativeSettingsFlow::GetIslandDescriptionTags() {
    return TArray<FCreativeIslandDescriptionTag>();
}

FString UFortCreativeSettingsFlow::GetIslandCreatorName() {
    return TEXT("");
}

TArray<FCreativeIslandDescriptionTag> UFortCreativeSettingsFlow::GetAvailableDescriptionTags() {
    return TArray<FCreativeIslandDescriptionTag>();
}

UFortCreativeSettingsFlow::UFortCreativeSettingsFlow() {
    this->TabButtonGroup = NULL;
    this->Button_Solaris = NULL;
    this->SolarisWidgetClass = NULL;
    this->IslandName = NULL;
    this->PublishedIslandCode = NULL;
    this->IslandBulletOne = NULL;
    this->BulletPointImageOne = NULL;
    this->IslandBulletTwo = NULL;
    this->BulletPointImageTwo = NULL;
    this->IslandBulletThree = NULL;
    this->BulletPointImageThree = NULL;
}

