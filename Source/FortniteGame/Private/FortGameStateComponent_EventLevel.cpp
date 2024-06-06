#include "FortGameStateComponent_EventLevel.h"

void UFortGameStateComponent_EventLevel::TryToClaimRewardGraphNode(FGameplayTag NodeTag) const {
}

void UFortGameStateComponent_EventLevel::StartRestedXpTimer() {
}

void UFortGameStateComponent_EventLevel::SetActiveCamera(FGameplayTag NewActiveCamera, bool bUseTransition) {
}

bool UFortGameStateComponent_EventLevel::RegisterNavigationActor(AFortEventLevelNavigationActor* InActor) {
    return false;
}

void UFortGameStateComponent_EventLevel::RegisterHiddenActor(AActor* InActor, FGameplayTag EventGraphNode) {
}

bool UFortGameStateComponent_EventLevel::RegisterCamera(AFortEventLevelCamera* InCamera) {
    return false;
}



void UFortGameStateComponent_EventLevel::NotifyRestedXpGenAmount(int32 RestedXp) {
}

void UFortGameStateComponent_EventLevel::LinkNavActorToCamera(AFortEventLevelNavigationActor* InActor, FGameplayTag CameraTag) {
}

void UFortGameStateComponent_EventLevel::HandleOnCameraCut(UCameraComponent* CameraComponent) {
}

void UFortGameStateComponent_EventLevel::HandleOnCameraBlendComplete() {
}


void UFortGameStateComponent_EventLevel::GoToCamera(FGameplayTag CameraToViewFrom) {
}

AFortEventLevelNavigationActor* UFortGameStateComponent_EventLevel::GetLastNavObject() const {
    return NULL;
}

void UFortGameStateComponent_EventLevel::EndRestXpTimer() {
}

void UFortGameStateComponent_EventLevel::CanGainRestedXp(bool& bResult) const {
}

UFortGameStateComponent_EventLevel::UFortGameStateComponent_EventLevel() {
    RewardGraph = NULL;
    EventLevelCinematicOverrideClass = NULL;
}

