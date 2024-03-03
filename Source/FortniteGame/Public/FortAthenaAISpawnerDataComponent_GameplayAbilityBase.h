#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAthenaAISpawnerDataComponent.h"
#include "InitialGameplayEffectInfo.h"
#include "FortAthenaAISpawnerDataComponent_GameplayAbilityBase.generated.h"

class UFortAbilitySet;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase : public UFortAthenaAISpawnerDataComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInitialGameplayEffectInfo> InitialGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAbilitySet*> InitialGameplayAbilitiesSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LooseTagsToApplyToPawn;
    
public:
    UFortAthenaAISpawnerDataComponent_GameplayAbilityBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetInitialGameplayEffects(TArray<FInitialGameplayEffectInfo>& OutGEs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetInitialGameplayAbilities(TArray<UFortAbilitySet*>& OutGASets) const;
    
};

