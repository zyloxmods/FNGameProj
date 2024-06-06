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
    ConsumableItem = NULL;
    DrainPawn = NULL;
    DrainItem = NULL;
}

