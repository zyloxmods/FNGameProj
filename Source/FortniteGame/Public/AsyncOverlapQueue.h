#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "OnProcessCompleteDelegate.h"
#include "ProcessHitActorDelegate.h"
#include "ShouldCancelOverlapProcessDelegate.h"
#include "AsyncOverlapQueue.generated.h"

class AActor;

UCLASS(Blueprintable)
class UAsyncOverlapQueue : public UObject {
    GENERATED_BODY()
public:
    UAsyncOverlapQueue();
    UFUNCTION(BlueprintCallable)
    void ThrottledAsyncSphereOverlapActors(AActor* ContextActor, const FVector& Location, const float Radius, const bool bCheckLineOfSight, const TArray<AActor*>& ActorsToIgnore, FShouldCancelOverlapProcess ShouldCancelProcess, FProcessHitActor ProcessHitActorFunction, FOnProcessComplete CompletionFunction, TEnumAsByte<ECollisionChannel> TraceChannel);
    
    UFUNCTION(BlueprintCallable)
    static void AsyncSphereOverlapActors(AActor* ContextActor, const FVector& Location, const float Radius, const TArray<AActor*>& ActorsToIgnore, FShouldCancelOverlapProcess ShouldCancelProcess, FProcessHitActor ProcessHitActorFunction, FOnProcessComplete CompletionFunction, TEnumAsByte<ECollisionChannel> TraceChannel);
    
};

