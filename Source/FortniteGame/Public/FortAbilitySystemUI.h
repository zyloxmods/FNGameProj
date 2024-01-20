#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortGameplayEffectDescription.h"
#include "Templates/SubclassOf.h"
#include "FortAbilitySystemUI.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAbilitySystemUI : public UObject {
    GENERATED_BODY()
public:
    UFortAbilitySystemUI();
    UFUNCTION(BlueprintCallable)
    static FFortGameplayEffectDescription GetStaticGameplayEffectDescription(const UGameplayEffect* Effect, float Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGameplayEffect* GetDefaultObjectOfGameplayEffectType(TSubclassOf<UGameplayEffect> EffectType);
    
};

