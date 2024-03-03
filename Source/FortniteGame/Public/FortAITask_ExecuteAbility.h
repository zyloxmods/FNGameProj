#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AITask_ExecuteAbility.h"
#include "FortAITask_ExecuteAbility.generated.h"

class AActor;
class AController;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UFortAITask_ExecuteAbility : public UAITask_ExecuteAbility {
    GENERATED_BODY()
public:
    UFortAITask_ExecuteAbility();
protected:
    UFUNCTION(BlueprintCallable)
    void OnInjectedHitResultDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
};

