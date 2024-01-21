#pragma once
#include "CoreMinimal.h"
#include "FortGameStateZone.h"
#include "FortGameStateBoss.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameStateBoss : public AFortGameStateZone {
    GENERATED_BODY()
public:
    AFortGameStateBoss();
    UFUNCTION(BlueprintCallable)
    void BossSpawned();
    
    UFUNCTION(BlueprintCallable)
    void BossKilled();
    
    UFUNCTION(BlueprintCallable)
    void AllPlayersDied();
    
};

