#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortHideShowInterface.generated.h"

UINTERFACE(Blueprintable)
class UFortHideShowInterface : public UInterface {
    GENERATED_BODY()
};

class IFortHideShowInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoShowUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoHideUI();
    
};

