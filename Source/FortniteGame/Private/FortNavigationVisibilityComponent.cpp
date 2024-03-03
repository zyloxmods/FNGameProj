#include "FortNavigationVisibilityComponent.h"

void UFortNavigationVisibilityComponent::HandlePlayerChanged(AFortPlayerController* NewRoomOwner) {
}

void UFortNavigationVisibilityComponent::HandleActiveCameraChanged(FGameplayTag CameraTag) {
}

TArray<FString> UFortNavigationVisibilityComponent::Editor_GetValidProfileStats() const {
    return TArray<FString>();
}

TArray<FName> UFortNavigationVisibilityComponent::Editor_GetValidObjectives() const {
    return TArray<FName>();
}

UFortNavigationVisibilityComponent::UFortNavigationVisibilityComponent() {
    this->bPassedRules = false;
    this->LastProfileRevision = 0;
    this->bEnableCollision = true;
    this->bCustomSkipCollision = true;
    this->bShouldLogFails = true;
    this->debugVisibilityLastKnownState = false;
    this->ActorResponse = EVisibilityResponse::Hide;
}

