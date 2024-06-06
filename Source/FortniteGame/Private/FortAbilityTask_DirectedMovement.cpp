#include "FortAbilityTask_DirectedMovement.h"
#include "Net/UnrealNetwork.h"

UFortAbilityTask_DirectedMovement* UFortAbilityTask_DirectedMovement::DirectedMovementToLocation(UGameplayAbility* OwningAbility, FVector MovementTargetLocation, TEnumAsByte<EFortDirectedMovementSpace::Type> MovementSpaceType, float MovementDuration, float CloseEnoughDistance, bool ModifyZ, bool NewBCancelOnFalling) {
    return NULL;
}

UFortAbilityTask_DirectedMovement* UFortAbilityTask_DirectedMovement::DirectedMovementToComponent(UGameplayAbility* OwningAbility, USceneComponent* NewTargetComponent, float MaxMovementDistance, float MovementDuration, float IdealDistance, bool ModifyZ, bool NewBCancelOnFalling) {
    return NULL;
}

UFortAbilityTask_DirectedMovement* UFortAbilityTask_DirectedMovement::DirectedMovementToActor(UGameplayAbility* OwningAbility, AActor* TargetActor, float MaxMovementDistance, float MovementDuration, float IdealDistance, bool ModifyZ, bool NewBCancelOnFalling) {
    return NULL;
}

UFortAbilityTask_DirectedMovement* UFortAbilityTask_DirectedMovement::DirectedMovement(UGameplayAbility* OwningAbility, FVector MovementDirection, TEnumAsByte<EFortDirectedMovementSpace::Type> MovementSpaceType, float NewMovementDistance, float MovementDuration, float IdealDistance, bool ModifyZ, bool NewBCancelOnFalling) {
    return NULL;
}

void UFortAbilityTask_DirectedMovement::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAbilityTask_DirectedMovement, TargetLocation);
    DOREPLIFETIME(UFortAbilityTask_DirectedMovement, TargetComponent);
    DOREPLIFETIME(UFortAbilityTask_DirectedMovement, MovementDistance);
    DOREPLIFETIME(UFortAbilityTask_DirectedMovement, IdealArrivalDistance);
    DOREPLIFETIME(UFortAbilityTask_DirectedMovement, DurationOfMovement);
    DOREPLIFETIME(UFortAbilityTask_DirectedMovement, bModifyZ);
    DOREPLIFETIME(UFortAbilityTask_DirectedMovement, bCancelOnFalling);
}

UFortAbilityTask_DirectedMovement::UFortAbilityTask_DirectedMovement() {
    TargetComponent = NULL;
    MovementDistance = 1;
    IdealArrivalDistance = 1;
    DurationOfMovement = 1;
    bModifyZ = false;
    bCancelOnFalling = false;
    MovementComponent = NULL;
}

