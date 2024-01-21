#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaSpectatorPlayersLeftBase.generated.h"

class AFortBroadcastSpectatorInfo;
class AFortGameState;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorPlayersLeftBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UAthenaSpectatorPlayersLeftBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTotalTeams(int32 InTotalTeams);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTotalPlayers(int32 InTotalPlayers);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTeamsLeft(int32 InTeamsLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePlayersLeft(int32 InPlayersLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMaxSquadSize(int32 MaxSquadSize);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameStateSet(AFortGameState* InGameState);
    
    UFUNCTION(BlueprintCallable)
    void OnBroadcastSpectatorInfoReplicated(AFortBroadcastSpectatorInfo* BroadcastSpectatorInfo);
    
};

