#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_Bismuth.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_Bismuth : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_Bismuth();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void BismuthSetReflectKillDelay(const float Delay);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void BismuthSetNumOfBotsToSpawn(const int32 Num);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void BismuthSetMinimumDistanceBetweenSpawners2D(const float Distance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void BismuthSetAIBotsHostileToEachOther(const bool bHostile);
    
};

