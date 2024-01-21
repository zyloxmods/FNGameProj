#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortClientEvent.h"
#include "FortClientEventInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UFortClientEventInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortClientEventInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BlueprintCustomHandleClientEvent(UObject* EventSource, UObject* EventFocus, const FFortClientEvent& ClientEvent);
    
};

