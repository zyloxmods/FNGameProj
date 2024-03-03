#include "FortGameplayAbility_Mantis.h"

void UFortGameplayAbility_Mantis::OnMontageFinished() {
}

void UFortGameplayAbility_Mantis::OnMontageCancelled() {
}


UFortGameplayAbility_Mantis::UFortGameplayAbility_Mantis() {
    this->MantisPawnComponent = NULL;
    this->MontageTask = NULL;
    this->RootMotionTask = NULL;
}

