#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WarmupMovieComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWarmupMovieComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UWarmupMovieComponent();
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerFinishedWatchingMovie();
    
};

