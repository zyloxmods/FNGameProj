#include "FortAIBuddy.h"

void AFortAIBuddy::StopItemDrain() {
}

bool AFortAIBuddy::StartItemDrain(AFortPlayerPawn* PlayerPawn) {
    return false;
}

void AFortAIBuddy::RemoveTagListener(AActor* TargetActor, const FGameplayTag Tag) {
}






void AFortAIBuddy::AddTagListener(AActor* TargetActor, const FGameplayTag Tag) {
}

AFortAIBuddy::AFortAIBuddy() {
    this->ConsumableItem = NULL;
    this->DrainPawn = NULL;
    this->DrainItem = NULL;
}

