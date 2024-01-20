#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "OnProcessCompleteDelegate.h"
#include "ProcessHitActorDelegate.h"
#include "ShouldCancelOverlapProcessDelegate.h"
#include "AsyncOverlapQueue.generated.h"

class AActor;

UCLASS(Blueprintable)
class FORTNITEGAME_API UAsyncOverlapQueue : public UObject {
    GENERATED_BODY()
public:
    UAsyncOverlapQueue();
    UFUNCTION(BlueprintCallable)
    void ThrottledAsyncSphereOverlapActors(AActor* ContextActor, const FVector& Location, const float Radius, const TArray<AActor*>& ActorsToIgnore, FShouldCancelOverlapProcess ShouldCancelProcess, FProcessHitActor ProcessHitActorFunction, FOnProcessComplete CompletionFunction);
    
    UFUNCTION(BlueprintCallable)
    static void AsyncSphereOverlapActors(AActor* ContextActor, const FVector& Location, const float Radius, const TArray<AActor*>& ActorsToIgnore, FShouldCancelOverlapProcess ShouldCancelProcess, FProcessHitActor ProcessHitActorFunction, FOnProcessComplete CompletionFunction);
    
};

