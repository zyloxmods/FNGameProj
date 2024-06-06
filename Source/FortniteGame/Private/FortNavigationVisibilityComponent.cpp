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
    bPassedRules = false;
    LastProfileRevision = 0;
    bEnableCollision = true;
    bCustomSkipCollision = true;
    bShouldLogFails = true;
    debugVisibilityLastKnownState = false;
    ActorResponse = EVisibilityResponse::Hide;
}

