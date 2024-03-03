#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_Payback.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_Payback : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_Payback();
    UFUNCTION(BlueprintCallable, Exec)
    void PaybackDebug(float TextScale);
    
};

