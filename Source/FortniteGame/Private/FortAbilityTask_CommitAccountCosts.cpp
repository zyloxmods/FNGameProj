#include "FortAbilityTask_CommitAccountCosts.h"

UFortAbilityTask_CommitAccountCosts* UFortAbilityTask_CommitAccountCosts::CommitAccountCosts(UGameplayAbility* OwningAbility) {
    return NULL;
}

UFortAbilityTask_CommitAccountCosts::UFortAbilityTask_CommitAccountCosts() {
    bWasCancellable = false;
    bRequestPending = false;
    bCommittedLocally = false;
}

