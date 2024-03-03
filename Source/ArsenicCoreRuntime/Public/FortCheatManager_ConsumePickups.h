#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_ConsumePickups.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_ConsumePickups : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_ConsumePickups();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ConsumePickupsToggleEnabled();
    
};

