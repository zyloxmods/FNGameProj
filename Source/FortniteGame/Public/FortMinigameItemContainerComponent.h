#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LevelSaveSpawnable.h"
#include "FortMinigameItemContainerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortMinigameItemContainerComponent : public UActorComponent, public ILevelSaveSpawnable {
    GENERATED_BODY()
public:
    UFortMinigameItemContainerComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_NotifyItemContainerChanged();
    
    
    // Fix for true pure virtual functions not being implemented
};

