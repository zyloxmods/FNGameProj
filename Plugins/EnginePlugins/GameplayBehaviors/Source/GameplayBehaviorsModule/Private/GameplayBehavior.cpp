#include "GameplayBehavior.h"

void UGameplayBehavior::K2_TriggerBehavior(AActor* Avatar, UGameplayBehaviorConfig* Config) {
}







int32 UGameplayBehavior::K2_GetNextActorIndexInSequence(int32 CurrentIndex) const {
    return 0;
}

void UGameplayBehavior::K2_EndBehavior(AActor* Avatar) {
}

void UGameplayBehavior::K2_AbortBehavior(AActor* Avatar) {
}

UGameplayBehavior::UGameplayBehavior() {
    this->TransientAvatar = NULL;
}

