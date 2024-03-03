#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OpenableInterface.generated.h"

class AController;

UINTERFACE(Blueprintable)
class UOpenableInterface : public UInterface {
    GENERATED_BODY()
};

class IOpenableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void Open(AController* ControllerInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsOpen() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void Close(AController* ControllerInstigator);
    
};

