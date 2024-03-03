#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "FortIndicatorComponent.generated.h"

class IFortActorIndicatorInterface;
class UFortActorIndicatorInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortIndicatorComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UFortIndicatorComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIndicatorRegistered(const TScriptInterface<IFortActorIndicatorInterface>& NewIndicator);
    
};

