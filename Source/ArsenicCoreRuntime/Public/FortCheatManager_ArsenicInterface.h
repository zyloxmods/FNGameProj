#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_ArsenicInterface.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_ArsenicInterface : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_ArsenicInterface();
protected:
    UFUNCTION(BlueprintCallable)
    void TickHightlightAllBots();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ArsenicCoreToggleHighlightAllBots();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ArsenicCoreToggleDrawPopulationGridOnMap();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ArsenicCoreSpawnScriptedPawn(const FString& ProfileName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ArsenicCoreSetPopulationGridRedValue(int32 RedValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ArsenicCoreLogPopulationGridData();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ArsenicCoreKillAllNonGhosts();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ArsenicCoreKillAllGhosts();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ArsenicCoreConvertToHuman();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ArsenicCoreConvertToGhost();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ArsenicCoreConvertLookAtPawnToHuman();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ArsenicCoreConvertLookAtPawnToGhost();
    
};

