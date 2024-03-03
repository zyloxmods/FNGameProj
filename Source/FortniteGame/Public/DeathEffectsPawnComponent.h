#pragma once
#include "CoreMinimal.h"
#include "PawnComponent.h"
#include "DeathEffectsPawnComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDeathEffectsPawnComponent : public UPawnComponent {
    GENERATED_BODY()
public:
    UDeathEffectsPawnComponent();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void ClientPlayWinnerDeathEffects();
    
};

