#include "FortHUDTargetUnderReticleWidget.h"

void UFortHUDTargetUnderReticleWidget::Setup(bool bInKeepTargetUntilNewValidTarget, FGameplayTagContainer InTargetRequiredTags) {
}

void UFortHUDTargetUnderReticleWidget::OnTargetHealthChanged_Implementation() {
}

void UFortHUDTargetUnderReticleWidget::OnTargetDied_Implementation() {
}

void UFortHUDTargetUnderReticleWidget::OnTargetDestroyed_Implementation() {
}

void UFortHUDTargetUnderReticleWidget::OnTargetChanged_Implementation() {
}

void UFortHUDTargetUnderReticleWidget::OnTargetActorDestroyed(AActor* DestroyedActor) {
}

void UFortHUDTargetUnderReticleWidget::HandleOnHUDTargetUnderReticle(TScriptInterface<IFortHUDTargetUnderReticleInterface>& NewTarget) {
}

void UFortHUDTargetUnderReticleWidget::ClearTarget() {
}

UFortHUDTargetUnderReticleWidget::UFortHUDTargetUnderReticleWidget() {
    this->bKeepTargetUntilNewValidTarget = false;
}

