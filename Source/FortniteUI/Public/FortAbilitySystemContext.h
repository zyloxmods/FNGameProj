#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "AttributeChangedDelegateDelegate.h"
#include "FortAbilitySystemContext.generated.h"

class UAbilitySystemComponent;
class UWidget;

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UFortAbilitySystemContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UFortAbilitySystemContext();
    UFUNCTION(BlueprintCallable)
    void RemoveDelegatesFromWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void RegisterForAttributeChanged(UWidget* Widget, UAbilitySystemComponent* ASC, FGameplayAttribute Attribute, FAttributeChangedDelegate Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const;
    
};

