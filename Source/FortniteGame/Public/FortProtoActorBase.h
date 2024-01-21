#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortProtoActorBase.generated.h"

UCLASS(Blueprintable)
class AFortProtoActorBase : public AActor {
    GENERATED_BODY()
public:
    AFortProtoActorBase();
    UFUNCTION(BlueprintCallable)
    void SetStreamingPriority(float Value);
    
};

