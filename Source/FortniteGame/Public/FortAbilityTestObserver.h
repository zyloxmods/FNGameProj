#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "FortAbilityTestObserver.generated.h"

class APawn;
class UGameplayAbility;

UCLASS(Blueprintable)
class AFortAbilityTestObserver : public AActor {
    GENERATED_BODY()
public:
    AFortAbilityTestObserver();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasAbilityTagActivated(const FGameplayTag& AbilityTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasAbilityActivated(UGameplayAbility* Ability) const;
    
    UFUNCTION(BlueprintCallable)
    void StopObserving();
    
    UFUNCTION(BlueprintCallable)
    void StartObserving(APawn* Pawn);
    
};

