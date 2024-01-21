#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaSpectatorPlayerListScreenBase.generated.h"

class AFortPlayerControllerSpectating;
class AFortPlayerState;
class UAthenaSpectatorPlayerListRowData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorPlayerListScreenBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaSpectatorPlayerListRowData*> RowDataArray;
    
public:
    UAthenaSpectatorPlayerListScreenBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateListUI();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerDied(AFortPlayerState* NewlyDeadPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerBecameRelevant(AFortPlayerState* NewlyRelevantPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerBecameIrrelevant(AFortPlayerState* NewlyIrrelevantPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorPC, AFortPlayerState* NewFollowedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void ClearPlayers();
    
};

