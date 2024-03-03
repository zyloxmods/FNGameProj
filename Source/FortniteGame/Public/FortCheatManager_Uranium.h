#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_Uranium.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_Uranium : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_Uranium();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetCartPushAreaSizeScalar(float PushAreaSizeScalar);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetCartBaseSpeed(float NewBaseSpeed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawUraniumRespawnLocations(bool bDraw);
    
};

