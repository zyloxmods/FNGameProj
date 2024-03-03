#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_Infiltration.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_Infiltration : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_Infiltration();
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ForceDefendIntel();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ForceCaptureIntel();
    
};

