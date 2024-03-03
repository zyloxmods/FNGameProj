#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AthenaSpectatorPlayerListBase.h"
#include "AthenaSpectatorMapPlayerListBase.generated.h"

class UAthenaMapLayer;
class UAthenaRemotePlayerViewData;
class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorMapPlayerListBase : public UAthenaSpectatorPlayerListBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleOnlyShowMapPlayersRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SortBySquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SortByPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SortByEliminations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SortByEventScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SortByState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMapLayer* MapLayer;
    
public:
    UAthenaSpectatorMapPlayerListBase();
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerSquadIdChanged(UAthenaRemotePlayerViewData* InPlayerData, uint8 InSquadId);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerNameChanged(UAthenaRemotePlayerViewData* InPlayerData, const FString& InPlayerName);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerKillScoreChanged(UAthenaRemotePlayerViewData* InPlayerData, int32 InKillScore);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerIsInRelevancyChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsInRelevancy);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEliminatedStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsEliminated);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleSquadIdVisibilityChanged(bool bSquadIdsVisible);
    
};

