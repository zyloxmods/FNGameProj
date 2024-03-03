#pragma once
#include "CoreMinimal.h"
#include "ChildCheatManager.h"
#include "FortCheatManagerAthena.generated.h"

UCLASS(Blueprintable)
class UFortCheatManagerAthena : public UChildCheatManager {
    GENERATED_BODY()
public:
    UFortCheatManagerAthena();
    UFUNCTION(BlueprintCallable, Exec)
    void SetAlwaysShowContrails(bool bEnabled);
    
};

