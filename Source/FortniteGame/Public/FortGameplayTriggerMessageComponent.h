#pragma once
#include "CoreMinimal.h"
#include "FortGameplayMessageComponentBase.h"
#include "FortGameplayTriggerMessageComponent.generated.h"

class AController;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Creative, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortGameplayTriggerMessageComponent : public UFortGameplayMessageComponentBase {
    GENERATED_BODY()
public:
    UFortGameplayTriggerMessageComponent();
    UFUNCTION(BlueprintCallable)
    void SendTriggerMessage(AController* TriggerInstigator);
    
};

