#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AthenaCoupledWidgetInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UAthenaCoupledWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IAthenaCoupledWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BindTo(UObject* AssociatedObject);
    
};

