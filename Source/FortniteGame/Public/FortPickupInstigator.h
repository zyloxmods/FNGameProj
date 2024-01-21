#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PickupInstigatorData.h"
#include "FortPickupInstigator.generated.h"

class AFortPickup;

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UFortPickupInstigator : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortPickupInstigator : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTrackedIndex(int32 TrackedIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleItemRemoved();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetTrackedIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetInstigatorData(FPickupInstigatorData& InstigatorData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyToPickup(AFortPickup* Pickup);
    
};

