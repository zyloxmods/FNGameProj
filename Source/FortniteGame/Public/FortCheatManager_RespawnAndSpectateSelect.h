#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_RespawnAndSpectateSelect.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_RespawnAndSpectateSelect : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_RespawnAndSpectateSelect();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void RespawnScreenToggleMakeAllRespawnTargetsAvailableToAllPlayers();
    
};

