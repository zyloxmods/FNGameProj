#pragma once
#include "CoreMinimal.h"
#include "BuildingGameplayActorLockOnConsumable.h"
#include "BuildingGameplayActorBlade.generated.h"

UCLASS(Blueprintable)
class ABuildingGameplayActorBlade : public ABuildingGameplayActorLockOnConsumable {
    GENERATED_BODY()
public:
    ABuildingGameplayActorBlade();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPullStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPullAborted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastOnPullStart();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastOnPullAborted();
    
};

