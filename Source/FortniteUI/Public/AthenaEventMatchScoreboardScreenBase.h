#pragma once
#include "CoreMinimal.h"
#include "UIActionTag.h"
#include "Engine/DataTable.h"
#include "AthenaEventScreenBase.h"
#include "AthenaEventMatchScoreboardScreenBase.generated.h"

class UAthenaRemoteSquadViewData;
class UCommonListView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaEventMatchScoreboardScreenBase : public UAthenaEventScreenBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIActionTag SortByElimsAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIActionTag SortByPlaceAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SortByEliminationsActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SortByPlaceActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAthenaRemoteSquadViewData*> SquadDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ScoreboardListView;
    
public:
    UAthenaEventMatchScoreboardScreenBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSquadIdsVisible_BP(bool bSquadIdsVisible);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSquadKillScoreChanged(UAthenaRemoteSquadViewData* InSquadData, int32 InKillScore);
    
    UFUNCTION(BlueprintCallable)
    void HandleSquadEliminated(UAthenaRemoteSquadViewData* InSquadData);
    
};

