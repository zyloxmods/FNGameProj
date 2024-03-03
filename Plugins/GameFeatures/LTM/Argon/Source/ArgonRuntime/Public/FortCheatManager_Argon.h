#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_Argon.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_Argon : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_Argon();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ArgonTeleportToEndPoint();
    
};

