#include "FortAbilityTask_CommitAccountCosts.h"

UFortAbilityTask_CommitAccountCosts* UFortAbilityTask_CommitAccountCosts::CommitAccountCosts(UGameplayAbility* OwningAbility) {
    return NULL;
}

UFortAbilityTask_CommitAccountCosts::UFortAbilityTask_CommitAccountCosts() {
    this->bWasCancellable = false;
    this->bRequestPending = false;
    this->bCommittedLocally = false;
}

