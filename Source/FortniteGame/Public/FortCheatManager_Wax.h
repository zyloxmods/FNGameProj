#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_Wax.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_Wax : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_Wax();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetTargetGoalScore(int32 TargetGoalScore);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetRespawnsRemaining(int32 NumberOfRespawnsRemaining);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetGameScore(int32 CurrentScoreAt);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void EnableWaxRespawningLogic();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void DisableWaxRespawningLogic();
    
};

