#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortGameStateZone.h"
#include "OnBuildingDestroyedDelegate.h"
#include "FortGameStateFOB.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameStateFOB : public AFortGameStateZone {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuildingDestroyed OnBuildingDestroyedDel;
    
public:
    AFortGameStateFOB();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGameDifficultyRow(const FDataTableRowHandle& GameDifficultyInfo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGameDifficultyExplicitly(const float InGameDifficulty);
    
};

