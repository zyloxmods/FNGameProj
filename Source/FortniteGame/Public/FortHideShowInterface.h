#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortHideShowInterface.generated.h"

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UFortHideShowInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortHideShowInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoShowUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoHideUI();
    
};

