#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AthenaEventScreenBase.h"
#include "AthenaEventMatchScoreboardScreenBase.generated.h"

class UAthenaRemoteSquadViewData;
class UCommonListView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaEventMatchScoreboardScreenBase : public UAthenaEventScreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ScoreboardListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleStormcapDamageActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SortByEliminationsActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SortByPlaceActionRowHandle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAthenaRemoteSquadViewData*> SquadDataArray;
    
public:
    UAthenaEventMatchScoreboardScreenBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStormcapDamageVisible(bool InVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSquadIdsVisible_BP(bool bSquadIdsVisible);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetSquadIdsVisible(bool bSquadIdsVisible);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleStormcapDamageActionExecuted(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadKillscoreChanged(UAthenaRemoteSquadViewData* InSquadData, int32 InKillScore);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadEliminated(UAthenaRemoteSquadViewData* InSquadData);
    
    UFUNCTION(BlueprintCallable)
    void OnSortByPlaceActionExecuted(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnSortByEliminationsActionExecuted(bool& bPassThrough);
    
};

