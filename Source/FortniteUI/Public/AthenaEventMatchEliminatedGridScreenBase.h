#pragma once
#include "CoreMinimal.h"
#include "AthenaEventScreenBase.h"
#include "Templates/SubclassOf.h"
#include "AthenaEventMatchEliminatedGridScreenBase.generated.h"

class UAthenaEventMatchTeamWidgetBase;
class UAthenaRemotePlayerViewData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaEventMatchEliminatedGridScreenBase : public UAthenaEventScreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaEventMatchTeamWidgetBase> TeamWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAthenaEventMatchTeamWidgetBase*> EliminatedTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumColumns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTeamCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTeamSize;
    
public:
    UAthenaEventMatchEliminatedGridScreenBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeamEliminated_BP();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerEliminatedStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsEliminated);
    
};

