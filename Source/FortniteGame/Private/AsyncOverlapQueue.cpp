#include "AsyncOverlapQueue.h"

void UAsyncOverlapQueue::ThrottledAsyncSphereOverlapActors(AActor* ContextActor, const FVector& Location, const float Radius, const bool bCheckLineOfSight, const TArray<AActor*>& ActorsToIgnore, FShouldCancelOverlapProcess ShouldCancelProcess, FProcessHitActor ProcessHitActorFunction, FOnProcessComplete CompletionFunction, TEnumAsByte<ECollisionChannel> TraceChannel) {
}

void UAsyncOverlapQueue::AsyncSphereOverlapActors(AActor* ContextActor, const FVector& Location, const float Radius, const TArray<AActor*>& ActorsToIgnore, FShouldCancelOverlapProcess ShouldCancelProcess, FProcessHitActor ProcessHitActorFunction, FOnProcessComplete CompletionFunction, TEnumAsByte<ECollisionChannel> TraceChannel) {
}

UAsyncOverlapQueue::UAsyncOverlapQueue() {
}

