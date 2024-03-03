#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LockableInterface.generated.h"

class UPrimitiveComponent;

UINTERFACE(Blueprintable)
class ULockableInterface : public UInterface {
    GENERATED_BODY()
};

class ILockableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UPrimitiveComponent*> GetComponentToLock();
    
};

