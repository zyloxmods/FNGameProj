#include "AsyncTraceQueue.h"

void UAsyncTraceQueue::ThrottledAsyncTrace_SourceTarget(UObject* WorldContextObject, const bool bUseLocalCameraAsSource, const AActor* SourceActor, const FVector& SourceOffset, const AActor* TargetActor, const FVector& TargetOffset, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<ECollisionChannel> CollisionChannel, FOnTraceProcessComplete CompletionFunction) {
}

void UAsyncTraceQueue::ThrottledAsyncTrace(UObject* WorldContextObject, const FVector& StartLocation, const FVector& EndLocation, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<ECollisionChannel> CollisionChannel, FOnTraceProcessComplete CompletionFunction) {
}

void UAsyncTraceQueue::AsyncTrace_Immediate(UObject* WorldContextObject, const FVector& StartLocation, const FVector& EndLocation, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<ECollisionChannel> CollisionChannel, FOnTraceProcessComplete CompletionFunction) {
}

UAsyncTraceQueue::UAsyncTraceQueue() {
}

