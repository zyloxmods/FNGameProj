#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortGameStatePvE.h"
#include "FortGameStateBoss.generated.h"

class AActor;
class AController;

UCLASS(Blueprintable)
class AFortGameStateBoss : public AFortGameStatePvE {
    GENERATED_BODY()
public:
    AFortGameStateBoss();
    UFUNCTION(BlueprintCallable)
    void BossSpawned();
    
    UFUNCTION(BlueprintCallable)
    void BossKilled(const AController* InstigatingController, const AActor* DamageCausingActor, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable)
    void AllPlayersDied();
    
};

