#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PickupInstigatorData.h"
#include "FortPickupInstigator.generated.h"

class IFortPickupEventHandler;
class UFortPickupEventHandler;

UINTERFACE(Blueprintable)
class UFortPickupInstigator : public UInterface {
    GENERATED_BODY()
};

class IFortPickupInstigator : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTrackedIndex(int32 TrackedIndex, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetTrackedItemCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<int32> GetTrackedIndices() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetTrackedIndex(int32 ItemIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IFortPickupEventHandler> GetPickupEventHandler() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetInstigatorData(FPickupInstigatorData& InstigatorData, int32 ItemIndex) const;
    
};

