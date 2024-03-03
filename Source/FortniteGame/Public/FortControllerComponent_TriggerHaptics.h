#pragma once
#include "CoreMinimal.h"
#include "ControllerComponent.h"
#include "FortControllerComponent_TriggerHaptics.generated.h"

class AFortPawn;
class AFortWeapon;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_TriggerHaptics : public UControllerComponent {
    GENERATED_BODY()
public:
    UFortControllerComponent_TriggerHaptics();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateTriggerHaptics();
    
    UFUNCTION(BlueprintCallable)
    void ResetTriggerHaptics();
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PreviousWeapon);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnChanged(AFortPawn* InPawn);
    
};

