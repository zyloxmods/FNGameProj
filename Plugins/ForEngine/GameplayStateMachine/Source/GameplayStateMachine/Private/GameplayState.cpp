#include "GameplayState.h"

void UGameplayState::UpdateState_Implementation(const float DeltaTime) {
}

FGameplayTag UGameplayState::GetStateId() const {
    return FGameplayTag{};
}

void UGameplayState::EndState_Implementation(const FGameplayTag& NextStateId) {
}

void UGameplayState::BeginState_Implementation(const FGameplayTag& PrevStateId) {
}

UGameplayState::UGameplayState() {
    this->bReplicates = false;
}

