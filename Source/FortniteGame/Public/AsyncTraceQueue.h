#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "OnTraceProcessCompleteDelegate.h"
#include "AsyncTraceQueue.generated.h"

class AActor;

UCLASS(Blueprintable)
class UAsyncTraceQueue : public UObject {
    GENERATED_BODY()
public:
    UAsyncTraceQueue();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ThrottledAsyncTrace_SourceTarget(UObject* WorldContextObject, const bool bUseLocalCameraAsSource, const AActor* SourceActor, const FVector& SourceOffset, const AActor* TargetActor, const FVector& TargetOffset, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<ECollisionChannel> CollisionChannel, FOnTraceProcessComplete CompletionFunction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ThrottledAsyncTrace(UObject* WorldContextObject, const FVector& StartLocation, const FVector& EndLocation, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<ECollisionChannel> CollisionChannel, FOnTraceProcessComplete CompletionFunction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AsyncTrace_Immediate(UObject* WorldContextObject, const FVector& StartLocation, const FVector& EndLocation, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<ECollisionChannel> CollisionChannel, FOnTraceProcessComplete CompletionFunction);
    
};

