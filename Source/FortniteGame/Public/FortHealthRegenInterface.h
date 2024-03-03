#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Templates/SubclassOf.h"
#include "FortHealthRegenInterface.generated.h"

class UGameplayEffect;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UFortHealthRegenInterface : public UInterface {
    GENERATED_BODY()
};

class IFortHealthRegenInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual TSubclassOf<UGameplayEffect> GetShieldRegenGameplayEffectClass() const PURE_VIRTUAL(GetShieldRegenGameplayEffectClass, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual UGameplayEffect* GetShieldRegenGameplayEffect() const PURE_VIRTUAL(GetShieldRegenGameplayEffect, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual UGameplayEffect* GetShieldRegenDelayGameplayEffect() const PURE_VIRTUAL(GetShieldRegenDelayGameplayEffect, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual TSubclassOf<UGameplayEffect> GetHealthRegenGameplayEffectClass() const PURE_VIRTUAL(GetHealthRegenGameplayEffectClass, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual UGameplayEffect* GetHealthRegenGameplayEffect() const PURE_VIRTUAL(GetHealthRegenGameplayEffect, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual UGameplayEffect* GetHealthRegenDelayGameplayEffect() const PURE_VIRTUAL(GetHealthRegenDelayGameplayEffect, return NULL;);
    
};

