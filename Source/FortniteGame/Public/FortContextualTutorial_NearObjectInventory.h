#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "GameplayCueInterface.h"
#include "GameplayEffectTypes.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_NearObjectInventory.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorial_NearObjectInventory : public UFortContextualTutorial, public IGameplayCueInterface {
    GENERATED_BODY()
public:
    UFortContextualTutorial_NearObjectInventory();
private:
    UFUNCTION(BlueprintCallable)
    void HandleStartSkydivingForActivation();
    
    UFUNCTION(BlueprintCallable)
    void GameplayCue_Wumba_Upgraded(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ForwardGameplayCueToParent() override PURE_VIRTUAL(ForwardGameplayCueToParent,);
    
};

