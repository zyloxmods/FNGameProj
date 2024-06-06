#include "BuildingTurretComponent.h"
#include "Net/UnrealNetwork.h"

void UBuildingTurretComponent::SetTargetingOverlapComponent(UPrimitiveComponent* NewTargetingOverlapComponent) {
}

void UBuildingTurretComponent::OnTargetingEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UBuildingTurretComponent::OnTargetingBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UBuildingTurretComponent::OnRep_CurrentTarget(AActor* OldTarget) {
}

void UBuildingTurretComponent::OnPerformTargetValidation() {
}

void UBuildingTurretComponent::OnFiringTimer() {
}

bool UBuildingTurretComponent::IsValidTarget_Implementation(AActor* InTarget) const {
    return false;
}

AActor* UBuildingTurretComponent::ChooseBestTarget_Implementation(TArray<AActor*>& InOutPotentialTargets) const {
    return NULL;
}

bool UBuildingTurretComponent::AttemptSetCurrentTarget(AActor* NewTarget) {
    return false;
}

void UBuildingTurretComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBuildingTurretComponent, CurrentTarget);
}

UBuildingTurretComponent::UBuildingTurretComponent() {
    FiringInterval = 1;
    CurrentTargetValidationInterval = 1;
    bPerformPeriodicValidationOnCurrentTarget = true;
    TargetingOverlapComponent = NULL;
    OwnerASC = NULL;
    CurrentTarget = NULL;
}

