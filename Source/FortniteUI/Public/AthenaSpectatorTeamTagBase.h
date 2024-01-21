#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaSpectatorTeamTagBase.generated.h"

class AFortGameState;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorTeamTagBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UAthenaSpectatorTeamTagBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMaxSquadSize(int32 MaxSquadSize);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameStateSet(AFortGameState* InGameState);
    
};

