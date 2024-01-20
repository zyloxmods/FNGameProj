#include "FortAbilityTask_MoveAI.h"
#include "Templates/SubclassOf.h"

UFortAbilityTask_MoveAI* UFortAbilityTask_MoveAI::CreateMoveAITask(UGameplayAbility* OwningAbility, FName TaskInstanceName, AActor* MoveActor, FVector MoveLocation, TEnumAsByte<EPawnActionMoveMode::Type> MoveMode, TEnumAsByte<EPathObstacleAction::Type> PathObstacleAction, bool bStopAtEnd, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bFinishOnPlayerCollision, bool bProjectGoalLocationOnNavMesh, float AcceptableRadius, TSubclassOf<AFortPawn> PushBumpedPawnClass, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bUseContinuousGoalTracking) {
    return NULL;
}

UFortAbilityTask_MoveAI::UFortAbilityTask_MoveAI() {
}

