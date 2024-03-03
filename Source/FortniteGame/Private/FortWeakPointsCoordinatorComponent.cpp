#include "FortWeakPointsCoordinatorComponent.h"
#include "Net/UnrealNetwork.h"

void UFortWeakPointsCoordinatorComponent::OnWeakPointStateChanged(AFortWeakPoint* WeakPoint, EFortWeakPointState NewState) {
}

void UFortWeakPointsCoordinatorComponent::OnWeakPointDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum) {
}

void UFortWeakPointsCoordinatorComponent::OnRep_WeakPoints() {
}

void UFortWeakPointsCoordinatorComponent::DeactivateAllWeakPointsByTag(const FGameplayTag& WeakPointsTag) {
}

void UFortWeakPointsCoordinatorComponent::ActivateAllWeakPointsByTag(const FGameplayTag& WeakPointsTag) {
}

void UFortWeakPointsCoordinatorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortWeakPointsCoordinatorComponent, WeakPointTypes);
}

UFortWeakPointsCoordinatorComponent::UFortWeakPointsCoordinatorComponent() {
}

