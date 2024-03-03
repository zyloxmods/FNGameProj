#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_Arsenic.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_Arsenic : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_Arsenic();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ToggleWinConditionEnabled();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ToggleInfectedModifiedDamageEnabled();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ToggleHeartbeatEnabled();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ToggleHealOverTimeEnabled();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ToggleGrowlEnabled();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ToggleDBNOEnabled();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetMatchTime(float NewTime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetInfectedDamageToStructuralBuildingPercent(float DamagePercent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetInfectedDamageToBuildingPercent(float DamagePercent);
    
};

