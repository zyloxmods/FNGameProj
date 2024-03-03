#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_CustomStormMovement.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_CustomStormMovement : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_CustomStormMovement();
    UFUNCTION(BlueprintCallable, Exec)
    void CustomStormMovementDebug(float TextScale);
    
};

