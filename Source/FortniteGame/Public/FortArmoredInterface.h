#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "Templates/SubclassOf.h"
#include "FortArmoredInterface.generated.h"

class UFortAbilitySystemComponent;
class UGameplayEffect;

UINTERFACE(Blueprintable)
class UFortArmoredInterface : public UInterface {
    GENERATED_BODY()
};

class IFortArmoredInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UFortAbilitySystemComponent* GetOwningAbilityComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FBox GetArmoredArea();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<TSubclassOf<UGameplayEffect>> GetArmoredAppliedEffects();
    
};

